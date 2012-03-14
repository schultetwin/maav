<?php
/**
 * @file
 * maav_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function maav_base_user_default_roles() {
  $roles = array();

  // Exported role: Team Lead
  $roles['Team Lead'] = array(
    'name' => 'Team Lead',
    'weight' => '3',
  );

  // Exported role: Team Member
  $roles['Team Member'] = array(
    'name' => 'Team Member',
    'weight' => '5',
  );

  // Exported role: Web Team
  $roles['Web Team'] = array(
    'name' => 'Web Team',
    'weight' => '4',
  );

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
