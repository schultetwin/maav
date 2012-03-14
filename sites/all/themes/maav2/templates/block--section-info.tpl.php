<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?> id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <?php if ($stylized_image): ?>
      <div class="section-info-pic"><?php print $stylized_image ?></div>
    <?php endif;?>
    <div class="section-info-info">
      <?php print render($title_prefix); ?>
      <?php if ($block->subject): ?>
        <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
      <?php endif;?>
      <?php print render($title_suffix); ?>
      <div class="content"<?php print $content_attributes; ?>>
        <?php
          print render($content);
        ?>
      </div>
    </div>
  </div>
</<?php print $tag; ?>>
