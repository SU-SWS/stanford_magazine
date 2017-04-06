<?php
/**
 * @file
 * stanford_magazine_layouts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_magazine_layouts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_dept'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_dept'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These terms identify the departments associated with this article. Select one or more department.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_dept',
    'label' => 'Department',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Department');
  t('These terms identify the departments associated with this article. Select one or more department.');

  return $field_instances;
}
