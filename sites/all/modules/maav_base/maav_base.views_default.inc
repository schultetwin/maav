<?php
/**
 * @file
 * maav_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function maav_base_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'front_page_picture';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front page Picture';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Vehicle';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_media']['id'] = 'field_media_media';
  $handler->display->display_options['fields']['field_media_media']['table'] = 'field_data_field_media_media';
  $handler->display->display_options['fields']['field_media_media']['field'] = 'field_media_media';
  $handler->display->display_options['fields']['field_media_media']['label'] = '';
  $handler->display->display_options['fields']['field_media_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_media']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_media_media']['alter']['path'] = 'media';
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
  $handler->display->display_options['fields']['field_media_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_media']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_media']['type'] = 'media';
  $handler->display->display_options['fields']['field_media_media']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['field_media_media']['field_api_classes'] = 0;
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
    'media' => 'media',
  );
  /* Filter criterion: Content: Media Type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_value']['id'] = 'field_media_type_value';
  $handler->display->display_options['filters']['field_media_type_value']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_value']['field'] = 'field_media_type_value';
  $handler->display->display_options['filters']['field_media_type_value']['value'] = array(
    'photo' => 'photo',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['front_page_picture'] = $view;

  $view = new view;
  $view->name = 'roster';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Roster';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Roster';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: User: Degree Information */
  $handler->display->display_options['fields']['field_user_degree_information']['id'] = 'field_user_degree_information';
  $handler->display->display_options['fields']['field_user_degree_information']['table'] = 'field_data_field_user_degree_information';
  $handler->display->display_options['fields']['field_user_degree_information']['field'] = 'field_user_degree_information';
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['field_api_classes'] = 0;
  /* Field: User: Groups audience */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['label'] = 'Teams';
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['group_audience']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_audience']['empty'] = '(Not a member of any subteam)';
  $handler->display->display_options['fields']['group_audience']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_audience']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_audience']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_rows'] = 1;
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['group_audience']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['group_audience']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['group_audience']['field_api_classes'] = 0;
  /* Field: User: Resume */
  $handler->display->display_options['fields']['field_user_resume']['id'] = 'field_user_resume';
  $handler->display->display_options['fields']['field_user_resume']['table'] = 'field_data_field_user_resume';
  $handler->display->display_options['fields']['field_user_resume']['field'] = 'field_user_resume';
  $handler->display->display_options['fields']['field_user_resume']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_resume']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_resume']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_user_resume']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_resume']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_resume']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_resume']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_resume']['field_api_classes'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = 'admin';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about/roster';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Team Roster';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'menu-about-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['roster'] = $view;

  $view = new view;
  $view->name = 'team_leads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Team Leads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subteam Leads';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
    ),
  );
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Team Lead (field_subteam_lead) */
  $handler->display->display_options['relationships']['field_subteam_lead_uid']['id'] = 'field_subteam_lead_uid';
  $handler->display->display_options['relationships']['field_subteam_lead_uid']['table'] = 'field_data_field_subteam_lead';
  $handler->display->display_options['relationships']['field_subteam_lead_uid']['field'] = 'field_subteam_lead_uid';
  $handler->display->display_options['relationships']['field_subteam_lead_uid']['required'] = 0;
  $handler->display->display_options['relationships']['field_subteam_lead_uid']['delta'] = '-1';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_subteam_lead_uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_subteam_lead_uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: User: Degree Information */
  $handler->display->display_options['fields']['field_user_degree_information']['id'] = 'field_user_degree_information';
  $handler->display->display_options['fields']['field_user_degree_information']['table'] = 'field_data_field_user_degree_information';
  $handler->display->display_options['fields']['field_user_degree_information']['field'] = 'field_user_degree_information';
  $handler->display->display_options['fields']['field_user_degree_information']['relationship'] = 'field_subteam_lead_uid';
  $handler->display->display_options['fields']['field_user_degree_information']['label'] = '';
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_degree_information']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_user_degree_information']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_user_degree_information']['field_api_classes'] = 0;
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
    'sub_team' => 'sub_team',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about/team-leads';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Team Leads';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-about-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['team_leads'] = $view;

  return $export;
}
