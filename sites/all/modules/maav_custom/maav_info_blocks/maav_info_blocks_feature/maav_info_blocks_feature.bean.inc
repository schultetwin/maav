<?php
/**
 * @file
 * maav_info_blocks_feature.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function maav_info_blocks_feature_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass;
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 3;
  $bean_type->name = 'section_info';
  $bean_type->label = 'Section Info';
  $bean_type->options = '';
  $export['section_info'] = $bean_type;

  return $export;
}
