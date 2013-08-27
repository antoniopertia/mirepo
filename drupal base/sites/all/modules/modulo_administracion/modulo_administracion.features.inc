<?php
/**
 * @file
 * modulo_administracion.features.inc
 */

/**
 * Implements hook_views_api().
 */
function modulo_administracion_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function modulo_administracion_node_info() {
  $items = array(
    'p_gina_especial' => array(
      'name' => t('Página Especial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
