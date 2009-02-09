/**************************************************************************
* Copyright (C) 2008 thierry lorthiois (lorthiois@bbsoft.fr)
*
* Clock with fonctionnal data (timeval, precision) and drawing data (area, font, ...).
* Each panel use his own drawing data.
*
**************************************************************************/

#ifndef CLOCK_H
#define CLOCK_H

#include <sys/time.h>
#include "common.h"
#include "area.h"


typedef struct Clock {
   // always start with area
   Area area;

   config_color font;
   int time1_posy;
   int time2_posy;
} Clock;


extern char *time1_format;
extern char *time2_format;
extern struct timeval time_clock;
extern int  time_precision;
extern PangoFontDescription *time1_font_desc;
extern PangoFontDescription *time2_font_desc;


// initialize clock : y position, precision, ...
void init_clock(Clock *clock, Area *parent);

void draw_foreground_clock (void *obj, cairo_t *c, int active);


#endif