<?php
/**
 * @file
 * maav_base.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function maav_base_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  array(
    \'vid\' => \'2\',
    \'uid\' => \'1\',
    \'title\' => \'The Competition\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'nid\' => \'2\',
    \'type\' => \'page\',
    \'language\' => \'und\',
    \'created\' => \'1318473094\',
    \'changed\' => \'1318535748\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'revision_timestamp\' => \'1318535748\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'The International Aerial robotics competition (IARC) is an annual event hosted by the Association for Unmanned Vehicle Systems International. Teams from around the world have come to display cutting edge UAV technology at the competition for the past 20 years. Michigan Autonomous Aerial Vehicles made its first appearance at the IARC in August of 2010 bringing along 13 members representing 5 engineering disciplines.

Due to the highly challenging nature of the IARC, in its 20 years of existence only 5 teams have managed to complete all mission objectives. MAAV is looking forward to becoming team number 6 in 2011.

Mission 6 requires teams to infiltrate an unknown building that is part of a "Nari Military Compound". Competitors are required to design a UAV capable of autonomous takeoff and undetected entry into the facility. Once inside the vehicle must follow Arabic signs leading it to the "Chief of Security’s" office where it will locate a small USB thumb drive that must be extracted from the building and replaced with a decoy. Finally, the mission must be completed in under 10 minutes.

http://iarc.angel-strike.com\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>The International Aerial robotics competition (IARC) is an annual event hosted by the Association for Unmanned Vehicle Systems International. Teams from around the world have come to display cutting edge UAV technology at the competition for the past 20 years. Michigan Autonomous Aerial Vehicles made its first appearance at the IARC in August of 2010 bringing along 13 members representing 5 engineering disciplines.</p>
<p>Due to the highly challenging nature of the IARC, in its 20 years of existence only 5 teams have managed to complete all mission objectives. MAAV is looking forward to becoming team number 6 in 2011.</p>
<p>Mission 6 requires teams to infiltrate an unknown building that is part of a "Nari Military Compound". Competitors are required to design a UAV capable of autonomous takeoff and undetected entry into the facility. Once inside the vehicle must follow Arabic signs leading it to the "Chief of Security’s" office where it will locate a small USB thumb drive that must be extracted from the building and replaced with a decoy. Finally, the mission must be completed in under 10 minutes.</p>
<p><a href="http://iarc.angel-strike.com">http://iarc.angel-strike.com</a></p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1318473094\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'b:0;\',
    \'path\' => array(
      \'pid\' => \'1\',
      \'source\' => \'node/2\',
      \'alias\' => \'pages/competition\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'The Competition\',
      \'mlid\' => 0,
      \'plid\' => \'0\',
      \'menu_name\' => \'menu-sidebar-nav\',
      \'weight\' => \'-50\',
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => \'0\',
      \'hidden\' => \'0\',
      \'has_children\' => \'0\',
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'1\',
    \'uid\' => \'1\',
    \'title\' => \'Welcome to MAAV\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'nid\' => \'1\',
    \'type\' => \'page\',
    \'language\' => \'und\',
    \'created\' => \'1318472865\',
    \'changed\' => \'1318535748\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'revision_timestamp\' => \'1318535748\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'The Michigan Autonomous Aerial Vehicles (MAAV) team is a student competition team at the University of Michigan founded in September 2009. The goal of the team is to enter and win the 2011 International Aerial Robotics Competition (IARC). The team consists of students ranging from freshman to graduate students with a few Ph.D. candidate advisors. The team is a highly interdisciplinary team with students from Aerospace Engineering, Computer Engineering, Electrical Engineering, Mechanical Engineering, and the Business School. The team is divided into sub-teams to delegate tasks vital to the project. These sub-teams include: Electrical Hardware, Navigation, Structures, Controls and Simulation, Imaging, Testing, and Business. Each of the members on the team is involved in at least two of the sub-teams.

At the end of the first year, MAAV successfully built two quadrotor vehicles capable of manual flight. Many of the autonomous aspects of the project made significant progress, but have not been implemented on the vehicle.\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>The Michigan Autonomous Aerial Vehicles (MAAV) team is a student competition team at the University of Michigan founded in September 2009. The goal of the team is to enter and win the 2011 International Aerial Robotics Competition (IARC). The team consists of students ranging from freshman to graduate students with a few Ph.D. candidate advisors. The team is a highly interdisciplinary team with students from Aerospace Engineering, Computer Engineering, Electrical Engineering, Mechanical Engineering, and the Business School. The team is divided into sub-teams to delegate tasks vital to the project. These sub-teams include: Electrical Hardware, Navigation, Structures, Controls and Simulation, Imaging, Testing, and Business. Each of the members on the team is involved in at least two of the sub-teams.</p>
<p>At the end of the first year, MAAV successfully built two quadrotor vehicles capable of manual flight. Many of the autonomous aspects of the project made significant progress, but have not been implemented on the vehicle.</p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1318472865\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'b:0;\',
    \'path\' => FALSE,
    \'menu\' => array(
      \'link_title\' => \'\',
      \'mlid\' => 0,
      \'plid\' => 0,
      \'menu_name\' => \'main-menu:0\',
      \'weight\' => 0,
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => 0,
      \'hidden\' => 0,
      \'has_children\' => 0,
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'3\',
    \'uid\' => \'1\',
    \'title\' => \'Contact\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'nid\' => \'3\',
    \'type\' => \'page\',
    \'language\' => \'und\',
    \'created\' => \'1318473204\',
    \'changed\' => \'1318535748\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'revision_timestamp\' => \'1318535748\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'General inquiries: 
Thomas Brady bradthom@umich.edu

Sponsorship Information: 
Daniel Ellis nydellis@umich.edu

Interested in Joining:
Daniel Ellis nydellis@umich.edu

Website Content: 
David Wilemski dtwilems@umich.edu\',
          \'summary\' => \'\',
          \'format\' => \'filtered_html\',
          \'safe_value\' => \'<p>General inquiries:<br />
Thomas Brady <a href="mailto:bradthom@umich.edu">bradthom@umich.edu</a></p>
<p>Sponsorship Information:<br />
Daniel Ellis <a href="mailto:nydellis@umich.edu">nydellis@umich.edu</a></p>
<p>Interested in Joining:<br />
Daniel Ellis <a href="mailto:nydellis@umich.edu">nydellis@umich.edu</a></p>
<p>Website Content:<br />
David Wilemski <a href="mailto:dtwilems@umich.edu">dtwilems@umich.edu</a></p>
\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1318473204\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'b:0;\',
    \'path\' => array(
      \'pid\' => \'2\',
      \'source\' => \'node/3\',
      \'alias\' => \'pages/contact\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'Contact\',
      \'mlid\' => 0,
      \'plid\' => \'0\',
      \'menu_name\' => \'menu-sidebar-nav\',
      \'weight\' => \'-47\',
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => \'0\',
      \'hidden\' => \'0\',
      \'has_children\' => \'0\',
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
    array(
    \'vid\' => \'4\',
    \'uid\' => \'1\',
    \'title\' => \'Sponsors\',
    \'log\' => \'\',
    \'status\' => \'1\',
    \'comment\' => \'1\',
    \'promote\' => \'0\',
    \'sticky\' => \'0\',
    \'nid\' => \'4\',
    \'type\' => \'page\',
    \'language\' => \'und\',
    \'created\' => \'1318473895\',
    \'changed\' => \'1318535748\',
    \'tnid\' => \'0\',
    \'translate\' => \'0\',
    \'revision_timestamp\' => \'1318535748\',
    \'revision_uid\' => \'1\',
    \'body\' => array(
      \'und\' => array(
        \'0\' => array(
          \'value\' => \'<p>
							Thank you to our sponsors for 2011 (listed below).  We truly appreciate your generous support.  MAAV extends a special thank you to Northrop Grumman Corporation, our title sponsor for 2010 and 2011.
						</p>
						
<a href="http://www.northropgrumman.com/"><div><img src="http://maav.engin.umich.edu/static/images/sponsors/ngc.jpg" /></a></div>

<a href="http://engin.umich.edu/"> <div><img src="http://maav.engin.umich.edu/static/images/sponsors/michiganengineering.jpg" /></a></div>

<a href="http://www.3dconnexion.com/"> <div><img src="http://maav.engin.umich.edu/static/images/sponsors/3dconnexion.jpg" /></a></div>

<a href="http://www.acmtucson.com/"> <div><img src="http://maav.engin.umich.edu/static/images/sponsors/acm.jpg" /></a></div>

<a href="http://aerospace.engin.umich.edu/"><div><h3>UM Aerospace Department:</h3></div></a>

<a href="http://www.robotshop.com/"><div><img src="http://maav.engin.umich.edu/static/images/sponsors/robotshop.gif" /></div></a>

<a href="http://www.microstrain.com/"><div><img src="http://maav.engin.umich.edu/static/images/sponsors/microstrain3.png" /></div></a>

						</p>

<h3>A special thanks to:</h3>
<p>
<ul>
	<li>Professor Leslie Olsen</li>
	<li>Tommy Kenville</li>
	<li>Eric Icard</li>
	<li>John and Barb Scheuller</li>
	<li>Universidad T&eacute;cnica Federico Santa Mar&iacute;a</li>
	<li>South Dakota School of Mines and Technology</li>
	<li>Mark and Diane Ellis</li>
	<li>Tom and Jo Brady</li>
	<li>Brad and Darla Olson</li>
</ul>
</p>
\',
          \'summary\' => \'\',
          \'format\' => \'full_html\',
          \'safe_value\' => \'<p>
							Thank you to our sponsors for 2011 (listed below).  We truly appreciate your generous support.  MAAV extends a special thank you to Northrop Grumman Corporation, our title sponsor for 2010 and 2011.
						</p>
<p><a href="http://www.northropgrumman.com/">
<div><img src="http://maav.engin.umich.edu/static/images/sponsors/ngc.jpg" /></div>
<p><a href="http://engin.umich.edu/">
<div><img src="http://maav.engin.umich.edu/static/images/sponsors/michiganengineering.jpg" /></div>
<p><a href="http://www.3dconnexion.com/">
<div><img src="http://maav.engin.umich.edu/static/images/sponsors/3dconnexion.jpg" /></div>
<p><a href="http://www.acmtucson.com/">
<div><img src="http://maav.engin.umich.edu/static/images/sponsors/acm.jpg" /></div>
<p><a href="http://aerospace.engin.umich.edu/">
<div>
<h3>UM Aerospace Department:</h3>
</div>
<p></p></a></p>
<p><a href="http://www.robotshop.com/">
<div><img src="http://maav.engin.umich.edu/static/images/sponsors/robotshop.gif" /></div>
<p></p></a></p>
<p><a href="http://www.microstrain.com/">
<div><img src="http://maav.engin.umich.edu/static/images/sponsors/microstrain3.png" /></div>
<p></p></a></p>
<h3>A special thanks to:</h3>
<p></p><ul><li>Professor Leslie Olsen</li>
<li>Tommy Kenville</li>
<li>Eric Icard</li>
<li>John and Barb Scheuller</li>
<li>Universidad Técnica Federico Santa María</li>
<li>South Dakota School of Mines and Technology</li>
<li>Mark and Diane Ellis</li>
<li>Tom and Jo Brady</li>
<li>Brad and Darla Olson</li>
</ul></a></p>
</a></p></a></p></a></p>\',
          \'safe_summary\' => \'\',
        ),
      ),
    ),
    \'rdf_mapping\' => array(
      \'rdftype\' => array(
        \'0\' => \'foaf:Document\',
      ),
      \'title\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:title\',
        ),
      ),
      \'created\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:date\',
          \'1\' => \'dc:created\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'changed\' => array(
        \'predicates\' => array(
          \'0\' => \'dc:modified\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
      \'body\' => array(
        \'predicates\' => array(
          \'0\' => \'content:encoded\',
        ),
      ),
      \'uid\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:has_creator\',
        ),
        \'type\' => \'rel\',
      ),
      \'name\' => array(
        \'predicates\' => array(
          \'0\' => \'foaf:name\',
        ),
      ),
      \'comment_count\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:num_replies\',
        ),
        \'datatype\' => \'xsd:integer\',
      ),
      \'last_activity\' => array(
        \'predicates\' => array(
          \'0\' => \'sioc:last_activity_date\',
        ),
        \'datatype\' => \'xsd:dateTime\',
        \'callback\' => \'date_iso8601\',
      ),
    ),
    \'cid\' => \'0\',
    \'last_comment_timestamp\' => \'1318473895\',
    \'last_comment_name\' => NULL,
    \'last_comment_uid\' => \'1\',
    \'comment_count\' => \'0\',
    \'name\' => \'admin\',
    \'picture\' => \'0\',
    \'data\' => \'b:0;\',
    \'path\' => array(
      \'pid\' => \'3\',
      \'source\' => \'node/4\',
      \'alias\' => \'pages/sponsors\',
      \'language\' => \'und\',
    ),
    \'menu\' => array(
      \'link_title\' => \'Sponsors\',
      \'mlid\' => 0,
      \'plid\' => \'0\',
      \'menu_name\' => \'menu-sidebar-nav\',
      \'weight\' => \'-48\',
      \'options\' => array(),
      \'module\' => \'menu\',
      \'expanded\' => \'0\',
      \'hidden\' => \'0\',
      \'has_children\' => \'0\',
      \'customized\' => 0,
      \'parent_depth_limit\' => 8,
      \'description\' => \'\',
      \'enabled\' => 1,
    ),
    \'node_export_drupal_version\' => \'7\',
    \'#_export_node_encode_object\' => \'1\',
  ),
)',
);
  return $node_export;
}
