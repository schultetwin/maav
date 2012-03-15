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
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'maav_login_block-maav_login' => array(
          'module' => 'maav_login_block',
          'delta' => 'maav_login',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'header',
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
