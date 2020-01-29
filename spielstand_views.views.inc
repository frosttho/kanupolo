<?php

/**
 * @file
 * Contains spielstand_views\spielstand_views.views.inc..
 * Provide a custom views field data that isn't tied to any other module. */


/**
* Implements hook_views_data().
*/
function spielstand_views_views_data() {

    $data['views']['table']['group'] = t('Custom Global');
    $data['views']['table']['join'] = [
      // #global is a special flag which allows a table to appear all the time.
      '#global' => [],
    ];

    $data['views']['spielstand1views_field'] = [
        'title' => t('Spielstand Mannschaft 1'),
        'help' => t('Shows whether the current goal is from team 1 or not'),
        'field' => [
            'id' => 'spielstand1views_field',
        ],
    ];
    $data['views']['spielstand2views_field'] = [
        'title' => t('Spielstand Mannschaft 2'),
        'help' => t('Shows whether the current goal is from team 2 or not'),
        'field' => [
            'id' => 'spielstand2views_field',
        ],
    ];
    return $data;
}
