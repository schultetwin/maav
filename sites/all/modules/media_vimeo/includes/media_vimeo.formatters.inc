<?php

/**
 * @file
 */

/**
 * Implements hook_file_formatter_info().
 */
function media_vimeo_file_formatter_info() {
  $formatters['media_vimeo_video'] = array(
    'label' => t('Vimeo Video'),
    'file types' => array('video'),
    'default settings' => array(
      'width' => media_vimeo_variable_get('width'),
      'height' => media_vimeo_variable_get('height'),
      'preview_uri' => media_vimeo_variable_get('preview_uri'),
      'api' => media_vimeo_variable_get('api'),
      'autoplay' => media_vimeo_variable_get('autoplay'),
      'byline' => media_vimeo_variable_get('byline'),
      'color' => media_vimeo_variable_get('color'),
      'fullscreen' => media_vimeo_variable_get('fullscreen'),
      'loop' => media_vimeo_variable_get('loop'),
      'portrait' => media_vimeo_variable_get('portrait'),
      'title' => media_vimeo_variable_get('title'),
    ),
    'view callback' => 'media_vimeo_file_formatter_video_view',
    'settings callback' => 'media_vimeo_file_formatter_video_settings',
  );
  $formatters['media_vimeo_image'] = array(
    'label' => t('Vimeo Preview Image'),
    'file types' => array('video'),
    'default settings' => array(
      'image_style' => '',
    ),
    'view callback' => 'media_vimeo_file_formatter_image_view',
    'settings callback' => 'media_vimeo_file_formatter_image_settings',
  );
  return $formatters;
}

/**
 * Implements hook_file_formatter_FORMATTER_view().
 */
function media_vimeo_file_formatter_video_view($file, $display, $langcode) {
  $scheme = file_uri_scheme($file->uri);
  // WYSIWYG does not yet support video inside a running editor instance.
  if ($scheme == 'vimeo' && empty($file->override['wysiwyg'])) {
    $element = array(
      '#theme' => 'media_vimeo_video',
      '#uri' => $file->uri,
    );
    $settings = array('width', 'height', 'api' , 'autoplay', 'byline', 'color', 'fullscreen', 'loop', 'portrait', 'title');
    foreach ($settings as $setting) {
      $element['#' . $setting] = isset($file->override[$setting]) ? $file->override[$setting] : $display['settings'][$setting];
    }
    return $element;
  }
}

/**
 * Implements hook_file_formatter_FORMATTER_settings().
 */
function media_vimeo_file_formatter_video_settings($form, &$form_state, $settings) {
  $element = array();
  $element['width'] = array(
    '#title' => t('Width'),
    '#type' => 'textfield',
    '#default_value' => $settings['width'],
  );
  $element['height'] = array(
    '#title' => t('Height'),
    '#type' => 'textfield',
    '#default_value' => $settings['height'],
  );
  $element['autoplay'] = array(
    '#title' => t('Play the video automatically on load'),
    '#type' => 'checkbox',
    '#default_value' => $settings['autoplay'],
  );
  $element['loop'] = array(
    '#title' => t('Play the video again when it reaches the end'),
    '#type' => 'checkbox',
    '#default_value' => $settings['loop'],
  );
  $element['fullscreen'] = array(
    '#title' => t('Allow the player to go into fullscreen'),
    '#type' => 'checkbox',
    '#default_value' => $settings['fullscreen'],
  );
  $element['api'] = array(
    '#title' => t('Enable the Javascript API'),
    '#type' => 'checkbox',
    '#default_value' => $settings['api'],
  );
  $element['color'] = array(
    '#title' => t('Specify the color of the video controls'),
    '#type' => 'textfield',
    '#default_value' => $settings['color'],
  );
  $element['portrait'] = array(
    '#title' => t("Show the user's portrait on the video"),
    '#type' => 'checkbox',
    '#default_value' => $settings['portrait'],
  );
  $element['title'] = array(
    '#title' => t('Show the title on the video'),
    '#type' => 'checkbox',
    '#default_value' => $settings['title'],
  );
  $element['byline'] = array(
    '#title' => t('Show the byline on the video'),
    '#type' => 'checkbox',
    '#default_value' => $settings['byline'],
  );

  return $element;
}

/**
 * Implements hook_file_formatter_FORMATTER_view().
 */
function media_vimeo_file_formatter_image_view($file, $display, $langcode) {
  $scheme = file_uri_scheme($file->uri);
  if ($scheme == 'vimeo') {
    $wrapper = file_stream_wrapper_get_instance_by_uri($file->uri);
    $image_style = $display['settings']['image_style'];
    $valid_image_styles = image_style_options(FALSE);
    if (empty($image_style) || !isset($valid_image_styles[$image_style])) {
      $element = array(
        '#theme' => 'image',
        '#path' => $wrapper->getOriginalThumbnailPath(),
      );
    }
    else {
      $element = array(
        '#theme' => 'image_style',
        '#style_name' => $image_style,
        '#path' => $wrapper->getLocalThumbnailPath(),
      );
    }
    return $element;
  }
}

/**
 * Implements hook_file_formatter_FORMATTER_settings().
 */
function media_vimeo_file_formatter_image_settings($form, &$form_state, $settings) {
  $element = array();
  $element['image_style'] = array(
    '#title' => t('Image style'),
    '#type' => 'select',
    '#options' => image_style_options(FALSE),
    '#default_value' => $settings['image_style'],
    '#empty_option' => t('None (original image)'),
  );
  return $element;
}

/**
 * Implements hook_file_default_displays().
 */
function media_vimeo_file_default_displays() {
  $default_displays = array();

  // Default settings for displaying as a video.
  $default_video_settings = array(
    'media_large' => array(
      'width' => 480,
      'height' => 360,
      'autoplay' => FALSE,
    ),
    'media_original' => array(
      'width' => 640,
      'height' => 480,
      'autoplay' => media_vimeo_variable_get('autoplay'),
    ),
  );
  foreach ($default_video_settings as $view_mode => $settings) {
    $display_name = 'video__' . $view_mode . '__media_vimeo_video';
    $default_displays[$display_name] = (object) array(
      'api_version' => 1,
      'name' => $display_name,
      'status' => 1,
      'weight' => 1,
      'settings' => $settings,
    );
  }

  // Default settings for displaying a video preview image. We enable preview
  // images even for view modes that also play video, for use inside a running
  // WYSIWYG editor. The higher weight ensures that the video display is used
  // where possible.
  $default_image_styles = array(
    'media_preview' => 'square_thumbnail',
    'media_large' => 'large',
    'media_original' => ''
  );
  foreach ($default_image_styles as $view_mode => $image_style) {
    $display_name = 'video__' . $view_mode . '__media_vimeo_image';
    $default_displays[$display_name] = (object) array(
      'api_version' => 1,
      'name' => $display_name,
      'status' => 1,
      'weight' => 2,
      'settings' => array('image_style' => $image_style),
    );
  }

  return $default_displays;
}
