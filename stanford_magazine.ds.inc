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
    ),
  );
  $export['node|stanford_magazine_article|full'] = $ds_fieldsetting;

  return $export;
}
