<?php
/**
 * @file
 * stanford_magazine_article_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_magazine_article_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_magazine_article_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
