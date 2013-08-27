<?php
/**
 * @file
 * modulo_banner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function modulo_banner_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'banner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Más información';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  /* Campo: Contenido: imagen banner */
  $handler->display->display_options['fields']['field_imagen_banner']['id'] = 'field_imagen_banner';
  $handler->display->display_options['fields']['field_imagen_banner']['table'] = 'field_data_field_imagen_banner';
  $handler->display->display_options['fields']['field_imagen_banner']['field'] = 'field_imagen_banner';
  $handler->display->display_options['fields']['field_imagen_banner']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_banner']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_banner']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_imagen_banner']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_imagen_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_banner']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['banner'] = array(
    t('Master'),
    t('banner'),
    t('Más información'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('url'),
    t('Block'),
  );
  $export['banner'] = $view;

  return $export;
}
