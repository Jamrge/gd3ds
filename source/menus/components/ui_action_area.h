#pragma once
#include "ui_element.h"
UIElement ui_create_action_area(
    int x, int y, float w, float h, 
    UIActionFn action,
    void *action_data,
    char (*tag)[TAG_LENGTH]
);