<?php
/**
 * @file
 * stanford_magazine.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_magazine_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_magazine_article|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_magazine_article';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|stanford_magazine_article|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_magazine_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_magazine_article|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_magazine_article';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_s_mag_article_topics',
        1 => 'title',
        2 => 'field_s_mag_article_dek',
        3 => 'field_s_mag_article_date',
        4 => 'field_s_mag_article_byline',
        5 => 'body',
        6 => 'field_s_mag_article_sections',
      ),
    ),
    'fields' => array(
      'field_s_mag_article_topics' => 'ds_content',
      'title' => 'ds_content',
      'field_s_mag_article_dek' => 'ds_content',
      'field_s_mag_article_date' => 'ds_content',
      'field_s_mag_article_byline' => 'ds_content',
      'body' => 'ds_content',
      'field_s_mag_article_sections' => 'ds_content',
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
  );
  $export['node|stanford_magazine_article|full'] = $ds_layout;

  return $export;
}