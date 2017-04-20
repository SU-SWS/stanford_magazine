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
        'views-da518116e8552578c364fd1694557979' => array(
          'module' => 'views',
          'delta' => 'da518116e8552578c364fd1694557979',
          'region' => 'fullwidth_top',
          'weight' => '-8',
        ),
        'views-ce0be3cba2a345e031d9e347a82d8508' => array(
          'module' => 'views',
          'delta' => 'ce0be3cba2a345e031d9e347a82d8508',
          'region' => 'content_row2',
          'weight' => '-10',
        ),
        'views-5734dd8d161989827de5bdc49ae3084d' => array(
          'module' => 'views',
          'delta' => '5734dd8d161989827de5bdc49ae3084d',
          'region' => 'content_row2',
          'weight' => '-9',
        ),
        'views-ca8638058ca82b9d56f9a92c63997800' => array(
          'module' => 'views',
          'delta' => 'ca8638058ca82b9d56f9a92c63997800',
          'region' => 'content_row2',
          'weight' => '-8',
        ),
        'views-a10afbfbd3cba66965fc3de73aade672' => array(
          'module' => 'views',
          'delta' => 'a10afbfbd3cba66965fc3de73aade672',
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
