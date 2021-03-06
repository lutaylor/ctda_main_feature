<?php
/**
 * @file
 * ctda_main_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ctda_main_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-browse-content.
  $menus['menu-browse-content'] = array(
    'menu_name' => 'menu-browse-content',
    'title' => 'Browse Content',
    'description' => '',
  );
  // Exported menu: menu-news.
  $menus['menu-news'] = array(
    'menu_name' => 'menu-news',
    'title' => 'News',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse Content');
  t('Main menu');
  t('News');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
