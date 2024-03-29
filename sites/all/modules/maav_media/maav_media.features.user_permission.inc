<?php
/**
 * @file
 * maav_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function maav_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: add media from remote sources
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer image styles
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer media
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: create media content
  $permissions['create media content'] = array(
    'name' => 'create media content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any media content
  $permissions['delete any media content'] = array(
    'name' => 'delete any media content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own media content
  $permissions['delete own media content'] = array(
    'name' => 'delete own media content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any media content
  $permissions['edit any media content'] = array(
    'name' => 'edit any media content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit media
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: edit own media content
  $permissions['edit own media content'] = array(
    'name' => 'edit own media content',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Web Team',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: import media
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'Team Lead',
      1 => 'Team Member',
      2 => 'Web Team',
      3 => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: view media
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'media',
  );

  return $permissions;
}
