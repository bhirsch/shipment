<?php
/**
 * @file
 * shipment.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function shipment_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:node/add/shipment
  $menu_links['features:node/add/shipment'] = array(
    'menu_name' => 'features',
    'link_path' => 'node/add/shipment',
    'router_path' => 'node/add/shipment',
    'link_title' => 'Add Shipment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Shipment');


  return $menu_links;
}
