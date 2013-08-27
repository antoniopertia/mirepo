<?php
/**
 * @file
 * modulo_noticias.features.inc
 */

/**
 * Implements hook_views_api().
 */
function modulo_noticias_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function modulo_noticias_node_info() {
  $items = array(
    'noticia' => array(
      'name' => t('Noticias'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  return $items;
}
