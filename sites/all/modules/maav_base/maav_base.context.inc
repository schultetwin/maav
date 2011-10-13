<?php
/**
 * @file
 * maav_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function maav_base_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'maav_sitewide';
  $context->description = 'Base Theme for global theme';
  $context->tag = 'base';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-sidebar-nav' => array(
          'module' => 'menu',
          'delta' => 'menu-sidebar-nav',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Base Theme for global theme');
  t('base');
  $export['maav_sitewide'] = $context;

  return $export;
}
