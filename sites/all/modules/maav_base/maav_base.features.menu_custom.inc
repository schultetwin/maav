<?php
/**
 * @file
 * maav_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function maav_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sidebar-nav
  $menus['menu-sidebar-nav'] = array(
    'menu_name' => 'menu-sidebar-nav',
    'title' => 'Sidebar Nav',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sidebar Nav');


  return $menus;
}
