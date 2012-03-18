<?php
/**
 * @file
 * maav_media.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function maav_media_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_section';
  $context->description = '';
  $context->tag = 'MAAV';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'media' => 'media',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'media' => 'media',
        'media/*' => 'media/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-media-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-media-menu',
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
  $export['media_section'] = $context;

  return $export;
}
