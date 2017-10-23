[Stanford Magazine](https://github.com/SU-SWS/stanford_magazine)
=======
##### Version: 7.x-1.0-beta1

Maintainers: [boznik](https://github.com/boznik), [cjwest](https://github.com/cjwest)

[Changelog.txt](CHANGELOG.txt)

The Stanford Magazine feature provides functionality for a digital (online) magazine. 
When you enable the [Stanford Magazine](https://github.com/SU-SWS/stanford_magazine)
module, you will get the Stanford Magazine Article content type and related taxonomies.

***Taxonomies*** 
- Series
- Topic

***Image Handling***

Image aspect ratios across structured content for the Magazine content types will be:
850 x 400. That translates to:
- Full width: 3200x1505 (Full Width Banner Tall)
- Page width: 850x400   (banner (850x400))
- Two column: 570x270 (6-col-banner-short)

***Video***

On a magazine article, you have an option to upload a video in lieu of the featured image. 
If there is a video, it will show only on the node display page.

***URLs***
- *magazine/article/\<article-title\>* - Displays a magazine article.

Sub Modules
---
**[Stanford Magazine Article Views](https://github.com/SU-SWS/stanford_magazine/stanford_mag_article_views/)**
This module provides views for Magazine Articles including taxonomy related views.

***URLs***
- *magazine/all* and *magazine* - Displays all magazine articles sorted by date, newest to oldest.
- *magazine/\<topic\>* - Displays magazine articles related to this topic sorted by date, newest to oldest.
- *magazine/\<series\>* - Displays magazine articles related to this series sorted by date, newest to oldest.
- *magazine/\<eyebrow\>* - Displays magazine articles related to this eyebrow sorted by date, newest to oldest.
- *magazine/\<department\>* - Displays magazine articles related to this department sorted by date, newest to oldest.

**[Stanford Magazine Issue](https://github.com/SU-SWS/stanford_magazine/stanford_mag_issue/)**
This module provides the Magazine Issue content type. 
This is a "container" content type for Magazine Articles.
- There are five articles per issue. These articles are entity referenced by the issue.

***Layouts***
Magazine issues have a variety of layouts. 
- *field_s_mag_issue_layout* This field identifies the layout for an issue
- *Magazine Issue Layout* This taxonomy defines all issue layouts. 



***URLs***
- *magazine/issue/\<number\>* - Displays a single magazine issue.
 

**[Stanford Magazine Issue Views](https://github.com/SU-SWS/stanford_magazine/stanford_mag_issue_views/)**
This module provides views for Magazine Issues. 

***URLs***
- *magazine/issue* and *magazine/issue/all* - Displays all the magazines sorted by date

Installation
---

Install this module like any other module. [See Drupal Documentation](https://drupal.org/documentation/install/modules-themes/modules-7)

Configuration
---

Nothing special needed.

Troubleshooting
---

If you are experiencing issues with this module try reverting the feature first. If you are still experiencing issues try posting an issue on the GitHub issues page.

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)
