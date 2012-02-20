<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?> id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <?php if ($stylized_image): ?>
      <div class="section-info-pic"><?php print $stylized_image ?></div>
    <?php endif;?>
    <div class="section-info-info">
      <?php if ($special_title): ?>
        <h2<?php print $title_attributes; ?>><?php print $special_title; ?></h2>
      <?php endif; ?>
      <div<?php print $content_attributes; ?>>
        <?php print $special_description ?>
      </div>
    </div>
  </div>
</<?php print $tag; ?>>
