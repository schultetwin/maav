<?php
/**
 * @file
 * maav_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function maav_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function maav_media_node_info() {
  $items = array(
    'media' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => t('Media is a node type available in the gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
