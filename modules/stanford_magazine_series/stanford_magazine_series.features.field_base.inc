<?php
/**
 * @file
 * stanford_magazine_series.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stanford_magazine_series_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_s_mag_series_articles'.
  $field_bases['field_s_mag_series_articles'] = array(
    'active' => 1,
    'cardinality' => 10,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_mag_series_articles',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'stanford_magazine_article' => 'stanford_magazine_article',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
