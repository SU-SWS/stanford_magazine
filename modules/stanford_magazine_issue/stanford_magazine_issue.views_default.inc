<?php
/**
 * @file
 * stanford_magazine_issue.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_magazine_issue_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_magazine_issue_article';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Magazine Issue: Article';
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_banner_accent_color']['id'] = 'field_s_banner_accent_color';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['table'] = 'field_data_field_s_banner_accent_color';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['field'] = 'field_s_banner_accent_color';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_banner_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_banner_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_banner_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['id'] = 'field_s_mag_article_date_1';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_s_mag_article_headline']['id'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['table'] = 'field_data_field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['field'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_default_classes'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'full_width_banner_tall',
    'image_link' => '',
  );
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="node/[nid]">
  <div class="mag-article-image">[field_s_mag_article_image] </div>
</a>
<div class ="mag-article-container">
  <div class="mag-article-date">[field_s_mag_article_date_1] </div>
  <a href="node/[nid]">
    <h2 class="mag-article-title">[field_s_mag_article_headline]</h2>
  </a>
  <div class="mag-article-tax">[field_s_mag_article_topics]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'stanford_magazine_issue' => 'stanford_magazine_issue',
  );

  /* Display: 2nd Article Block */
  $handler = $view->new_display('block', '2nd Article Block', 'article_2_block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_article_2_target_id']['id'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_2_target_id']['table'] = 'field_data_field_s_mag_issue_article_2';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_2_target_id']['field'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_2_target_id']['label'] = '2nd Article';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'full_width_banner_tall',
    'image_link' => '',
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_s_mag_article_headline']['id'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['table'] = 'field_data_field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['field'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_default_classes'] = FALSE;
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['id'] = 'field_s_mag_article_date_1';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['relationship'] = 'field_s_mag_issue_article_2_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="node/[nid]">
  <div class="mag-article-image">[field_s_mag_article_image] </div>
</a>
<div class ="mag-article-container">
  <div class="mag-article-date">[field_s_mag_article_date_1] </div>
  <a href="node/[nid]">
    <h2 class="mag-article-title [field_s_mag_issue_accent_color]">[field_s_mag_article_headline]</h2>
  </a>
  <div class="mag-article-tax">[field_s_mag_article_topics]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: 3rd Article Block */
  $handler = $view->new_display('block', '3rd Article Block', 'article_3_block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_article_3_target_id']['id'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_3_target_id']['table'] = 'field_data_field_s_mag_issue_article_3';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_3_target_id']['field'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_3_target_id']['label'] = '3rd Article';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'full_width_banner_tall',
    'image_link' => '',
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_s_mag_article_headline']['id'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['table'] = 'field_data_field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['field'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_default_classes'] = FALSE;
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['id'] = 'field_s_mag_article_date_1';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['relationship'] = 'field_s_mag_issue_article_3_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = ' <a href="node/[nid]">
  <div class="mag-article-image">[field_s_mag_article_image] </div>
</a>
<div class ="mag-article-container">
  <div class="mag-article-date">[field_s_mag_article_date_1] </div>
  <a href="node/[nid]">
    <h2 class="mag-article-title [field_s_mag_issue_accent_color]">[field_s_mag_article_headline]</h2>
  </a>
  <div class="mag-article-tax">[field_s_mag_article_topics]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: 4th Article Block */
  $handler = $view->new_display('block', '4th Article Block', 'article_4_block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_article_4_target_id']['id'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_4_target_id']['table'] = 'field_data_field_s_mag_issue_article_4';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_4_target_id']['field'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_4_target_id']['label'] = '4th Article';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'full_width_banner_tall',
    'image_link' => '',
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_s_mag_article_headline']['id'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['table'] = 'field_data_field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['field'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_default_classes'] = FALSE;
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['id'] = 'field_s_mag_article_date_1';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['relationship'] = 'field_s_mag_issue_article_4_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="node/[nid]">
  <div class="mag-article-image">[field_s_mag_article_image] </div>
</a>
<div class ="mag-article-container">
  <div class="mag-article-date">[field_s_mag_article_date_1] </div>
  <a href="node/[nid]">
    <h2 class="mag-article-title [field_s_mag_issue_accent_color]">[field_s_mag_article_headline]</h2>
  </a>
  <div class="mag-article-tax">[field_s_mag_article_topics]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: 5th Article Block */
  $handler = $view->new_display('block', '5th Article Block', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_article_5_target_id']['id'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_5_target_id']['table'] = 'field_data_field_s_mag_issue_article_5';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_5_target_id']['field'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_article_5_target_id']['label'] = '5th Article ';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'full_width_banner_tall',
    'image_link' => '',
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_s_mag_article_headline']['id'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['table'] = 'field_data_field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['field'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_default_classes'] = FALSE;
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['id'] = 'field_s_mag_article_date_1';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['relationship'] = 'field_s_mag_issue_article_5_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="node/[nid]">
  <div class="mag-article-image">[field_s_mag_article_image] </div>
</a>
<div class ="mag-article-container">
  <div class="mag-article-date">[field_s_mag_article_date_1] </div>
  <a href="node/[nid]">
    <h2 class="mag-article-title [field_s_mag_issue_accent_color] ">[field_s_mag_article_headline]</h2>
  </a>
  <div class="mag-article-tax">[field_s_mag_article_topics]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['stanford_magazine_issue_article'] = $view;

  $view = new view();
  $view->name = 'stanford_magazine_issue_featured_article';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Magazine Issue: Featured Article';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_s_mag_issue_featured_target_id']['id'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_featured_target_id']['table'] = 'field_data_field_s_mag_issue_featured';
  $handler->display->display_options['relationships']['field_s_mag_issue_featured_target_id']['field'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['relationships']['field_s_mag_issue_featured_target_id']['label'] = 'Featured Article';
  /* Field: Content: Accent color */
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['id'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['table'] = 'field_data_field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['field'] = 'field_s_mag_issue_accent_color';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_issue_accent_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_s_mag_article_image']['id'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['table'] = 'field_data_field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['field'] = 'field_s_mag_article_image';
  $handler->display->display_options['fields']['field_s_mag_article_image']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_mag_article_image']['settings'] = array(
    'image_style' => 'full_width_banner_tall',
    'image_link' => '',
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_s_mag_article_headline']['id'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['table'] = 'field_data_field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['field'] = 'field_s_mag_article_headline';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_mag_article_headline']['element_default_classes'] = FALSE;
  /* Field: Content: Publishing Date */
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['id'] = 'field_s_mag_article_date_1';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['table'] = 'field_data_field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['field'] = 'field_s_mag_article_date';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Dek */
  $handler->display->display_options['fields']['field_s_mag_article_dek']['id'] = 'field_s_mag_article_dek';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['table'] = 'field_data_field_s_mag_article_dek';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['field'] = 'field_s_mag_article_dek';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_dek']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_dek']['element_label_colon'] = FALSE;
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_s_mag_article_topics']['id'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['table'] = 'field_data_field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['field'] = 'field_s_mag_article_topics';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['relationship'] = 'field_s_mag_issue_featured_target_id';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_s_mag_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_mag_article_topics']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="node/[nid]">
  <div class="mag-feat-image-container">
    <div>[field_s_mag_article_image]</div>
    <h2 class="mag-issue-color-[field_s_mag_issue_accent_color]">Digital Magazine | [title]</h2>
    <p>Scroll to <strong>Explore</strong></p>
  </div>
</a>
<div class ="mag-feat-container">
  <div class="mag-feat-date">[field_s_mag_article_date_1] </div>
  <a href="node/[nid]">
    <h2 class="mag-feat-title">[field_s_mag_article_headline]</h2>
  </a>
  <div class="mag-feat-dek">[field_s_mag_article_dek]</div>
  <div class="mag-feat-tax">[field_s_mag_article_topics]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'stanford_magazine_issue' => 'stanford_magazine_issue',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['stanford_magazine_issue_featured_article'] = $view;

  return $export;
}
