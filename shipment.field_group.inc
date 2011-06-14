<?php
/**
 * @file
 * shipment.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function shipment_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|shipment|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'shipment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About Shipment',
    'weight' => '4',
    'children' => array(
      0 => 'field_shipment_description',
      1 => 'field_shipment_status',
      2 => 'field_shipment_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_about|node|shipment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_from|node|shipment|form';
  $field_group->group_name = 'group_from';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'shipment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'From',
    'weight' => '3',
    'children' => array(
      0 => 'field_shipment_from',
      1 => 'field_shipment_origin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_from|node|shipment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_to|node|shipment|form';
  $field_group->group_name = 'group_to';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'shipment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'To',
    'weight' => '2',
    'children' => array(
      0 => 'field_shipment_final_destination',
      1 => 'field_shipment_to',
      2 => 'field_shipment_destination',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_to|node|shipment|form'] = $field_group;

  return $export;
}
