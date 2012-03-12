<?php
/**
 * @file
 * maav_info_blocks_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function maav_info_blocks_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create any section_info bean
  $permissions['create any section_info bean'] = array(
    'name' => 'create any section_info bean',
    'roles' => array(),
  );

  // Exported permission: delete any section_info bean
  $permissions['delete any section_info bean'] = array(
    'name' => 'delete any section_info bean',
    'roles' => array(),
  );

  // Exported permission: edit any section_info bean
  $permissions['edit any section_info bean'] = array(
    'name' => 'edit any section_info bean',
    'roles' => array(),
  );

  // Exported permission: view any section_info bean
  $permissions['view any section_info bean'] = array(
    'name' => 'view any section_info bean',
    'roles' => array(),
  );

  return $permissions;
}
