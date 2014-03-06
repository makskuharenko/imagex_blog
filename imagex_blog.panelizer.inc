<?php
/**
 * @file
 * imagex_blog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function imagex_blog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'three_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6d778cf6-ef79-4a66-9ed7-4a55e9454381';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5d04f3af-9898-4791-92d7-44c0f0b93dbd';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'type' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'standard-bean recent-events filtered-view landing-pages-left-bar',
      'css_id' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5d04f3af-9898-4791-92d7-44c0f0b93dbd';
    $display->content['new-5d04f3af-9898-4791-92d7-44c0f0b93dbd'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-5d04f3af-9898-4791-92d7-44c0f0b93dbd';
    $pane = new stdClass();
    $pane->pid = 'new-41d5607d-7fde-4af5-bce6-926074f32e1d';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'class' => '',
      'id' => '',
      'link' => 0,
      'markup' => 'h1',
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41d5607d-7fde-4af5-bce6-926074f32e1d';
    $display->content['new-41d5607d-7fde-4af5-bce6-926074f32e1d'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-41d5607d-7fde-4af5-bce6-926074f32e1d';
    $pane = new stdClass();
    $pane->pid = 'new-b5d6ca2f-c11b-466e-8ee9-ad14d47999d1';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_linux_byline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b5d6ca2f-c11b-466e-8ee9-ad14d47999d1';
    $display->content['new-b5d6ca2f-c11b-466e-8ee9-ad14d47999d1'] = $pane;
    $display->panels['three_25_50_25_second'][1] = 'new-b5d6ca2f-c11b-466e-8ee9-ad14d47999d1';
    $pane = new stdClass();
    $pane->pid = 'new-1d8b8b26-7e0c-4a3b-8e00-afbc9b67b43a';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1d8b8b26-7e0c-4a3b-8e00-afbc9b67b43a';
    $display->content['new-1d8b8b26-7e0c-4a3b-8e00-afbc9b67b43a'] = $pane;
    $display->panels['three_25_50_25_second'][2] = 'new-1d8b8b26-7e0c-4a3b-8e00-afbc9b67b43a';
    $pane = new stdClass();
    $pane->pid = 'new-b9a6ec38-c61e-4e1f-8500-ebb21ccf32ad';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'context' => 'panelizer',
      'format' => 'linux_events_short_date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'node-date',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b9a6ec38-c61e-4e1f-8500-ebb21ccf32ad';
    $display->content['new-b9a6ec38-c61e-4e1f-8500-ebb21ccf32ad'] = $pane;
    $display->panels['three_25_50_25_second'][3] = 'new-b9a6ec38-c61e-4e1f-8500-ebb21ccf32ad';
    $pane = new stdClass();
    $pane->pid = 'new-08075a69-abc0-419b-ba79-c5673afffc1d';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Comment Count Custom',
      'title' => '',
      'body' => '<p><a class="comment-count" href="#comments">%node:comment-count</a></p>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-comment-counter node-meta-last',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '08075a69-abc0-419b-ba79-c5673afffc1d';
    $display->content['new-08075a69-abc0-419b-ba79-c5673afffc1d'] = $pane;
    $display->panels['three_25_50_25_second'][4] = 'new-08075a69-abc0-419b-ba79-c5673afffc1d';
    $pane = new stdClass();
    $pane->pid = 'new-2b28e53b-dfb1-4592-bd12-12a8ee6011a0';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_link' => '',
        'image_style' => 'large_tile__700x360_',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2b28e53b-dfb1-4592-bd12-12a8ee6011a0';
    $display->content['new-2b28e53b-dfb1-4592-bd12-12a8ee6011a0'] = $pane;
    $display->panels['three_25_50_25_second'][5] = 'new-2b28e53b-dfb1-4592-bd12-12a8ee6011a0';
    $pane = new stdClass();
    $pane->pid = 'new-1f793707-3623-4d9b-9b5c-0c89d934612a';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_file_attachment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter' => 'file_default',
      'formatter_settings' => array(),
      'label' => 'above',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1f793707-3623-4d9b-9b5c-0c89d934612a';
    $display->content['new-1f793707-3623-4d9b-9b5c-0c89d934612a'] = $pane;
    $display->panels['three_25_50_25_second'][6] = 'new-1f793707-3623-4d9b-9b5c-0c89d934612a';
    $pane = new stdClass();
    $pane->pid = 'new-fb468785-50c7-4371-acaf-8a80adc65c02';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'fb468785-50c7-4371-acaf-8a80adc65c02';
    $display->content['new-fb468785-50c7-4371-acaf-8a80adc65c02'] = $pane;
    $display->panels['three_25_50_25_second'][7] = 'new-fb468785-50c7-4371-acaf-8a80adc65c02';
    $pane = new stdClass();
    $pane->pid = 'new-b7d9a804-9815-47bf-a9ba-87bc3c586a11';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'b7d9a804-9815-47bf-a9ba-87bc3c586a11';
    $display->content['new-b7d9a804-9815-47bf-a9ba-87bc3c586a11'] = $pane;
    $display->panels['three_25_50_25_second'][8] = 'new-b7d9a804-9815-47bf-a9ba-87bc3c586a11';
    $pane = new stdClass();
    $pane->pid = 'new-dcafd67b-1467-4452-8556-360e436a7619';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'dcafd67b-1467-4452-8556-360e436a7619';
    $display->content['new-dcafd67b-1467-4452-8556-360e436a7619'] = $pane;
    $display->panels['three_25_50_25_second'][9] = 'new-dcafd67b-1467-4452-8556-360e436a7619';
    $pane = new stdClass();
    $pane->pid = 'new-e240afb3-df5a-4880-af70-38585a74937b';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'e240afb3-df5a-4880-af70-38585a74937b';
    $display->content['new-e240afb3-df5a-4880-af70-38585a74937b'] = $pane;
    $display->panels['three_25_50_25_second'][10] = 'new-e240afb3-df5a-4880-af70-38585a74937b';
    $pane = new stdClass();
    $pane->pid = 'new-ee7077bc-994e-4fd8-977e-b38fa76cfec2';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Comments',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'ee7077bc-994e-4fd8-977e-b38fa76cfec2';
    $display->content['new-ee7077bc-994e-4fd8-977e-b38fa76cfec2'] = $pane;
    $display->panels['three_25_50_25_second'][11] = 'new-ee7077bc-994e-4fd8-977e-b38fa76cfec2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e240afb3-df5a-4880-af70-38585a74937b';
  $panelizer->display = $display;
  $export['node:blog:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e77595e9-9d8f-4d32-8f93-177df4850f6f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5c5d3bb0-5785-4462-9484-dffc58ba1f08';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5c5d3bb0-5785-4462-9484-dffc58ba1f08';
    $display->content['new-5c5d3bb0-5785-4462-9484-dffc58ba1f08'] = $pane;
    $display->panels['center'][0] = 'new-5c5d3bb0-5785-4462-9484-dffc58ba1f08';
    $pane = new stdClass();
    $pane->pid = 'new-22b9cc29-2f25-4c81-bd1b-ce318cd612d9';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_file_attachment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '22b9cc29-2f25-4c81-bd1b-ce318cd612d9';
    $display->content['new-22b9cc29-2f25-4c81-bd1b-ce318cd612d9'] = $pane;
    $display->panels['center'][1] = 'new-22b9cc29-2f25-4c81-bd1b-ce318cd612d9';
    $pane = new stdClass();
    $pane->pid = 'new-844ef441-9ba7-472d-b5a3-b86fb66f69a5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => 600,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '844ef441-9ba7-472d-b5a3-b86fb66f69a5';
    $display->content['new-844ef441-9ba7-472d-b5a3-b86fb66f69a5'] = $pane;
    $display->panels['center'][2] = 'new-844ef441-9ba7-472d-b5a3-b86fb66f69a5';
    $pane = new stdClass();
    $pane->pid = 'new-f6a428e3-1da4-4419-b5b7-906183ab1df3';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6a428e3-1da4-4419-b5b7-906183ab1df3';
    $display->content['new-f6a428e3-1da4-4419-b5b7-906183ab1df3'] = $pane;
    $display->panels['center'][3] = 'new-f6a428e3-1da4-4419-b5b7-906183ab1df3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:blog:default:teaser'] = $panelizer;

  features_alter_code('panelizer_defaults', $export);

  return $export;
}
