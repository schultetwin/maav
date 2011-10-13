<?php
/**
 * @file
 * maav_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function maav_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-sidebar-nav:node/2
  $menu_links['menu-sidebar-nav:node/2'] = array(
    'menu_name' => 'menu-sidebar-nav',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'The Competition',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-sidebar-nav:node/3
  $menu_links['menu-sidebar-nav:node/3'] = array(
    'menu_name' => 'menu-sidebar-nav',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-sidebar-nav:node/4
  $menu_links['menu-sidebar-nav:node/4'] = array(
    'menu_name' => 'menu-sidebar-nav',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Sponsors',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Sponsors');
  t('The Competition');


  return $menu_links;
}
