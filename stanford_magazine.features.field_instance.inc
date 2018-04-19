<?php
/**
 * @file
 * stanford_magazine.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_magazine_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-stanford_magazine_article-body'.
  $field_instances['node-stanford_magazine_article-body'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>This text area displays the featured image or video. </p>
<p>To display an <strong>image</strong>: use the <strong>Featured image</strong> field to upload and insert an image.
<p>To display a <strong>video</strong> or <strong>audio</strong> iFrame:
<ol>
<li>Select the <strong>Full HTML</strong> Text format</li>
<li>Copy and paste the embed code </li>
<li>To override the fixed height add <em>class="iframe-auto"</em> after the iframe tag</li>
</ol>
</p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'taxonomy' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Featured image/video insert',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal_html' => 'minimal_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_byline'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_byline'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is your byline. It identifies the author(s) of the article. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'taxonomy' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_byline',
    'label' => 'Byline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal_html' => 'minimal_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_date'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_date'] = array(
    'bundle' => 'stanford_magazine_article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'stanford_month_two_digit_date_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'stanford_month_two_digit_date_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 23,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'stanford_month_two_digit_date_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'taxonomy' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'stanford_month_two_digit_date_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_date',
    'label' => 'Publishing Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'M j Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_dek'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_dek'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is your dek. This displays a summary or teaser of your article. Please keep this under 180 characters.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'taxonomy' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_dek',
    'label' => 'Dek',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal_html' => 'minimal_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_eyebrow'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_eyebrow'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This auto-tagging taxonomy identifies one eyebrow term associated with this article. You may create a new term. Begin typing to see existing terms.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'stanford_mag_article' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'taxonomy' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_eyebrow',
    'label' => 'Eyebrow',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_featured'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_featured'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'This indicates if this article will be featured on the homepage or other places. If setting this to "Featured" please verify that no other magazine articles are also set to "Featured".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'taxonomy' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_featured',
    'label' => 'Featured',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_headline'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_headline'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the title for your news item. Please keep this title under 70 characters.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'taxonomy' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_headline',
    'label' => 'Headline',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal_html' => 'minimal_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_image'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_image'] = array(
    'bundle' => 'stanford_magazine_article',
    'deleted' => 0,
    'description' => '<p>This is your <strong>featured image</strong>. It will be used to identify this magazine article on pages such as a magazine issue page or any other views pages. When it displays it will be scaled and cropped to a ratio of 17:8. For best image fidelity—across all views except the featured Issue image (see below for specs)—upload this image size: 1700x800px. </p>
<p>However, if this is to be the featured article in a <strong>Magazine Issue</strong>, upload an image size of 3200x1505px.</p>
<p><em>If you also want this image to appear on your article detail page, or if you want to embed a video instead of an image you must:</em></p>
<ol>
<li>Insert it into the <strong>Featured image/video insert</strong> field below</li>
<li>Add caption and credits below the image as: <strong>Caption | Credits</strong></li>
<li>Add caption style to the caption and credits as follows:</li>
<ol>
<li>Select all the text for the caption and credits</li>
<li>Select <strong>Caption</strong> from the <strong>Styles</strong> dropdown in the WYSIWYG toolbar</li>
</ol>
</ol>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'banner-850x400',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'taxonomy' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => '',
          'colorbox_node_style_first' => '',
        ),
        'type' => 'colorbox',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_image',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'default_image_ft_source_var' => 'stanford_magazine_article_image',
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '3400x3400',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image_full_width_banner_tall',
        'insert_styles' => array(
          'auto' => 0,
          'colorbox__3-col-header' => 0,
          'colorbox__4-col-header' => 0,
          'colorbox__6-col-banner' => 0,
          'colorbox__6-col-banner-short' => 0,
          'colorbox__6-col-banner-tall' => 0,
          'colorbox__6-col-photo-landscape' => 0,
          'colorbox__8-col-banner' => 0,
          'colorbox__8-col-banner-short' => 0,
          'colorbox__8-col-banner-tall' => 0,
          'colorbox__9-col-banner' => 0,
          'colorbox__9-col-banner-short' => 0,
          'colorbox__12-col-banner' => 0,
          'colorbox__12-col-banner-tall' => 0,
          'colorbox__banner-850x400' => 0,
          'colorbox__full-width-banner' => 0,
          'colorbox__full-width-banner-short' => 0,
          'colorbox__full_width_banner_tall' => 0,
          'colorbox__half-page-profile' => 0,
          'colorbox__header_scale_850x400' => 0,
          'colorbox__huge-landscape' => 0,
          'colorbox__icon-profile' => 0,
          'colorbox__icon-scaled' => 0,
          'colorbox__icon-square' => 0,
          'colorbox__large' => 0,
          'colorbox__large-landscape' => 0,
          'colorbox__large-landscape-scaled' => 0,
          'colorbox__large-profile' => 0,
          'colorbox__large-profile-scaled' => 0,
          'colorbox__large-scaled' => 0,
          'colorbox__large-square' => 0,
          'colorbox__med-landscape' => 0,
          'colorbox__med-landscape-scaled' => 0,
          'colorbox__med-profile' => 0,
          'colorbox__med-profile-scaled' => 0,
          'colorbox__med-square' => 0,
          'colorbox__medium' => 0,
          'colorbox__page-width' => 0,
          'colorbox__sm-landscape' => 0,
          'colorbox__sm-landscape-scaled' => 0,
          'colorbox__sm-profile' => 0,
          'colorbox__sm-profile-scaled' => 0,
          'colorbox__sm-scaled' => 0,
          'colorbox__sm-square' => 0,
          'colorbox__thmb-landscape' => 0,
          'colorbox__thmb-profile' => 0,
          'colorbox__thmb-square' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_3-col-header' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-banner-short' => 0,
          'image_6-col-banner-tall' => 0,
          'image_6-col-photo-landscape' => 0,
          'image_8-col-banner' => 0,
          'image_8-col-banner-short' => 0,
          'image_8-col-banner-tall' => 0,
          'image_9-col-banner' => 0,
          'image_9-col-banner-short' => 0,
          'image_12-col-banner' => 0,
          'image_12-col-banner-tall' => 0,
          'image_banner-850x400' => 'image_banner-850x400',
          'image_full-width-banner' => 0,
          'image_full-width-banner-short' => 0,
          'image_full_width_banner_tall' => 'image_full_width_banner_tall',
          'image_half-page-profile' => 0,
          'image_header_scale_850x400' => 0,
          'image_huge-landscape' => 0,
          'image_icon-profile' => 0,
          'image_icon-scaled' => 0,
          'image_icon-square' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-landscape-scaled' => 0,
          'image_large-profile' => 0,
          'image_large-profile-scaled' => 0,
          'image_large-scaled' => 0,
          'image_large-square' => 0,
          'image_med-landscape' => 0,
          'image_med-landscape-scaled' => 0,
          'image_med-profile' => 0,
          'image_med-profile-scaled' => 0,
          'image_med-square' => 0,
          'image_medium' => 0,
          'image_page-width' => 0,
          'image_sm-landscape' => 0,
          'image_sm-landscape-scaled' => 0,
          'image_sm-profile' => 0,
          'image_sm-profile-scaled' => 0,
          'image_sm-scaled' => 0,
          'image_sm-square' => 0,
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_print'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_print'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => array(
      0 => array(
        'title' => 'Print',
        'url' => '/print/[current-page:url:path]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'taxonomy' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_print',
    'label' => 'Print',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_sections'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_sections'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These are the paragraphs for your article. 
Each of these pre-defined paragraph types supports a different type of content.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'taxonomy' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'p_buttons' => -1,
        'p_callout' => -1,
        'p_cards' => -1,
        'p_hero' => -1,
        'p_icon' => -1,
        'p_menu' => -1,
        'p_two_columns' => 'p_two_columns',
        'p_wysiwyg' => -1,
        'p_wysiwyg_simple' => 'p_wysiwyg_simple',
      ),
      'bundle_weights' => array(
        'p_buttons' => 2,
        'p_callout' => 3,
        'p_cards' => 4,
        'p_hero' => 5,
        'p_icon' => 13,
        'p_menu' => 6,
        'p_two_columns' => 15,
        'p_wysiwyg' => 7,
        'p_wysiwyg_simple' => 17,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_series'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_series'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These terms identify the series associated with this article. Select one or more series.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'taxonomy' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_series',
    'label' => 'Series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-stanford_magazine_article-field_s_mag_article_topics'.
  $field_instances['node-stanford_magazine_article-field_s_mag_article_topics'] = array(
    'bundle' => 'stanford_magazine_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These terms identify the topics associated with this article. Select up to three.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'taxonomy_term_link' => TRUE,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 0,
      ),
      'stanford_featured_mag_article' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
      'stanford_mag_article' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'taxonomy' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_mag_article_topics',
    'label' => 'Topics',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>This is your <strong>featured image</strong>. It will be used to identify this magazine article on pages such as a magazine issue page or any other views pages. When it displays it will be scaled and cropped to a ratio of 17:8. For best image fidelity—across all views except the featured Issue image (see below for specs)—upload this image size: 1700x800px. </p>
<p>However, if this is to be the featured article in a <strong>Magazine Issue</strong>, upload an image size of 3200x1505px.</p>
<p><em>If you also want this image to appear on your article detail page, or if you want to embed a video instead of an image you must:</em></p>
<ol>
<li>Insert it into the <strong>Featured image/video insert</strong> field below</li>
<li>Add caption and credits below the image as: <strong>Caption | Credits</strong></li>
<li>Add caption style to the caption and credits as follows:</li>
<ol>
<li>Select all the text for the caption and credits</li>
<li>Select <strong>Caption</strong> from the <strong>Styles</strong> dropdown in the WYSIWYG toolbar</li>
</ol>
</ol>');
  t('<p>This text area displays the featured image or video. </p>
<p>To display an <strong>image</strong>: use the <strong>Featured image</strong> field to upload and insert an image.
<p>To display a <strong>video</strong> or <strong>audio</strong> iFrame:
<ol>
<li>Select the <strong>Full HTML</strong> Text format</li>
<li>Copy and paste the embed code </li>
<li>To override the fixed height add <em>class="iframe-auto"</em> after the iframe tag</li>
</ol>
</p>');
  t('Byline');
  t('Dek');
  t('Eyebrow');
  t('Featured');
  t('Featured Image');
  t('Featured image/video insert');
  t('Headline');
  t('Print');
  t('Publishing Date');
  t('Sections');
  t('Series');
  t('These are the paragraphs for your article. 
Each of these pre-defined paragraph types supports a different type of content.');
  t('These terms identify the series associated with this article. Select one or more series.');
  t('These terms identify the topics associated with this article. Select up to three.');
  t('This auto-tagging taxonomy identifies one eyebrow term associated with this article. You may create a new term. Begin typing to see existing terms.');
  t('This indicates if this article will be featured on the homepage or other places. If setting this to "Featured" please verify that no other magazine articles are also set to "Featured".');
  t('This is the title for your news item. Please keep this title under 70 characters.');
  t('This is your byline. It identifies the author(s) of the article. ');
  t('This is your dek. This displays a summary or teaser of your article. Please keep this under 180 characters.');
  t('Topics');

  return $field_instances;
}
