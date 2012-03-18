<?php
/**
 * @file
 * maav_about.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function maav_about_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_section';
  $context->description = '';
  $context->tag = 'MAAV';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'about/*' => 'about/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-about-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-about-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('MAAV');
  $export['about_section'] = $context;

  return $export;
}
