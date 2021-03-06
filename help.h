#pragma once
#ifndef HELP_H
#define HELP_H

#ifdef _WIN32
#include "Include/glew.h"
#include "Include/freeglut.h"
#elif __linux__
#include "GL/glew.h"
#include "GL/glut.h"
#elif __APPLE__
#include "Include/glew.h"
#include "Include/freeglut.h"
#endif

// *** Help-Module, Flugplatz

#ifdef __EXPORT_HELP

const char* spalte1[] =
{
	"Maus:",
	"linke Taste      Kamerabewegung",
	"mittlere Taste   Zoom",
	"rechte Taste     Kontextmen�",
	"",
	"Tastatur:",
	"l,L              Licht global (An/Aus)",
	"t,T              Texturierung (An/Aus)",
	"b,B              Blending (An/Aus)",
	"f,F              Framerate (An/Aus)",
	"h,H,F1           Hilfe (An/Aus)",
	"w,W              WireFrame (An/Aus)",
	"ESC              Beenden",

	NULL
};
const char* spalte2[] =
{	"Helikoptersteuerung:",
	"Shift             Steigen",
	"Steuerung         Sinken",
	"Pfeiltaste Oben   nach vorne fliegen",
	"Pfeiltaste Unten  nach hinten fliegen",
	"Pfeiltaste Links  nach links drehen",
	"Pfeiltaste Rechts nach rechts drehen",
	

	NULL
};
#endif


#ifndef	M_PI				// Pi
#define M_PI 3.14159265358979323846
#endif
#ifndef SGN					// Vorzeichen bestimmen
#define SGN(y) (((y) < 0) ? -1 : ((y) > 0))
#endif
#ifndef MIN					// Minimum bestimmen
#define MIN(a,b) ((a) > (b))? (b) : (a)
#endif
#ifndef MAX					// Maximum bestimmen
#define MAX(a,b) ((a) > (b))? (a) : (b)
#endif


class cg_help
{
public:
	void  toggle();
	void  toggleFps();
	void  setTitle(char *t);
	void  setWireframe(bool wf);
	bool  isWireframe();
	void  toggleKoordsystem();
	bool  isKoordsystem();
	float getFps();
	double getDelta();
	void  draw();
	void  drawKoordsystem(GLfloat xmin, GLfloat xmax, GLfloat ymin, GLfloat ymax, GLfloat zmin, GLfloat zmax);

private:
	static bool  showhelp, showfps, wireframe, koordsystem;
	static int   frames;
	static float fps, bg_size, shadow;
	static const char  *title;
	void drawBackground();
	void printText(float x, float y, const char *text, void *font = GLUT_BITMAP_HELVETICA_18);
	void printText(float x, float y, const char *text, float r, float g, float b, void *font = GLUT_BITMAP_HELVETICA_18);
	void printTextShadow(float x, float y, const char *text, float r, float g, float b, void *font = GLUT_BITMAP_HELVETICA_18);
	void printFps(float x, float y, void *font = GLUT_BITMAP_HELVETICA_18);
};

#endif	// HELP_H
