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
