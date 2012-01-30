<?php
/**
 * @file
 * maav_announcements.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function maav_announcements_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'maav_frontpage_annoucements';
  $context->description = 'Front page for All Users';
  $context->tag = 'frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-annoucements-front_block' => array(
          'module' => 'views',
          'delta' => 'annoucements-front_block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page for All Users');
  t('frontpage');
  $export['maav_frontpage_annoucements'] = $context;

  return $export;
}
