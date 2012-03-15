<div id="page" class="container">

  <?php print render($page['leaderboard']); ?>

  <header class="clearfix" role="banner">

    <?php if ($linked_site_logo): ?>
      <div id="logo"><?php print $linked_site_logo; ?></div>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <hgroup<?php if (!$site_slogan && $hide_site_name): ?> class="<?php print $visibility; ?>"<?php endif; ?>>
        <?php print render($page['header']); ?>
        <?php if ($site_name): ?>
          <h1 id="site-name"<?php if ($hide_site_name): ?> class="<?php print $visibility; ?>"<?php endif; ?>><?php print $site_name; ?></h1>
        <?php endif; ?>
        <?php if ($site_slogan): ?>
          <h2 id="site-slogan"><?php print $site_slogan; ?></h2>
        <?php endif; ?>
      </hgroup>
    <?php endif; ?>


  </header>

  <?php if ($primary_navigation): print $primary_navigation; endif; ?>
  <?php print render($page['menu_bar']); ?>
  <?php if ($secondary_navigation): print $secondary_navigation; endif; ?>

  <div id="section-info"><?php print render($page['section_info']); ?></div>

  <?php if ($breadcrumb): ?>
    <nav id="breadcrumb"><?php print $breadcrumb; ?></nav>
  <?php endif; ?>

  <?php print $messages; ?>
  <?php print render($page['help']); ?>

  <?php print render($page['secondary_content']); ?>

  <div id="columns"><div class="columns-inner clearfix">
    <div id="content-column"><div class="content-inner">

      <?php print render($page['highlighted']); ?>

      <?php $tag = $title ? 'section' : 'div'; ?>
      <<?php print $tag; ?> id="main-content" role="main">

        <?php print render($title_prefix); ?>
        <?php if ($title || $primary_local_tasks || $secondary_local_tasks || $action_links = render($action_links)): ?>
          <header>
            <?php if ($title): ?>
              <h1 id="page-title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php if ($primary_local_tasks || $secondary_local_tasks || $action_links): ?>
              <div id="tasks">
                <?php if ($primary_local_tasks): ?>
                  <ul class="tabs primary clearfix"><?php print render($primary_local_tasks); ?></ul>
                <?php endif; ?>
                <?php if ($secondary_local_tasks): ?>
                  <ul class="tabs secondary clearfix"><?php print render($secondary_local_tasks); ?></ul>
                <?php endif; ?>
                <?php if ($action_links = render($action_links)): ?>
                  <ul class="action-links clearfix"><?php print $action_links; ?></ul>
                <?php endif; ?>
              </div>
            <?php endif; ?>
          </header>
        <?php endif; ?>
        <?php print render($title_suffix); ?>

        <div id="content"><?php print render($page['content']); ?></div>

        <?php print $feed_icons; ?>

      </<?php print $tag; ?>>

      <?php print render($page['content_aside']); ?>

    </div></div>

    <?php print render($page['sidebar_first']); ?>
    <?php print render($page['sidebar_second']); ?>

  </div></div>

  <?php print render($page['tertiary_content']); ?>
  <footer role="contentinfo">
  <?php if ($page['footer']): ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
 </footer>
</div>
