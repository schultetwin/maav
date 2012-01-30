<?php
/**
 * @file
 * maav_subteams.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function maav_subteams_user_default_permissions() {
  $permissions = array();

  // Exported permission: create sub_team content
  $permissions['create sub_team content'] = array(
    'name' => 'create sub_team content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any sub_team content
  $permissions['delete any sub_team content'] = array(
    'name' => 'delete any sub_team content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own sub_team content
  $permissions['delete own sub_team content'] = array(
    'name' => 'delete own sub_team content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any sub_team content
  $permissions['edit any sub_team content'] = array(
    'name' => 'edit any sub_team content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own sub_team content
  $permissions['edit own sub_team content'] = array(
    'name' => 'edit own sub_team content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
