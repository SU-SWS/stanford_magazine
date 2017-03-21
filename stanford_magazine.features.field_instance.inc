<?php
/**
 * @file
 * stanford_magazine.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_magazine_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-stanford_magazine_article-body'.
  $field_instances['node-stanford_magazine_article-body'] = array(
    'bundle' => 'stanford_magazine_article',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_mag_article_sections'.
  $field_instances['node-stanford_magazine_article-field_mag_article_sections'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These are the paragraphs for your article. 
Each of these pre-defined paragraph types supports a different type of content.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
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
    'field_name' => 'field_mag_article_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'p_buttons' => -1,
        'p_callout' => -1,
        'p_cards' => -1,
        'p_hero' => -1,
        'p_menu' => -1,
        'p_wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'p_buttons' => 2,
        'p_callout' => 3,
        'p_cards' => 4,
        'p_hero' => 5,
        'p_menu' => 6,
        'p_wysiwyg' => 7,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_mag_article_series'.
  $field_instances['node-stanford_magazine_article-field_mag_article_series'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This identifies the series associated with this article. Select one or more series.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_mag_article_series',
    'label' => 'Series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_mag_article_topics'.
  $field_instances['node-stanford_magazine_article-field_mag_article_topics'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This identifies the topics associated with this article. Select one or more topics.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_mag_article_topics',
    'label' => 'Topics',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Sections');
  t('Series');
  t('These are the paragraphs for your article. 
Each of these pre-defined paragraph types supports a different type of content.');
  t('This identifies the series associated with this article. Select one or more series.');
  t('This identifies the topics associated with this article. Select one or more topics.');
  t('Topics');

  return $field_instances;
}
