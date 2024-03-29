<?php
/**
 * @file
 * maav_announcements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function maav_announcements_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'annoucements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annoucements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annoucements';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Annoucement */
  $handler->display->display_options['fields']['field_announce_announcement']['id'] = 'field_announce_announcement';
  $handler->display->display_options['fields']['field_announce_announcement']['table'] = 'field_data_field_announce_announcement';
  $handler->display->display_options['fields']['field_announce_announcement']['field'] = 'field_announce_announcement';
  $handler->display->display_options['fields']['field_announce_announcement']['label'] = '';
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announce_announcement']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_announce_announcement']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_announce_announcement']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_announce_announcement']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'announcement' => 'announcement',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content/annoucements';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Announcements';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: Front Page Block */
  $handler = $view->new_display('block', 'Front Page Block', 'front_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Makes most recent announcement appear on front page.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_caching'] = '8';
  $export['annoucements'] = $view;

  return $export;
}
