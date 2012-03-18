<?php
/**
 * @file
 * maav_about.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function maav_about_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-menu
  $menus['menu-about-menu'] = array(
    'menu_name' => 'menu-about-menu',
    'title' => 'About Menu',
    'description' => 'Menu to show in about section',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Menu');
  t('Menu to show in about section');


  return $menus;
}
