<?php
/**
 * @file
 * stanford_magazine_issue.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_magazine_issue_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-stanford_magazine_issue-body'.
  $field_instances['node-stanford_magazine_issue-body'] = array(
    'bundle' => 'stanford_magazine_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 41,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_issue-field_s_mag_issue_featured'.
  $field_instances['node-stanford_magazine_issue-field_s_mag_issue_featured'] = array(
    'bundle' => 'stanford_magazine_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the featured article for this magazine issue. 
<br>
The featured image for this article will be the featured image for this issue. For best image fidelity, use an image size of 3200x1505px.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_issue_featured',
    'label' => 'Featured Article',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Featured Article');
  t('This is the featured article for this magazine issue. 
<br>
The featured image for this article will be the featured image for this issue. For best image fidelity, use an image size of 3200x1505px.');

  return $field_instances;
}
