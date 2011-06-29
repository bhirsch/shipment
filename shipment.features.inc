<?php
/**
 * @file
 * shipment.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shipment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => 1);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function shipment_node_info() {
  $items = array(
    'shipment' => array(
      'name' => t('Shipment'),
      'base' => 'node_content',
      'description' => t('Generic tobacco product shipment.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rdf_default_mappings().
 */
function shipment_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: shipment
  $rdf_mappings['node']['shipment'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_shipment_destination' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:destination',
      ),
    ),
    'field_shipment_final_destination' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:final-destination',
      ),
    ),
    'field_shipment_from' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:from',
      ),
    ),
    'field_shipment_origin' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:origin',
      ),
    ),
    'field_shipment_status' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:status',
      ),
    ),
    'field_shipment_to' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:to',
      ),
    ),
    'field_shipment_recipient' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:recipient',
      ),
    ),
    'field_shipment_received_final' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:received-final',
      ),
    ),
    'field_shipment_state' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:state',
      ),
    ),
    'field_shipment_description' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:description',
      ),
    ),
    'field_shipment_date' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:date',
      ),
    ),
    'field_shipment_id' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'fctc:id',
      ),
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
  );

  return $rdf_mappings;
}
