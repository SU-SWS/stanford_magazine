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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'stanford_mag_featured_center' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'stanford_mag_featured_left' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'stanford_mag_featured_right' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_issue-field_s_mag_issue_article_2'.
  $field_instances['node-stanford_magazine_issue-field_s_mag_issue_article_2'] = array(
    'bundle' => 'stanford_magazine_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the second article in this magazine issue.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'stanford_mag_featured_center' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'stanford_mag_featured_left' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'stanford_mag_featured_right' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_issue_article_2',
    'label' => 'Article 2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_issue-field_s_mag_issue_article_3'.
  $field_instances['node-stanford_magazine_issue-field_s_mag_issue_article_3'] = array(
    'bundle' => 'stanford_magazine_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the third article in this magazine issue.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'stanford_mag_featured_center' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'stanford_mag_featured_left' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'stanford_mag_featured_right' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
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
    'field_name' => 'field_s_mag_issue_article_3',
    'label' => 'Article 3',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_issue-field_s_mag_issue_article_4'.
  $field_instances['node-stanford_magazine_issue-field_s_mag_issue_article_4'] = array(
    'bundle' => 'stanford_magazine_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the fourth article in this magazine issue.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'stanford_mag_featured_center' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'stanford_mag_featured_left' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'stanford_mag_featured_right' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_issue_article_4',
    'label' => 'Article 4',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_issue-field_s_mag_issue_article_5'.
  $field_instances['node-stanford_magazine_issue-field_s_mag_issue_article_5'] = array(
    'bundle' => 'stanford_magazine_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the fifth article in this magazine issue.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'stanford_mag_featured_center' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'stanford_mag_featured_left' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'stanford_mag_featured_right' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_issue_article_5',
    'label' => 'Article 5',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
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
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_featured_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'stanford_mag_featured_center' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_featured_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'stanford_mag_featured_left' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_featured_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'stanford_mag_featured_right' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'stanford_featured_mag_article',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
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
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_issue-field_s_mag_issue_number'.
  $field_instances['node-stanford_magazine_issue-field_s_mag_issue_number'] = array(
    'bundle' => 'stanford_magazine_issue',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the issue number. Enter <em>just</em> the number for the issue, e.g. 5, 7, 18, 35, etc.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'stanford_mag_featured_center' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'stanford_mag_featured_left' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'stanford_mag_featured_right' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_issue_number',
    'label' => 'Issue Number',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article 2');
  t('Article 3');
  t('Article 4');
  t('Article 5');
  t('Body');
  t('Featured Article');
  t('Issue Number');
  t('This is the featured article for this magazine issue. 
<br>
The featured image for this article will be the featured image for this issue. For best image fidelity, use an image size of 3200x1505px.');
  t('This is the fifth article in this magazine issue.');
  t('This is the fourth article in this magazine issue.');
  t('This is the issue number. Enter <em>just</em> the number for the issue, e.g. 5, 7, 18, 35, etc.');
  t('This is the second article in this magazine issue.');
  t('This is the third article in this magazine issue.');

  return $field_instances;
}
