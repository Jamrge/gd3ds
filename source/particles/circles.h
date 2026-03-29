#pragma once
#include <3ds.h>

#define MAX_USE_EFFECTS 32

typedef struct {
    float duration;

    float start_rad;
    float end_rad;

    float colorR;
    float colorG;
    float colorB;

    float start_opacity;
    float end_opacity;

    bool trifading;
    bool hollow;
} UseEffectDefinition;

typedef struct {
    float x;
    float y;

    float elapsed;
    float opacity;

    float rad;
    
    UseEffectDefinition def;

    bool active;
} UseEffect;

extern const UseEffectDefinition pad_use_effect;
extern const UseEffectDefinition orb_use_effect;
extern const UseEffectDefinition portal_use_effect;

UseEffect *add_use_effect(float x, float y, const UseEffectDefinition *def);
void update_use_effects(float delta);
void draw_use_effects();
