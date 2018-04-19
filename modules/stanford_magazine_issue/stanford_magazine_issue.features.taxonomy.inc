<?php
/**
 * @file
 * stanford_magazine_issue.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_magazine_issue_taxonomy_default_vocabularies() {
  return array(
    'stanford_mag_issue_layout' => array(
      'name' => 'Magazine Issue Layout',
      'machine_name' => 'stanford_mag_issue_layout',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
