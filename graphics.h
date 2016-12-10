// Header file for graphics
// dvan2, Oct 2016

#ifndef __GRAPHICS__
#define __GRAPHICS__

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

#include "vector2d.h"
#include "charge.h"

#define SMALL_NUM 0.0000001
#define SCALE 180.0 // (m)
#define PREFERRED_WIDTH 1024
#define PREFERRED_HEIGHT 768
#define MAX_NUM_SOURCE 4
#define MAX_NUM_TEST 10

// Graphics variables
int main_window;
double aspect_ratio, window_width, window_height;

// Simulation variables
Charge list_of_source_charges[MAX_NUM_SOURCE];
Charge list_of_test_charges[MAX_NUM_TEST];
unsigned short test_charge_index;

// Function prototypes
void reshape_window (int width, int height);
void draw_window (void);
void update_charge_state (void);
void mouse_button (int button, int state, int x, int y);
vector2d screen_to_space (double x, double y);
void glut_key (unsigned char k, int x, int y);
void initialise_charges (int scenario);

#endif
