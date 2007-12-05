/* ASE - Allegro Sprite Editor
 * Copyright (C) 2001-2005, 2007  David A. Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef WIDGETS_CURVEDIT_H
#define WIDGETS_CURVEDIT_H

#include "jinete/jbase.h"

/* TODO use some JI_SIGNAL_USER */
#define SIGNAL_CURVE_EDITOR_CHANGE   0x10004

struct Curve;

JWidget curve_editor_new (struct Curve *curve, int x1, int y1, int x2, int y2);
int curve_editor_type (void);

struct Curve *curve_editor_get_curve (JWidget curve_editor);

#endif /* WIDGETS_CURVEDIT_H */
