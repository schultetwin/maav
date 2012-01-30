<?php
/**
 * @file
 * maav_announcements.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function maav_announcements_user_default_permissions() {
  $permissions = array();

  // Exported permission: create announcement content
  $permissions['create announcement content'] = array(
    'name' => 'create announcement content',
    'roles' => array(),
  );

  // Exported permission: delete any announcement content
  $permissions['delete any announcement content'] = array(
    'name' => 'delete any announcement content',
    'roles' => array(),
  );

  // Exported permission: delete own announcement content
  $permissions['delete own announcement content'] = array(
    'name' => 'delete own announcement content',
    'roles' => array(),
  );

  // Exported permission: edit any announcement content
  $permissions['edit any announcement content'] = array(
    'name' => 'edit any announcement content',
    'roles' => array(),
  );

  // Exported permission: edit own announcement content
  $permissions['edit own announcement content'] = array(
    'name' => 'edit own announcement content',
    'roles' => array(),
  );

  return $permissions;
}
