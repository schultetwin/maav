<?php
/**
 * @file
 * maav_about.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function maav_about_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
