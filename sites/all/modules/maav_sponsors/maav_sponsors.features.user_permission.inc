<?php
/**
 * @file
 * maav_sponsors.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function maav_sponsors_user_default_permissions() {
  $permissions = array();

  // Exported permission: create sponsor content
  $permissions['create sponsor content'] = array(
    'name' => 'create sponsor content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any sponsor content
  $permissions['delete any sponsor content'] = array(
    'name' => 'delete any sponsor content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own sponsor content
  $permissions['delete own sponsor content'] = array(
    'name' => 'delete own sponsor content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any sponsor content
  $permissions['edit any sponsor content'] = array(
    'name' => 'edit any sponsor content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own sponsor content
  $permissions['edit own sponsor content'] = array(
    'name' => 'edit own sponsor content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
