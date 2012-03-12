<?php
/**
 * @file
 * maav_info_blocks_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function maav_info_blocks_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function maav_info_blocks_feature_image_default_styles() {
  $styles = array();

  // Exported image style: section_info
  $styles['section_info'] = array(
    'name' => 'section_info',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '130',
          'height' => '110',
          'upscale' => 1,
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
