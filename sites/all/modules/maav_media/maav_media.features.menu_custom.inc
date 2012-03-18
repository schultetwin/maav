<?php
/**
 * @file
 * maav_media.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function maav_media_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-media-menu
  $menus['menu-media-menu'] = array(
    'menu_name' => 'menu-media-menu',
    'title' => 'Media Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Media Menu');


  return $menus;
}
