<?php
/**
 * @file
 * stanford_magazine_article_administration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_magazine_article_administration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_magazine_article_manage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Magazine Article: Manage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Stanford Magazine Article';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_s_image_info' => 'field_s_image_info',
    'title' => 'title',
    'timestamp' => 'title',
    'status' => 'status',
    'changed' => 'changed',
    'name' => 'name',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'view_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_image_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'stanford_magazine_article::field_s_mag_article_dept' => 'stanford_magazine_article::field_s_mag_article_dept',
          'stanford_magazine_article::field_s_mag_article_eyebrow' => 'stanford_magazine_article::field_s_mag_article_eyebrow',
          'stanford_magazine_article::field_s_mag_article_image' => 'stanford_magazine_article::field_s_mag_article_image',
          'stanford_magazine_article::field_s_mag_article_series' => 'stanford_magazine_article::field_s_mag_article_series',
          'stanford_magazine_article::field_s_mag_article_topics' => 'stanford_magazine_article::field_s_mag_article_topics',
          'stanford_magazine_article::field_s_mag_article_accent_color' => 'stanford_magazine_article::field_s_mag_article_accent_color',
          'stanford_magazine_article::field_s_mag_article_featured' => 'stanford_magazine_article::field_s_mag_article_featured',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
  );
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Terms';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'stanford_affiliate_organization_type' => 0,
    'stanford_affiliation' => 0,
    'capx_organizations' => 0,
    'stanford_department' => 0,
    'stanford_event_type' => 0,
    'stanford_faculty_type' => 0,
    'fellowship_location' => 0,
    'stanford_field_of_study' => 0,
    'stanford_interests' => 0,
    'stanford_magazine_eyebrow' => 0,
    'stanford_mag_issue_layout' => 0,
    'stanford_magazine_series' => 0,
    'stanford_magazine_topics' => 0,
    'news_categories' => 0,
    'stanford_opp_city' => 0,
    'stanford_opp_location' => 0,
    'stanford_opp_major' => 0,
    'stanford_opp_open_to' => 0,
    'stanford_opp_sponsor' => 0,
    'stanford_opp_time_of_year' => 0,
    'stanford_opp_type' => 0,
    'publication_type' => 0,
    'research_themes' => 0,
    'school_themes' => 0,
    'stanford_slide_category' => 0,
    'soe_accent_color' => 0,
    'stanford_staff_type' => 0,
    'stanford_event_audience' => 0,
    'stanford_event_categories' => 0,
    'stanford_student_type' => 0,
    'tags' => 0,
  );
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_s_mag_article_featured']['id'] = 'field_s_mag_article_featured';
  $handler->display->display_options['fields']['field_s_mag_article_featured']['table'] = 'field_data_field_s_mag_article_featured';
  $handler->display->display_options['fields']['field_s_mag_article_featured']['field'] = 'field_s_mag_article_featured';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_magazine_article' => 'stanford_magazine_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  /* Filter criterion: Content: Featured (field_s_mag_article_featured) */
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['id'] = 'field_s_mag_article_featured_value';
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['table'] = 'field_data_field_s_mag_article_featured';
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['field'] = 'field_s_mag_article_featured_value';
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['expose']['operator_id'] = 'field_s_mag_article_featured_value_op';
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['expose']['label'] = 'Featured';
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['expose']['operator'] = 'field_s_mag_article_featured_value_op';
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['expose']['identifier'] = 'field_s_mag_article_featured_value';
  $handler->display->display_options['filters']['field_s_mag_article_featured_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    12 => 0,
    10 => 0,
    8 => 0,
    6 => 0,
    20 => 0,
    14 => 0,
    16 => 0,
    18 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/manage/magazine_article';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Magazine Articles';
  $handler->display->display_options['menu']['weight'] = '';
  $handler->display->display_options['menu']['name'] = 'menu-manage-content-by-type';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['stanford_magazine_article_manage'] = $view;

  return $export;
}
