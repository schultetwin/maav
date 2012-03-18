<?php
/**
 * @file
 * maav_media.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function maav_media_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media Gallery';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_media']['id'] = 'field_media_media';
  $handler->display->display_options['fields']['field_media_media']['table'] = 'field_data_field_media_media';
  $handler->display->display_options['fields']['field_media_media']['field'] = 'field_media_media';
  $handler->display->display_options['fields']['field_media_media']['label'] = 'Preview';
  $handler->display->display_options['fields']['field_media_media']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media_media']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_media_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_media']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_media_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_media']['type'] = 'media';
  $handler->display->display_options['fields']['field_media_media']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['field_media_media']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_media']['field_api_classes'] = 0;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_media_1']['id'] = 'field_media_media_1';
  $handler->display->display_options['fields']['field_media_media_1']['table'] = 'field_data_field_media_media';
  $handler->display->display_options['fields']['field_media_media_1']['field'] = 'field_media_media';
  $handler->display->display_options['fields']['field_media_media_1']['label'] = '';
  $handler->display->display_options['fields']['field_media_media_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_media_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_media_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media_media_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_media_1']['type'] = 'media';
  $handler->display->display_options['fields']['field_media_media_1']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_media_media_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['external'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['colorbox']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['colorbox']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['html'] = 0;
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['colorbox']['hide_empty'] = 0;
  $handler->display->display_options['fields']['colorbox']['empty_zero'] = 0;
  $handler->display->display_options['fields']['colorbox']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_media_media';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_media_media_1]';
  $handler->display->display_options['fields']['colorbox']['caption'] = '[title]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '80%';
  $handler->display->display_options['fields']['colorbox']['height'] = '90%';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media' => 'media',
  );
  /* Filter criterion: Content: Media Type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_value']['id'] = 'field_media_type_value';
  $handler->display->display_options['filters']['field_media_type_value']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_value']['field'] = 'field_media_type_value';
  $handler->display->display_options['filters']['field_media_type_value']['value'] = array(
    'photo' => 'photo',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'media/photos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Photo Gallery';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-media-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_media']['id'] = 'field_media_media';
  $handler->display->display_options['fields']['field_media_media']['table'] = 'field_data_field_media_media';
  $handler->display->display_options['fields']['field_media_media']['field'] = 'field_media_media';
  $handler->display->display_options['fields']['field_media_media']['label'] = 'Preview';
  $handler->display->display_options['fields']['field_media_media']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media_media']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_media_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_media']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_media_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_media']['type'] = 'media';
  $handler->display->display_options['fields']['field_media_media']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['field_media_media']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_media']['field_api_classes'] = 0;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_media_1']['id'] = 'field_media_media_1';
  $handler->display->display_options['fields']['field_media_media_1']['table'] = 'field_data_field_media_media';
  $handler->display->display_options['fields']['field_media_media_1']['field'] = 'field_media_media';
  $handler->display->display_options['fields']['field_media_media_1']['label'] = '';
  $handler->display->display_options['fields']['field_media_media_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_media_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_media_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_media_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media_media_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_media_1']['type'] = 'media';
  $handler->display->display_options['fields']['field_media_media_1']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_media_media_1']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['external'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['colorbox']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['colorbox']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['colorbox']['alter']['html'] = 0;
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['colorbox']['hide_empty'] = 0;
  $handler->display->display_options['fields']['colorbox']['empty_zero'] = 0;
  $handler->display->display_options['fields']['colorbox']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_media_media';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_media_media_1]';
  $handler->display->display_options['fields']['colorbox']['caption'] = '[title]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '80%';
  $handler->display->display_options['fields']['colorbox']['height'] = '90%';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media' => 'media',
  );
  /* Filter criterion: Content: Media Type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_value']['id'] = 'field_media_type_value';
  $handler->display->display_options['filters']['field_media_type_value']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_value']['field'] = 'field_media_type_value';
  $handler->display->display_options['filters']['field_media_type_value']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['path'] = 'media/videos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Videos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-media-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['gallery'] = $view;

  return $export;
}
