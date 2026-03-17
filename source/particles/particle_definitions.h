#pragma once

#include <3ds.h>

typedef enum {
    TEXTURE_SQUARE_PNG,
    TEXTURE_CIRCLE_PNG,
} TextureFileName;

// Billion properties
typedef struct {
    int angle;
    int angleVariance;
    int blendFuncDestination;
    int blendFuncSource;
    float duration;
    float emitterType;
    float finishColorAlpha;
    float finishColorBlue;
    float finishColorGreen;
    float finishColorRed;
    float finishColorVarianceAlpha;
    float finishColorVarianceBlue;
    float finishColorVarianceGreen;
    float finishColorVarianceRed;
    float finishParticleSize;
    float finishParticleSizeVariance;
    float gravityx;
    int gravityy;
    int maxParticles;
    int maxRadius;
    float maxRadiusVariance;
    float minRadius;
    float particleLifespan;
    float particleLifespanVariance;
    float radialAccelVariance;
    float radialAcceleration;
    float rotatePerSecond;
    float rotatePerSecondVariance;
    float rotationEnd;
    float rotationEndVariance;
    float rotationStart;
    float rotationStartVariance;
    int sourcePositionVariancex;
    int sourcePositionVariancey;
    float sourcePositionx;
    float sourcePositiony;
    int speed;
    int speedVariance;
    int startColorAlpha;
    float startColorBlue;
    float startColorGreen;
    float startColorRed;
    int startColorVarianceAlpha;
    float startColorVarianceBlue;
    float startColorVarianceGreen;
    float startColorVarianceRed;
    int startParticleSize;
    int startParticleSizeVariance;
    float tangentialAccelVariance;
    float tangentialAcceleration;
    TextureFileName textureFileName;
} ParticleDefinition;

extern ParticleDefinition drag_effect;