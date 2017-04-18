<?php
/**
 * @file
 * stanford_magazine_issue.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_magazine_issue_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_magazine_issue';
  $context->description = 'Context for Stanford Magazine Issue';
  $context->tag = 'Magazine';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_magazine_issue' => 'stanford_magazine_issue',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-stanford_featured_article' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_featured_article',
          'region' => 'fullwidth_top',
          'weight' => '-9',
        ),
        'ds_extras-stanford_article_2' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_article_2',
          'region' => 'content_row2',
          'weight' => '-10',
        ),
        'ds_extras-stanford_article_3' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_article_3',
          'region' => 'content_row2',
          'weight' => '-9',
        ),
        'ds_extras-stanford_article_4' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_article_4',
          'region' => 'content_row2',
          'weight' => '-8',
        ),
        'ds_extras-stanford_article_5' => array(
          'module' => 'ds_extras',
          'delta' => 'stanford_article_5',
          'region' => 'content_row2',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Stanford Magazine Issue');
  t('Magazine');
  $export['stanford_magazine_issue'] = $context;

  return $export;
}
