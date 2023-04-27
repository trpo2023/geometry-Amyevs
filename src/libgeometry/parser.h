#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Point {
    double x;
    double y;
} point;

float percircle(float rad);
float areacircle(float rad);
void Check(char* string);
void parse_start();