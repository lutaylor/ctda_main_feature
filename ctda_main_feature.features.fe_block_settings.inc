<?php
/**
 * @file
 * ctda_main_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ctda_main_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['islandora_basic_collection-collection_listing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_listing',
    'module' => 'islandora_basic_collection',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -22,
      ),
    ),
    'title' => 'Bookmark',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark_list_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark_list_info',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-advanced'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advanced',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'advanced-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -38,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -39,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -38,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -38,
      ),
    ),
    'title' => 'Facets',
    'visibility' => 1,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-display_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_switch',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-explore'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'explore',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-search_navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search_navigation',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-simple'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'simple',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora/search/*
islandora/search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -38,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -39,
      ),
    ),
    'title' => 'Sort',
    'visibility' => 1,
  );

  $export['islandora_usage_stats-recent_activity'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_activity',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-top_downloads'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_downloads',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-top_search'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_search',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_usage_stats-top_usage'] = array(
    'cache' => 1,
    'css_class' => 'front-right match-height',
    'custom' => 0,
    'delta' => 'top_usage',
    'module' => 'islandora_usage_stats',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -33,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -35,
      ),
    ),
    'title' => 'Most Viewed',
    'visibility' => 1,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'masquerade',
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -19,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -5,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -15,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-browse-content'] = array(
    'cache' => -1,
    'css_class' => 'front-left match-height',
    'custom' => 0,
    'delta' => 'menu-browse-content',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -36,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -37,
      ),
    ),
    'title' => 'Browse Content',
    'visibility' => 1,
  );

  $export['menu-menu-footer-lower-menu'] = array(
    'cache' => -1,
    'css_class' => 'footer-lower-menu',
    'custom' => 0,
    'delta' => 'menu-footer-lower-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -31,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -31,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => 'footer-menu-links',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -35,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-header-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-header-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-library-support'] = array(
    'cache' => -1,
    'css_class' => 'btn-libraries',
    'custom' => 0,
    'delta' => 'menu-library-support',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -33,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -33,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-news'] = array(
    'cache' => -1,
    'css_class' => 'front-center match-height',
    'custom' => 0,
    'delta' => 'menu-news',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['service_links-service_links_not_node'] = array(
    'cache' => -1,
    'css_class' => 'block-service-links',
    'custom' => 0,
    'delta' => 'service_links_not_node',
    'module' => 'service_links',
    'node_types' => array(),
    'pages' => '<front>
/advanced-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -30,
      ),
    ),
    'title' => 'Share: ',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -31,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'ctda_theme' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'uconn_theme' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -35,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-footer_icon_and_info-block'] = array(
    'cache' => -1,
    'css_class' => 'footer-university-info',
    'custom' => 0,
    'delta' => 'footer_icon_and_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-footer_social_media-block'] = array(
    'cache' => -1,
    'css_class' => 'footer-social-media-view',
    'custom' => 0,
    'delta' => 'footer_social_media-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -32,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-front_page_icons-block'] = array(
    'cache' => -1,
    'css_class' => 'front-bottom',
    'custom' => 0,
    'delta' => 'front_page_icons-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -30,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -31,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-frontpage_solr_boxes-block'] = array(
    'cache' => -1,
    'css_class' => 'front-left match-height',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -37,
      ),
    ),
    'title' => 'Browse Content',
    'visibility' => 1,
  );

  $export['views-frontpage_solr_boxes-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 12,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-frontpage_solr_boxes-block_2'] = array(
    'cache' => -1,
    'css_class' => 'front-center match-height',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -36,
      ),
    ),
    'title' => 'Recent Additions',
    'visibility' => 1,
  );

  $export['views-image_blocks-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 14,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-image_blocks-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-image_blocks-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-slideshow_galleria-block'] = array(
    'cache' => -1,
    'css_class' => 'view-slideshow-galleria-block slideshow',
    'custom' => 0,
    'delta' => 'slideshow_galleria-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ctda_theme',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'uconn_theme',
        'weight' => -38,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-top_facet_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_facet_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-top_site_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_site_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => 18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => 18,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-usage_collection-usage_stats'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'usage_collection-usage_stats',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ctda_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ctda_theme',
        'weight' => -33,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uconn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uconn_theme',
        'weight' => -33,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
