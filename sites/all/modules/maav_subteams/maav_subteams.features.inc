<?php
/**
 * @file
 * maav_subteams.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function maav_subteams_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function maav_subteams_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function maav_subteams_node_info() {
  $items = array(
    'sub_team' => array(
      'name' => t('Sub Team'),
      'base' => 'node_content',
      'description' => t('A sub team is a group on MAAV that work on a specific project.'),
      'has_title' => '1',
      'title_label' => t('Team Name'),
      'help' => '',
    ),
  );
  return $items;
}
