<?php
/**
 * @file
 * modulo_banner.features.inc
 */

/**
 * Implements hook_views_api().
 */
function modulo_banner_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function modulo_banner_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
