<?php
/**
 * @file
 * stanford_magazine_layouts.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stanford_magazine_layouts_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_s_mag_article_dept'.
  $field_bases['field_s_mag_article_dept'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_mag_article_dept',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'stanford_department',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
