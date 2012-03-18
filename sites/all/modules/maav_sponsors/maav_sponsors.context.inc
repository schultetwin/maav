<?php
/**
 * @file
 * maav_sponsors.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function maav_sponsors_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsor_section';
  $context->description = '';
  $context->tag = 'MAAV';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sponsors' => 'sponsors',
        'sponsors/*' => 'sponsors/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'sponsors-block_1',
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
  $export['sponsor_section'] = $context;

  return $export;
}
