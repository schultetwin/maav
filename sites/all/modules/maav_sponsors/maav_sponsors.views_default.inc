<?php
/**
 * @file
 * maav_sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function maav_sponsors_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No results?? Something is wrong, for sure.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty'] = 'No Logo on file.';
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
  /* Sort criterion: Content: Order (field_sponsor_order) */
  $handler->display->display_options['sorts']['field_sponsor_order_value']['id'] = 'field_sponsor_order_value';
  $handler->display->display_options['sorts']['field_sponsor_order_value']['table'] = 'field_data_field_sponsor_order';
  $handler->display->display_options['sorts']['field_sponsor_order_value']['field'] = 'field_sponsor_order_value';
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Thanks (field_sponsor_thanks) */
  $handler->display->display_options['filters']['field_sponsor_thanks_value']['id'] = 'field_sponsor_thanks_value';
  $handler->display->display_options['filters']['field_sponsor_thanks_value']['table'] = 'field_data_field_sponsor_thanks';
  $handler->display->display_options['filters']['field_sponsor_thanks_value']['field'] = 'field_sponsor_thanks_value';
  $handler->display->display_options['filters']['field_sponsor_thanks_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sponsors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sponsors';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Special Thanks */
  $handler = $view->new_display('attachment', 'Special Thanks', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Special thanks to:</h3>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'sponsor' => 'sponsor',
  );
  /* Filter criterion: Content: Thanks (field_sponsor_thanks) */
  $handler->display->display_options['filters']['field_sponsor_thanks_value']['id'] = 'field_sponsor_thanks_value';
  $handler->display->display_options['filters']['field_sponsor_thanks_value']['table'] = 'field_data_field_sponsor_thanks';
  $handler->display->display_options['filters']['field_sponsor_thanks_value']['field'] = 'field_sponsor_thanks_value';
  $handler->display->display_options['filters']['field_sponsor_thanks_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Title Sponsor */
  $handler = $view->new_display('block', 'Title Sponsor', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Title Sponsor';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty'] = 'No Logo on file.';
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_sponsor_logo']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_sponsor_description']['id'] = 'field_sponsor_description';
  $handler->display->display_options['fields']['field_sponsor_description']['table'] = 'field_data_field_sponsor_description';
  $handler->display->display_options['fields']['field_sponsor_description']['field'] = 'field_sponsor_description';
  $handler->display->display_options['fields']['field_sponsor_description']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sponsor_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sponsor_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sponsor_description']['field_api_classes'] = 0;
  $export['sponsors'] = $view;

  return $export;
}
