<?php
/**
 * @file
 * stanford_magazine.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_magazine_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_stanford_magazine_article';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_stanford_magazine_article';
  $strongarm->value = '[node:field_s_mag_article_headline]';
  $export['ant_pattern_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_stanford_magazine_article';
  $strongarm->value = 0;
  $export['ant_php_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_stanford_magazine_article';
  $strongarm->value = '1';
  $export['ant_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__stanford_magazine_article';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_8_col_banner' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_extras_single_region' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_news_extras' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_cap' => array(
        'custom_settings' => FALSE,
      ),
      'taxonomy' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_engineering' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_featured_mag_article' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_mag_article' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_mag_featured_center' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_mag_featured_left' => array(
        'custom_settings' => FALSE,
      ),
      'stanford_mag_featured_right' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stanford_magazine_article';
  $strongarm->value = array();
  $export['menu_options_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stanford_magazine_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_magazine_article';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stanford_magazine_article';
  $strongarm->value = '1';
  $export['node_preview_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stanford_magazine_article';
  $strongarm->value = 0;
  $export['node_submitted_stanford_magazine_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_stanford_magazine_article_pattern';
  $strongarm->value = 'magazine/article/[node:title]';
  $export['pathauto_node_stanford_magazine_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stanford_magazine_eyebrow_pattern';
  $strongarm->value = 'magazine/[term:name]';
  $export['pathauto_taxonomy_term_stanford_magazine_eyebrow_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stanford_magazine_series_pattern';
  $strongarm->value = 'magazine/[term:name]';
  $export['pathauto_taxonomy_term_stanford_magazine_series_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_stanford_magazine_topics_pattern';
  $strongarm->value = 'magazine/[term:name]';
  $export['pathauto_taxonomy_term_stanford_magazine_topics_pattern'] = $strongarm;

  return $export;
}
