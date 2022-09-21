#include "gl/glut.h"
#include <math.h>

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow
	("OpenGL");
	glutDisplayFunc(display_circle);
	glutMainLoop();
	return 0;
}

void display_circle() { 
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 1.0f);

	double rad = 1;
	glBegin(GL_LINE_STRIP);

	for (int i = 0; i < 360; i++) { 
		double angle, x, y;
		angle = i * 3.141592 / 180;
		x = rad * cos(angle);
		y = rad * sin(angle);
		glVertex2f(x, y); 
	}
	glEnd();
	glFinish(); 
}

