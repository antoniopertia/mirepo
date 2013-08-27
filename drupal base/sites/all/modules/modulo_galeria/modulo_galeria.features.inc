<?php
/**
 * @file
 * modulo_galeria.features.inc
 */

/**
 * Implements hook_views_api().
 */
function modulo_galeria_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function modulo_galeria_node_info() {
  $items = array(
    'galeria' => array(
      'name' => t('Galeria'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
