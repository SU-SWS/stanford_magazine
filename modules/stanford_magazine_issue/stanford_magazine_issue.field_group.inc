<?php
/**
 * @file
 * stanford_magazine_issue.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_magazine_issue_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_mag_issue_articles|node|stanford_magazine_issue|form';
  $field_group->group_name = 'group_s_mag_issue_articles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_magazine_issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Articles',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_mag_issue_featured',
      1 => 'field_s_mag_issue_article_2',
      2 => 'field_s_mag_issue_article_3',
      3 => 'field_s_mag_issue_article_4',
      4 => 'field_s_mag_issue_article_5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add/Edit Articles',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-s-mag-issue-articles field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_s_mag_issue_articles|node|stanford_magazine_issue|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add/Edit Articles');

  return $field_groups;
}
