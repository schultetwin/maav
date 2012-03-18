<?php
/**
 * @file
 * maav_subteams.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function maav_subteams_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'maav_groups';
  $context->description = '';
  $context->tag = 'base';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'sub_team' => 'sub_team',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'subteam/*' => 'subteam/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'group_members' => 'group_members',
        'group_members:page_1' => 'group_members:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'maav_groups-maav_group_menu' => array(
          'module' => 'maav_groups',
          'delta' => 'maav_group_menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('base');
  $export['maav_groups'] = $context;

  return $export;
}
