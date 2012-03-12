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

  // Exported permission: create any maav_info_block_bean bean
  $permissions['create any maav_info_block_bean bean'] = array(
    'name' => 'create any maav_info_block_bean bean',
    'roles' => array(),
  );

  // Exported permission: delete any maav_info_block_bean bean
  $permissions['delete any maav_info_block_bean bean'] = array(
    'name' => 'delete any maav_info_block_bean bean',
    'roles' => array(),
  );

  // Exported permission: edit any maav_info_block_bean bean
  $permissions['edit any maav_info_block_bean bean'] = array(
    'name' => 'edit any maav_info_block_bean bean',
    'roles' => array(),
  );

  // Exported permission: view any maav_info_block_bean bean
  $permissions['view any maav_info_block_bean bean'] = array(
    'name' => 'view any maav_info_block_bean bean',
    'roles' => array(),
  );

  return $permissions;
}
