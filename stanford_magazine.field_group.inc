<?php
/**
 * @file
 * stanford_magazine.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_magazine_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_date_and_byline|node|stanford_magazine_article|full';
  $field_group->group_name = 'group_s_date_and_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_magazine_article';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_mag_article_date_byline';
  $field_group->data = array(
    'label' => 'Date and Byline Wrapper',
    'weight' => '22',
    'children' => array(
      0 => 'field_s_mag_article_byline',
      1 => 'field_s_mag_article_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date and Byline Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-date-and-byline field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_date_and_byline|node|stanford_magazine_article|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_mag_article_date_byline|node|stanford_magazine_article|full';
  $field_group->group_name = 'group_s_mag_article_date_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_magazine_article';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date, Byline, and Social Share Container',
    'weight' => '3',
    'children' => array(
      0 => 'group_s_date_and_byline',
      1 => 'group_s_social_and_print',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date, Byline, and Social Share Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-mag-article-date-byline field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_mag_article_date_byline|node|stanford_magazine_article|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_mag_article_dept|node|stanford_magazine_article|full';
  $field_group->group_name = 'group_s_mag_article_dept';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_magazine_article';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Departments',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_mag_article_dept',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related Departments',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-mag-article-dept field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_mag_article_dept|node|stanford_magazine_article|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_social_and_print|node|stanford_magazine_article|full';
  $field_group->group_name = 'group_s_social_and_print';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_magazine_article';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_mag_article_date_byline';
  $field_group->data = array(
    'label' => 'Social and Print Wrapper',
    'weight' => '24',
    'children' => array(
      0 => 'field_s_mag_article_print',
      1 => 'forward_ds_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social and Print Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-social-and-print field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_social_and_print|node|stanford_magazine_article|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Date and Byline Wrapper');
  t('Date, Byline, and Social Share Container');
  t('Related Departments');
  t('Social and Print Wrapper');

  return $field_groups;
}
