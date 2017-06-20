<?php
/**
 * @file
 * stanford_magazine_article_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_magazine_article_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_magazine_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Magazine Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'views-grid-three article-grouping';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['id'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['field'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['label'] = 'Article 3';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['id'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['field'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['label'] = 'Article 2';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['id'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['field'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['label'] = 'Article Featured';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['id'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['field'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['label'] = 'Article 5';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['id'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['field'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['label'] = 'Article 4';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-topic-card-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Publishing Date (field_s_mag_article_date) */
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['id'] = 'field_s_mag_article_date_value';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['field'] = 'field_s_mag_article_date_value';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['order'] = 'DESC';
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
    'stanford_magazine_article' => 'stanford_magazine_article',
  );

  /* Display: Page 1-9 at /magazine */
  $handler = $view->new_display('page', 'Page 1-9 at /magazine', 'page_1_9');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-three article-grouping';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['path'] = 'magazine';

  /* Display: Page 2-13 at /magazine/all */
  $handler = $view->new_display('page', 'Page 2-13 at /magazine/all', 'page_2_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-four article-grouping';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['path'] = 'magazine/all';

  /* Display: Block 1 */
  $handler = $view->new_display('block', 'Block 1', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'most-recent-article';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Block 10-18+ */
  $handler = $view->new_display('block', 'Block 10-18+', 'block_10_18');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '9';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';

  /* Display: Block 14-25+ */
  $handler = $view->new_display('block', 'Block 14-25+', 'block_14_25');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-four article-grouping';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $export['stanford_magazine_articles'] = $view;

  $view = new view();
  $view->name = 'stanford_magazine_topics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Magazine Topics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['id'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['field'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_featured_node']['label'] = 'Article Featured';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['id'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['field'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_2_node']['label'] = 'Article 2';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['id'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['field'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_3_node']['label'] = 'Article 3';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['id'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['field'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_4_node']['label'] = 'Article 4';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['id'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['field'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['relationships']['reverse_field_s_mag_issue_article_5_node']['label'] = 'Article 5';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'stanford_short_month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>[field_s_mag_article_image]</div>
  <div class ="mag-topic-card-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Publishing Date (field_s_mag_article_date) */
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['id'] = 'field_s_mag_article_date_value';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['field'] = 'field_s_mag_article_date_value';
  $handler->display->display_options['sorts']['field_s_mag_article_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'stanford_department' => 'stanford_department',
    'stanford_magazine_eyebrow' => 'stanford_magazine_eyebrow',
    'stanford_magazine_series' => 'stanford_magazine_series',
    'stanford_magazine_topics' => 'stanford_magazine_topics',
  );
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
    'stanford_magazine_article' => 'stanford_magazine_article',
  );

  /* Display: First Grouping of Articles Block */
  $handler = $view->new_display('block', 'First Grouping of Articles Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-four article-grouping';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Accent Color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['ui_name'] = 'Content: Article Accent Color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-topic-card-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Most Recent Article Block */
  $handler = $view->new_display('block', 'Most Recent Article Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'most-recent-article';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Accent Color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['ui_name'] = 'Content: Article Accent Color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="most-recent-article-container">
  <div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-topic-card-container">
    <div class="mag-topic-card-content-container">
      <div class="mag-article-date">[field_s_mag_article_date]</div>
      <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
      <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    </div>
  <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
</div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Second Grouping of Articles Block */
  $handler = $view->new_display('block', 'Second Grouping of Articles Block', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-four article-grouping';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '13';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load More';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Accent Color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['ui_name'] = 'Content: Article Accent Color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-topic-card-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Related Articles Block */
  $handler = $view->new_display('block', 'Related Articles Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Articles';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-three article-grouping';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => '6-col-banner-short',
    'image_link' => 'content',
  );
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date']['id'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Article Accent Color */
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['id'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['table'] = 'field_data_field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['field'] = 'field_s_mag_article_accent_color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['ui_name'] = 'Content: Article Accent Color';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  $handler->display->display_options['fields']['title_4']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['title_4']['label'] = '';
  $handler->display->display_options['fields']['title_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_4']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_5']['id'] = 'title_5';
  $handler->display->display_options['fields']['title_5']['table'] = 'node';
  $handler->display->display_options['fields']['title_5']['field'] = 'title';
  $handler->display->display_options['fields']['title_5']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['title_5']['label'] = '';
  $handler->display->display_options['fields']['title_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_5']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['relationship'] = 'reverse_field_s_mag_issue_featured_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['id'] = 'field_s_mag_issue_accent_color_1';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['relationship'] = 'reverse_field_s_mag_issue_article_2_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['id'] = 'field_s_mag_issue_accent_color_2';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['relationship'] = 'reverse_field_s_mag_issue_article_3_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['id'] = 'field_s_mag_issue_accent_color_3';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['relationship'] = 'reverse_field_s_mag_issue_article_4_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Issue Accent Color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['id'] = 'field_s_mag_issue_accent_color_4';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['relationship'] = 'reverse_field_s_mag_issue_article_5_node';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['ui_name'] = 'Content: Issue Accent Color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color_4']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="mag-article-img">[field_s_mag_article_image]</div>
  <div class ="mag-topic-card-container">
    <div class="mag-article-date">[field_s_mag_article_date]</div>
    <div class="mag-article-title mag-article-color-[field_s_mag_article_accent_color]">[title]</div>
    <div class="mag-article-topics">[field_s_mag_article_topics]</div>
    <div class="mag-article-issue mag-issue-color-[field_s_mag_issue_accent_color] mag-issue-color-[field_s_mag_issue_accent_color_1] mag-issue-color-[field_s_mag_issue_accent_color_2] mag-issue-color-[field_s_mag_issue_accent_color_3] mag-issue-color-[field_s_mag_issue_accent_color_4]">[title_1] [title_2] [title_3] [title_4] [title_5]</div>
  </div>
<div class="edit-link">[edit_node]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'stanford_department' => 'stanford_department',
    'stanford_magazine_topics' => 'stanford_magazine_topics',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $export['stanford_magazine_topics'] = $view;

  return $export;
}
