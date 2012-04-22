<?php

/**
 * @file media_vimeo/includes/themes/media_vimeo.theme.inc
 *
 * Theme and preprocess functions for Media: Vimeo.
 */

/**
 * Preprocess function for theme('media_vimeo_video').
 */
function media_vimeo_preprocess_media_vimeo_video(&$variables) {
  // Build the URL for display.
  $uri = $variables['uri'];
  $wrapper = file_stream_wrapper_get_instance_by_uri($uri);
  $parts = $wrapper->get_parameters();
  $variables['video_id'] = $parts['v'];

  $wrapper_id = 'media_vimeo_' . $variables['video_id'] . '_' . $variables['id'];
  $variables['wrapper_id'] = $wrapper_id;

  // Load defaults and coerce these variables to integers.
  foreach (array('width', 'height', 'autoplay', 'fullscreen', 'loop', 'portrait', 'title', 'byline') as $key) {
    $variables[$key] = (int) (isset($variables[$key]) ? $variables[$key] : media_vimeo_variable_get($key));
  }
  $variables['color'] = str_replace('#', '', isset($variables['color']) ? $variables['color'] : media_vimeo_variable_get('color'));

  // Copy the variables that will be encoded into URLs into a sub array.
  $variables['options'] = array(
    'api' => $variables['api'],
    'autoplay' => $variables['autoplay'],
    'loop' => $variables['loop'],
    'color' => $variables['color'],
    'portrait' => $variables['portrait'],
    'title' => $variables['title'],
    'byline' => $variables['byline'],
    'player_id' => $wrapper_id,
  );

  $url = url('http://player.vimeo.com/video/' . $variables['video_id'], array('query' => array($variables['options'])));

  $variables['output'] = <<<OUTPUT
    <iframe src="{$url}" width="{$variables['width']}" height="{$variables['height']}" frameborder="0"></iframe>
OUTPUT;

/* I'm not sure that these are still necessary:
  // Pass the settings to replace the object tag with an iframe.
  $settings['media_vimeo'][$wrapper_id] = array(
    'width' => $variables['width'],
    'height' => $variables['height'],
    'video_id' => $variables['video_id'],
    'fullscreen' => $variables['fullscreen'],
    'id' => $wrapper_id .'_iframe',
    'options' => $variables['options'],
  );
  drupal_add_js($settings, 'setting');
  drupal_add_js(drupal_get_path('module', 'media_vimeo') . '/js/media_vimeo.js');
  drupal_add_css(drupal_get_path('module', 'media_vimeo') . '/css/media_vimeo.css');
  drupal_add_js(drupal_get_path('module', 'media_vimeo') . '/js/flash_detect_min.js');
*/
}

function theme_media_vimeo_field_formatter_styles($variables) {
  $element = $variables['element'];
  $style = $variables['style'];
  $variables['file'] = $element['#item'];
  $variables['uri'] = $variables['file']['uri'];
  $variables['style_name'] = $style['name'];
  return theme('media_vimeo_embed', $variables);
}

/**
 * Preview for Styles UI.
 */
function theme_media_vimeo_preview_style($variables) {
  $variables['uri'] = media_vimeo_variable_get('preview_uri');
  $variables['field_type'] = 'file';
  $variables['object'] = file_uri_to_object($variables['uri']);

  return theme('styles', $variables);
}

/**
 * NOTE: Deprecated with Styles version 2.
 */
function theme_media_vimeo_styles($variables) {
  $style = $variables['style'];
  $variables['file'] = $variables['object'];
  $variables['uri'] = $variables['object']->uri;
  $variables['style_name'] = $style['name'];
  return theme('media_vimeo_embed', $variables);
}

/**
 * @todo: get this working
 *
 * This code is for embedding videos in WYSIYWG areas, not currently working.
 * NOTE: Deprecated with Styles version 2.
 */
function theme_media_vimeo_embed($variables) {
  $preset_name = $variables['preset_name'];
  $preset = styles_containers_available_styles('file', 'media_vimeo', $preset_name);
  $output = '';
  if (!empty($preset)) {
    // Build the URL for display.
    $uri = $variables['uri'];
    $wrapper = file_stream_wrapper_get_instance_by_uri($uri);
    $parts = $wrapper->get_parameters();

    $fullscreen_value = $autoplay = 'false';
    $in_browser = $thumbnail = FALSE;

    foreach ($preset['effects'] as $effect) {
      switch ($effect['name']) {
        case 'autoplay':
          $autoplay = $effect['data']['autoplay'] ? 'true' : 'false';
          break;
        case 'resize':
          $width = $effect['data']['width'];
          $height = $effect['data']['height'];
          break;
        case 'fullscreen':
          $fullscreen_value = $effect['data']['fullscreen'] ? 'true' : 'false';
          break;
        case 'thumbnail':
          $thumbnail = $effect['data']['thumbnail'];
      }
    }
    if (isset($variables['object']->override)) {
      $override = $variables['object']->override;
      if (isset($override['width'])) {
        $width = $override['width'];
      }
      if (isset($override['height'])) {
        $height = $override['height'];
      }
      if (isset($override['wysiwyg'])) {
        $thumbnail = TRUE;
      }
      if (isset($override['browser']) && $override['browser']) {
        $in_browser = TRUE;
        $thumbnail = TRUE;
      }
    }
    $width = isset($width) ? $width : media_vimeo_variable_get('width');
    $height = isset($height) ? $height : media_vimeo_variable_get('height');
    $video_id = check_plain($parts['v']);
    if ($thumbnail) {
      // @todo Clean this up.
      $image_variables = array(
        'path' => $wrapper->getOriginalThumbnailPath(),
        'alt' => $variables['alt'],
        'title' => $variables['title'],
        'getsize' => FALSE,
      );
      if (isset($preset['image_style'])) {
        $image_variables['path'] = $wrapper->getLocalThumbnailPath();
        $image_variables['style_name'] = $preset['image_style'];
        $output = theme('image_style', $image_variables);
      }
      else {
        // We need to add this style attribute here so that it doesn't get lost
        // If you resize a video in a node, save it, edit it, but don't adjust
        // the sizing of the video while editing, the size will revert to the
        // default.  Adding the specific size here retains the original resizing
        $WYSIWYG = isset($variables['object']->override['style']) ? $variables['object']->override['style'] : '';
        $image_variables['attributes'] = array('width' => $width, 'height' => $height, 'style' => $WYSIWYG);
        $output = theme('image', $image_variables);
      }
      if ($in_browser) {
        // Add an overlay that says 'Vimeo' to media library browser thumbnails.
        $output .= '<span />';
      }
    }
    else {
      $output = theme('media_vimeo_video', array('uri' => $uri, 'width' => $width, 'height' => $height, 'autoplay' => ($autoplay == 'true' ? TRUE : NULL), 'fullscreen' => ($fullscreen_value == 'true' ? TRUE : NULL)));
    }
  }
  return $output;
}
