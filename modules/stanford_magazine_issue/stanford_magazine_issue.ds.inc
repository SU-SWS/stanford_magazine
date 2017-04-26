<?php
/**
 * @file
 * stanford_magazine_issue.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_magazine_issue_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_magazine_issue|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_magazine_issue';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|stanford_magazine_issue|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_magazine_issue|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_magazine_issue';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'stanford_featured_article' => array(
        0 => 'field_s_mag_issue_featured',
      ),
      'stanford_article_2' => array(
        1 => 'field_s_mag_issue_article_2',
      ),
      'stanford_article_3' => array(
        2 => 'field_s_mag_issue_article_3',
      ),
      'stanford_article_4' => array(
        3 => 'field_s_mag_issue_article_4',
      ),
      'stanford_article_5' => array(
        4 => 'field_s_mag_issue_article_5',
      ),
    ),
    'fields' => array(
      'field_s_mag_issue_featured' => 'stanford_featured_article',
      'field_s_mag_issue_article_2' => 'stanford_article_2',
      'field_s_mag_issue_article_3' => 'stanford_article_3',
      'field_s_mag_issue_article_4' => 'stanford_article_4',
      'field_s_mag_issue_article_5' => 'stanford_article_5',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|stanford_magazine_issue|full'] = $ds_layout;

  return $export;
}
