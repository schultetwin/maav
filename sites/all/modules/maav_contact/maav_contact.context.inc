<?php
/**
 * @file
 * maav_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function maav_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_section';
  $context->description = '';
  $context->tag = 'MAAV';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
        'contact/*' => 'contact/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('MAAV');
  $export['contact_section'] = $context;

  return $export;
}
