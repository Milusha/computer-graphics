

#include <GL/glut.h>
#include<GL/gl.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define PI 3.141592653589

int SCENE_ID;

//first frame
void drawText1(float x, float y, float r, float g, float b, const char* string)
{
	int j = strlen(string);
	glColor3f(r, g, b);
	glRasterPos2f(x, y);
	for (int i = 0; i < j; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
	}
}
//first frame end

//second frame
void drawCircle(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b, GLfloat sx, GLfloat sy, GLfloat radius) {
	glPushMatrix();
	glTranslatef(x, y, 0);
	glScalef(sx, sy, 0);
	glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
	for (GLfloat i = 0; i < 360; i += 5)
		glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
	glEnd();
	glPopMatrix();
}
void finalscene2()
{
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.8);
	glVertex2f(0.0, 0.8);
	glVertex2f(0.0, -0.5);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.6, 0.5);
	glVertex2f(0.6, -0.5);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0.6, -0.5);
	glVertex2f(0.6, 0.8);
	glVertex2f(1.1, 0.8);
	glVertex2f(1.1, -0.5);
	glEnd();
	glColor4f(1, 1, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.0, -0.5);
	glVertex2f(0.0, 0.8);
	glEnd();
	glColor4f(1, 1, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.6, 0.8);
	glVertex2f(0.6, -0.5);
	glEnd();
	glColor4f(1, 1, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.8);
	glEnd();
	glColor4f(1, 1, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(1.1, -0.5);
	glVertex2f(1.1, 0.8);
	glEnd();
	glColor4f(1, 1, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.5, 0.8);
	glVertex2f(0.0, 0.8);
	glEnd();
	glColor4f(1, 1, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.6, 0.8);
	glVertex2f(1.1, 0.8);
	glEnd();
	glColor4f(1, 1, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.0, 0.5);
	glVertex2f(0.6, 0.5);
	glEnd();
	glColor4f(0, 0, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(0.2, -0.5);
	glVertex2f(0.2, 0.0);
	glVertex2f(0.4, 0.0);
	glVertex2f(0.4, -0.5);
	glEnd();
	glColor4f(1, 1, 0, 1);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.0, 0.3);
	glVertex2f(0.6, 0.3);
	glEnd();
	glColor4f(0, 0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.2, -0.5);
	glVertex2f(0.2, 0.0);
	glVertex2f(0.4, 0.0);
	glVertex2f(0.4, -0.5);
	glEnd();
	glColor3f(0.4f, 0.4f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.5, -1.5);
	glVertex2f(-1.5, -0.5);
	glVertex2f(1.1, -0.5);
	glVertex2f(1.1, -1.5);
	glEnd();
	glColor4f(0, 1, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(-1.5, -0.3);
	glVertex2f(-1.5, -0.5);
	glVertex2f(1.1, -0.5);
	glVertex2f(1.1, -0.3);
	glEnd();
	drawText1(0.2, 0.4,
		0.0, 0.0, 0.0,
		"COLLEGE");
	drawCircle(-0.2, 0,
		10, 5, 10,
		1, 1,
		0.05);
	drawCircle(-0.4, 0,
		10, 5, 10,
		1, 1,
		0.05);
	drawCircle(0.8, 0,
		10, 5, 10,
		1, 1,
		0.05);
	drawCircle(0.9, 0,
		10, 5, 10,
		1, 1,
		0.05);
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(-0.2, -0.3);
	glVertex2f(-0.2, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.4, -0.3);
	glVertex2f(-0.4, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.8, -0.3);
	glVertex2f(0.8, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.9, -0.3);
	glVertex2f(0.9, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.15, -0.1);
	glVertex2f(-0.25, -0.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.5, -0.1);
	glVertex2f(-0.3, -0.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.7, -0.1);
	glVertex2f(1.0, -0.1);
	glEnd();
	drawCircle(0.4, -0.4,
		232, 190, 123,
		1, 1,
		0.09);
	drawCircle(0.0, -0.4,
		232, 190, 123,
		1, 1,
		0.09);
	//HANDS
	glBegin(GL_LINES);
	glVertex2f(0.3, -0.6);
	glVertex2f(0.5, -0.6);
	glEnd();
	//LEFT LEG
	glBegin(GL_LINES);
	glVertex2f(-0.1, -0.6);
	glVertex2f(0.1, -0.6);
	glEnd();
	//CENTRE POINT
	glBegin(GL_LINES);
	glVertex2f(0.4, -0.4);
	glVertex2f(0.4, -0.8);
	glEnd();
	//RIGHT LEG
	glBegin(GL_LINES);
	glVertex2f(0.0, -0.4);
	glVertex2f(0.0, -0.8);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2f(0.4, -0.8);
	glVertex2f(0.3, -0.9);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(0.4, -0.8);
	glVertex2f(0.5, -0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, -0.8);
	glVertex2f(-0.1, -0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, -0.8);
	glVertex2f(0.1, -0.9);
	glEnd();
	drawCircle(0.7, -0.3,
		200, 200, 200,
		1, 1,
		0.15);
	drawCircle(-0.4, -0.3,
		200, 200, 200,
		1, 1,
		0.20);
	drawText1(-0.5, -0.3,
		0.0, 0.0, 0.0,
		"LET'S GO");
	drawText1(-0.5, -0.4,
		0.0, 0.0, 0.0,
		"PARTY?");
	drawText1(0.6, -0.3,
		0.0, 0.0, 0.0,
		"YAAS!");

	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(-1.0, 0.85);
	glVertex2f(-1.0, 1.2);
	glVertex2f(0.0, 0.85);
	glVertex2f(0.0, 1.2);
	glEnd();
	drawText1(-1.0, 0.9,
		0.0, 0.0, 0.0,
		"SCENE: Two girls plan to attend a party...");

}
//second frame end

/*third frame
int frameNumber = 0;
void drawDisk(double radius) {
	int d;
	glBegin(GL_POLYGON);
	for (d = 0; d < 32; d++) {
		double angle = 2 * PI / 32 * d;
		glVertex2d(radius * cos(angle), radius * sin(angle));
	}
	glEnd();
}
void drawWheel() {
	int i;
	glColor3f(0, 0, 0);
	drawDisk(1);
	glColor3f(0.75f, 0.75f, 0.75f);
	drawDisk(0.8);
	glColor3f(0, 0, 0);
	drawDisk(0.2);
	glRotatef(frameNumber * 20, 0, 0, 1);
	glBegin(GL_LINES);
	for (i = 0; i < 15; i++) {
		glVertex2f(0, 0);
		glVertex2d(cos(i * 2 * PI / 15), sin(i * 2 * PI / 15));
	}
	glEnd();
}
void drawCart() {
	glPushMatrix();
	glTranslatef(-1.5f, -0.1f, 0);
	glScalef(0.8f, 0.8f, 1);
	drawWheel();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5f, -0.1f, 0);
	glScalef(0.8f, 0.8f, 1);
	drawWheel();
	glPopMatrix();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(-2.5f, 0);
	glVertex2f(2.5f, 0);
	glVertex2f(2.5f, 2);
	glVertex2f(-2.5f, 2);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(-2.5f, 2);
	glVertex2f(-2.0, 3.2);
	glVertex2f(0.8f, 3.2);
	glVertex2f(1.5f, 2);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-2.5f, 0);
	glVertex2f(-2.5f, 2);
	glVertex2f(-2.0, 3.2);
	glVertex2f(0.8f, 3.2);
	glVertex2f(1.5f, 2);
	glVertex2f(2.5f, 2);
	glVertex2f(2.5f, 0);
	glEnd();

}
void drawSun() {
	int i;
	glColor3f(1, 1, 0);
	for (i = 0; i < 13; i++) { // Draw 13 rays, with different rotations.
		glRotatef(360 / 13, 0, 0, 1); // Note that the rotations accumulate!
		glBegin(GL_LINES);
		glVertex2f(0, 0);
		glVertex2f(0.75f, 0);
		glEnd();
	}
	drawDisk(0.5);
	glColor3f(0, 0, 0);
}
void drawWindmill() {
	int i;
	glColor3f(0.8f, 0.8f, 0.9f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, 0);
	glVertex2f(0.05f, 0);
	glVertex2f(0.05f, 3);
	glVertex2f(-0.05f, 3);
	glEnd();
	glTranslatef(0, 3, 0);
	glRotated(frameNumber * (180.0 / 46), 0, 0, 1);
	glColor3f(0.4f, 0.4f, 0.8f);
	for (i = 0; i < 3; i++) {
		glRotated(120, 0, 0, 1);  // Note: These rotations accumulate.
		glBegin(GL_POLYGON);
		glVertex2f(0, 0);
		glVertex2f(0.5f, 0.1f);
		glVertex2f(1.5f, 0);
		glVertex2f(0.5f, -0.1f);
		glEnd();
	}
}
*/
//third frame end

//fourth frame
void drawSemiCircle(GLfloat tx, GLfloat ty, GLfloat sx, GLfloat sy, GLfloat r, GLfloat g, GLfloat b, GLfloat radius, GLfloat start_angle, GLfloat end_angle) {
	glPushMatrix();
	glTranslatef(tx, ty, 0);
	glScalef(sx, sy, 0);
	glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
	for (GLfloat i = start_angle; i < end_angle; i += 5)
		glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
	glEnd();
	glPopMatrix();
}
void home()
{
	//SKY
	glColor3f(0.3,0.7,0.9);
	glBegin(GL_POLYGON);
	glVertex2f(-500, 200);
	glVertex2f(1500, 200);
	glVertex2f(1500, 1500);
	glVertex2f(-500, 1500);
	glEnd();
	//tree
	glColor3f(1,0.7,0);
	glBegin(GL_POLYGON);
	glVertex2f(935, 350);
	glVertex2f(935, 100);
	glVertex2f(966, 100);
	glVertex2f(965, 350);
	glEnd();
	//tree upper part
	drawCircle(950, 350,
		100, 250, 0,
		1, 1,
		75);
	//Roof
	glColor3f(0.3, 0.5, 0.8);
	glBegin(GL_POLYGON);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	glEnd();
	// Top of Front Wall
	glColor3f(0.1, 0.5, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2i(200, 500);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glEnd();
	// Front Wall
	glColor3f(0.7, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glVertex2i(300, 100);
	glVertex2i(100, 100);
	glEnd();
	// Front Door
	glColor3f(0.7, 0.2, 0.9);
	glBegin(GL_POLYGON);
	glVertex2i(150, 250);
	glVertex2i(250, 250);
	glVertex2i(250, 100);
	glVertex2i(150, 100);
	glEnd();
	// Front Door Lock
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(170, 170);
	glEnd();
	//side Wall
	glColor3f(0.1, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(700, 350);
	glVertex2i(700, 100);
	glVertex2i(300, 100);
	glEnd();
	// window one
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(330, 320);
	glVertex2i(450, 320);
	glVertex2i(450, 230);
	glVertex2i(330, 230);
	glEnd();
	// line of window one
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(390, 320);
	glVertex2i(390, 230);
	glVertex2i(330, 273);
	glVertex2i(450, 273);
	glEnd();
	// window two
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(530, 320);
	glVertex2i(650, 320);
	glVertex2i(650, 230);
	glVertex2i(530, 230);
	glEnd();
	// lines of window two
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(590, 320);
	glVertex2i(590, 230);
	glVertex2i(530, 273);
	glVertex2i(650, 273);
	glEnd();
	// Entrance Path
	glColor3f(0.3, 0.5, 0.7);
	glLineWidth(3);
	glBegin(GL_POLYGON);
	glVertex2i(150, 100);
	glVertex2i(250, 100);
	glVertex2i(210, 0);
	glVertex2i(40, 0);
	glEnd();
	// Process all OpenGL routine s as quickly as possible

	glTranslatef(-10.0f, -10.0f, 0.0);

	drawText1(120, 340,
		1.0, 1.0, 1.0,
		"B'DAY PARTY!!");
	//sun
	drawCircle(900, 560,
		250, 250, 0, 
		1, 1,
		55);
	//balloons
	drawCircle(800, 350,
		250, 0, 0, 
		1, 1,
		40);
	drawCircle(720, 350,
		0, 0, 250, 
		1, 1,
		40);
	drawCircle(760, 420,
		250, 100, 250,
		1, 1,
		40);
	glColor3f(0, 0, 0);
	//balloon strings
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(760, 400);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(730, 330);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(800, 330);
	glEnd();
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(760, 200);
	glEnd();
	//clouds 
	drawCircle(600, 500,
		250, 250, 250, 
		1, 1,
		55);
	drawCircle(670, 490,
		250, 250, 250, 
		1, 1,
		40);
	drawCircle(530, 490,
		250,250,250, 
		1, 1,
		40);
	//clouds set 2
	drawCircle(300, 580,
		250, 250, 250, 
		1, 1,
		55);
	drawCircle(370, 570,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	drawCircle(230, 570,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
//stick figure heads
	drawCircle(300, 230,
		232, 190, 123, // Lighter Skin
		1, 1,
		25);
	drawCircle(380, 230,
		232, 190, 123, // Lighter Skin
		1, 1,
		25);
	//stick figure body
	glBegin(GL_LINES);
	glVertex2i(300, 230);
	glVertex2i(300, 130);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 230);
	glVertex2i(380, 130);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(380, 130);
	glVertex2i(360, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 130);
	glVertex2i(400, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(380, 190);
	glVertex2i(360, 170);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 190);
	glVertex2i(400, 200);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(300, 130);
	glVertex2i(280, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(300, 130);
	glVertex2i(320, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(300, 200);
	glVertex2i(280, 165);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(300, 200);
	glVertex2i(320, 165);
	glEnd();
	drawCircle(220, 270,
		200, 200, 200, // Lighter Skin
		1, 1,
		50);
	drawCircle(470, 250,
		200, 200, 200, // Lighter Skin
		1, 1,
		50);
	//TEXT BUBBLE SMALL RIGHT
	drawCircle(420, 218,
		200, 200, 200, // Lighter Skin
		1, 1,
		9);
	//TEXT BUBBLE SMALL LEFT
	drawCircle(265, 218,
		200, 200, 200, // Lighter Skin
		1, 1,
		9);
	drawText1(210, 280,
		0.0, 0.0, 0.0,
		"Hey! ");
	drawText1(180, 250,
		0.0, 0.0, 0.0,
		"Long time");
	drawText1(430, 255,
		0.0, 0.0, 0.0,
		"Oh Heyy!");
	drawText1(435, 230,
		0.0, 0.0, 0.0,
		"How are ");
	drawText1(450, 210,
		0.0, 0.0, 0.0,
		"you? ");
	drawCircle(600, 230,
		200, 150, 120, // Lighter Skin
		1, 1,
		25);
	drawCircle(700, 230,
		200, 150, 120, // Lighter Skin
		1, 1,
		25);

	glBegin(GL_LINES);
	glVertex2i(600, 230);
	glVertex2i(600, 130);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 230);
	glVertex2i(700, 130);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(700, 130);
	glVertex2i(720, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 130);
	glVertex2i(680, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(700, 200);
	glVertex2i(680, 165);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 200);
	glVertex2i(720, 165);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(600, 130);
	glVertex2i(580, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(600, 130);
	glVertex2i(620, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(600, 200);
	glVertex2i(580, 165);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(600, 200);
	glVertex2i(620, 165);
	glEnd();
}
//fourth frame end

//fifth frame
void home1()
{
	//SKY
	glColor3f(0.3, 0.7, 0.9);
	glBegin(GL_POLYGON);
	glVertex2f(-500, 200);
	glVertex2f(1500, 200);
	glVertex2f(1500, 1500);
	glVertex2f(-500, 1500);
	glEnd();
	
	//tree
	glColor3f(1, 0.7, 0);
	glBegin(GL_POLYGON);
	glVertex2f(935, 350);
	glVertex2f(935, 100);
	glVertex2f(966, 100);
	glVertex2f(965, 350);
	glEnd();
	//tree upper part
	drawCircle(950, 350,
		100, 250, 0,
		1, 1,
		75);
	//Roof
	glColor3f(0.3, 0.5, 0.8);
	glBegin(GL_POLYGON);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	glEnd();
	// Top of Front Wall
	glColor3f(0.1, 0.5, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2i(200, 500);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glEnd();
	// Front Wall
	glColor3f(0.7, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glVertex2i(300, 100);
	glVertex2i(100, 100);
	glEnd();
	// Front Door
	glColor3f(0.7, 0.2, 0.9);
	glBegin(GL_POLYGON);
	glVertex2i(150, 250);
	glVertex2i(250, 250);
	glVertex2i(250, 100);
	glVertex2i(150, 100);
	glEnd();
	// Front Door Lock
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(170, 170);
	glEnd();
	//side Wall
	glColor3f(0.1, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(700, 350);
	glVertex2i(700, 100);
	glVertex2i(300, 100);
	glEnd();
	// window one
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(330, 320);
	glVertex2i(450, 320);
	glVertex2i(450, 230);
	glVertex2i(330, 230);
	glEnd();
	// line of window one
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(390, 320);
	glVertex2i(390, 230);
	glVertex2i(330, 273);
	glVertex2i(450, 273);
	glEnd();
	// window two
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(530, 320);
	glVertex2i(650, 320);
	glVertex2i(650, 230);
	glVertex2i(530, 230);
	glEnd();
	// lines of window two
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(590, 320);
	glVertex2i(590, 230);
	glVertex2i(530, 273);
	glVertex2i(650, 273);
	glEnd();
	// Entrance Path
	glColor3f(0.3, 0.5, 0.7);
	glLineWidth(3);
	glBegin(GL_POLYGON);
	glVertex2i(150, 100);
	glVertex2i(250, 100);
	glVertex2i(210, 0);
	glVertex2i(40, 0);
	glEnd();
	// Process all OpenGL routine s as quickly as possible

	glTranslatef(-10.0f, -10.0f, 0.0);

	drawText1(120, 340,
		1.0, 1.0, 1.0,
		"B'DAY PARTY!!");
	//sun
	drawCircle(900, 560,
		250, 250, 0, // Lighter Skin
		1, 1,
		55);
	//clouds
	drawCircle(700, 500,
		250, 250, 250, // Lighter Skin
		1, 1,
		55);
	drawCircle(770, 490,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	drawCircle(630, 490,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	//clouds set 2
	drawCircle(400, 580,
		250, 250, 250,
		1, 1,
		55);
	drawCircle(470, 570,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	drawCircle(330, 570,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	//balloons
	drawCircle(800, 350,
		250, 0, 0, // Lighter Skin
		1, 1,
		40);
	drawCircle(720, 350,
		0, 0, 250, // Lighter Skin
		1, 1,
		40);
	drawCircle(760, 420,
		250, 100, 250, // Lighter Skin
		1, 1,
		40);
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(760, 400);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(730, 330);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(800, 330);
	glEnd();
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(760, 200);
	glEnd();

	drawCircle(300, 230,
		232, 190, 123, // Lighter Skin
		1, 1,
		25);
	drawCircle(380, 230,
		232, 190, 123, // Lighter Skin
		1, 1,
		25);
	glBegin(GL_LINES);
	glVertex2i(300, 230);
	glVertex2i(300, 130);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 230);
	glVertex2i(380, 130);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(380, 130);
	glVertex2i(360, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 130);
	glVertex2i(400, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(380, 190);
	glVertex2i(360, 170);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 190);
	glVertex2i(400, 200);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(300, 130);
	glVertex2i(280, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(300, 130);
	glVertex2i(320, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(300, 200);
	glVertex2i(280, 165);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(300, 200);
	glVertex2i(320, 165);
	glEnd();
	//CLOUD BUBBLE
	drawCircle(220, 270,
		200, 200, 200, // Lighter Skin
		1, 1,
		50);
	//CLOUD BUBBLE
	drawCircle(470, 250,
		200, 200, 200, // Lighter Skin
		1, 1,
		50);
	//TEXT BUBBLE SMALL RIGHT
	drawCircle(420, 218,
		200, 200, 200, // Lighter Skin
		1, 1,
		9);
	//TEXT BUBBLE SMALL LEFT
	drawCircle(265, 218,
		200, 200, 200, // Lighter Skin
		1, 1,
		9);
	drawText1(200, 290,
		0.0, 0.0, 0.0,
		"You ");
	drawText1(170, 270,
		0.0, 0.0, 0.0,
		"smell very");
	drawText1(185, 250,
		0.0, 0.0, 0.0,
		"good!");
	drawText1(430, 270,
		0.0, 0.0, 0.0,
		"Thanks.");
	drawText1(430, 250,
		0.0, 0.0, 0.0,
		"It's my new");
	drawText1(430, 230,
		0.0, 0.0, 0.0,
		"perfume");

	drawCircle(600, 230,
		250, 200, 150, // Lighter Skin
		1, 1,
		25);
	drawCircle(700, 230,
		250, 200, 150, // Lighter Skin
		1, 1,
		25);

	glBegin(GL_LINES);
	glVertex2i(600, 230);
	glVertex2i(600, 130);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 230);
	glVertex2i(700, 130);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(700, 130);
	glVertex2i(720, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 130);
	glVertex2i(680, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(700, 190);
	glVertex2i(680, 210);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 190);
	glVertex2i(720, 170);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(600, 130);
	glVertex2i(580, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(600, 130);
	glVertex2i(620, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(600, 200);
	glVertex2i(580, 165);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(600, 200);
	glVertex2i(620, 165);
	glEnd();
	////
	drawCircle(200, 220,
		232, 190, 123, // Lighter Skin
		1, 1,
		25);

	glBegin(GL_LINES);
	glVertex2i(200, 220);
	glVertex2i(200, 130);
	glEnd();

	//legs
	glBegin(GL_LINES);
	glVertex2i(200, 130);
	glVertex2i(220, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(200, 130);
	glVertex2i(180, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(200, 160);
	glVertex2i(220, 170);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(200, 160);
	glVertex2i(180, 200);
	glEnd();
	//table
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(400, 125);
	glVertex2f(650, 125);
	glVertex2f(650, 130);
	glVertex2f(400, 130);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(450, 125);
	glVertex2i(410, 70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(600, 125);
	glVertex2i(640, 70);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(470, 150);
	glVertex2f(570, 150);
	glVertex2f(570, 130);
	glVertex2f(470, 130);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(480, 150);
	glVertex2f(560, 150);
	glVertex2f(560, 170);
	glVertex2f(480, 170);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(500, 190);
	glVertex2f(540, 190);
	glVertex2f(540, 170);
	glVertex2f(500, 170);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(470, 150);
	glVertex2f(570, 150);
	glVertex2f(570, 130);
	glVertex2f(470, 130);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(500, 190);
	glVertex2f(540, 190);
	glVertex2f(540, 170);
	glVertex2f(500, 170);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(480, 150);
	glVertex2f(560, 150);
	glVertex2f(560, 170);
	glVertex2f(480, 170);
	glEnd();
	glColor3f(0, 0, 1);
	//candle
	glBegin(GL_LINES);
	glVertex2i(520, 190);
	glVertex2i(520, 210);
	glEnd();
	//candlelight
	drawCircle(520, 211,
		200, 200, 0, 
		1, 1,
		4);
}
//fifth frame end

//sixth frame
void home2()
{
	//SKY
	glColor3f(0.3, 0.7, 0.9);
	glBegin(GL_POLYGON);
	glVertex2f(-500, 200);
	glVertex2f(1500, 200);
	glVertex2f(1500, 1500);
	glVertex2f(-500, 1500);
	glEnd();
	//SKY
	glColor3f(0.3, 0.7, 0.9);
	glBegin(GL_POLYGON);
	glVertex2f(-500, 200);
	glVertex2f(1500, 200);
	glVertex2f(1500, 1500);
	glVertex2f(-500, 1500);
	glEnd();
	//tree
	glColor3f(1, 0.7, 0);
	glBegin(GL_POLYGON);
	glVertex2f(935, 350);
	glVertex2f(935, 100);
	glVertex2f(966, 100);
	glVertex2f(965, 350);
	glEnd();
	//tree upper part
	drawCircle(950, 350,
		100, 250, 0,
		1, 1,
		75);
	//Roof
	glColor3f(0.3, 0.5, 0.8);
	glBegin(GL_POLYGON);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	glEnd();
	// Top of Front Wall
	glColor3f(0.1, 0.5, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2i(200, 500);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glEnd();
	// Front Wall
	glColor3f(0.7, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glVertex2i(300, 100);
	glVertex2i(100, 100);
	glEnd();
	// Front Door
	glColor3f(0.7, 0.2, 0.9);
	glBegin(GL_POLYGON);
	glVertex2i(150, 250);
	glVertex2i(250, 250);
	glVertex2i(250, 100);
	glVertex2i(150, 100);
	glEnd();
	// Front Door Lock
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(170, 170);
	glEnd();
	//side Wall
	glColor3f(0.1, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(700, 350);
	glVertex2i(700, 100);
	glVertex2i(300, 100);
	glEnd();
	// window one
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(330, 320);
	glVertex2i(450, 320);
	glVertex2i(450, 230);
	glVertex2i(330, 230);
	glEnd();
	// line of window one
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(390, 320);
	glVertex2i(390, 230);
	glVertex2i(330, 273);
	glVertex2i(450, 273);
	glEnd();
	// window two
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(530, 320);
	glVertex2i(650, 320);
	glVertex2i(650, 230);
	glVertex2i(530, 230);
	glEnd();
	// lines of window two
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(590, 320);
	glVertex2i(590, 230);
	glVertex2i(530, 273);
	glVertex2i(650, 273);
	glEnd();
	// Entrance Path
	glColor3f(0.3, 0.5, 0.7);
	glLineWidth(3);
	glBegin(GL_POLYGON);
	glVertex2i(150, 100);
	glVertex2i(250, 100);
	glVertex2i(210, 0);
	glVertex2i(40, 0);
	glEnd();
	// Process all OpenGL routine s as quickly as possible

	glTranslatef(-10.0f, -10.0f, 0.0);

	drawText1(120, 340,
		1.0, 1.0, 1.0,
		"B'DAY PARTY!!");
	//sun
	drawCircle(900, 560,
		250, 250, 0, // Lighter Skin
		1, 1,
		55);
	//clouds
	drawCircle(800, 500,
		250, 250, 250, // Lighter Skin
		1, 1,
		55);
	drawCircle(870, 490,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	drawCircle(730, 490,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	//clouds set 2
	drawCircle(500, 580,
		250, 250, 250,
		1, 1,
		55);
	drawCircle(570, 570,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	drawCircle(430, 570,
		250, 250, 250, // Lighter Skin
		1, 1,
		40);
	drawCircle(800, 350,
		250, 0, 0, // Lighter Skin
		1, 1,
		40);
	drawCircle(720, 350,
		0, 0, 250, // Lighter Skin
		1, 1,
		40);
	drawCircle(760, 420,
		250, 100, 250, // Lighter Skin
		1, 1,
		40);
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(760, 400);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(730, 330);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(760, 200);
	glVertex2i(800, 330);
	glEnd();
	glColor3f(0.3, 0.7, 0.9);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(760, 200);
	glEnd();

	drawCircle(300, 230,
		232, 190, 123, // Lighter Skin
		1, 1,
		25);
	drawCircle(380, 230,
		232, 190, 123, // Lighter Skin
		1, 1,
		25);
	glBegin(GL_LINES);
	glVertex2i(300, 230);
	glVertex2i(300, 130);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 230);
	glVertex2i(380, 130);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(380, 130);
	glVertex2i(360, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 130);
	glVertex2i(400, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(380, 190);
	glVertex2i(360, 170);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(380, 190);
	glVertex2i(400, 200);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(300, 130);
	glVertex2i(280, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(300, 130);
	glVertex2i(320, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(300, 200);
	glVertex2i(280, 165);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(300, 200);
	glVertex2i(320, 165);
	glEnd();
	drawCircle(220, 270,
		200, 200, 200, // Lighter Skin
		1, 1,
		50);
	drawCircle(470, 250,
		200, 200, 200, // Lighter Skin
		1, 1,
		50);
	//TEXT BUBBLE SMALL RIGHT
	drawCircle(420, 218,
		200, 200, 200, // Lighter Skin
		1, 1,
		9);
	//TEXT BUBBLE SMALL LEFT
	drawCircle(265, 218,
		200, 200, 200, // Lighter Skin
		1, 1,
		9);
	drawText1(200, 290,
		0.0, 0.0, 0.0,
		"Ohh");
	drawText1(190, 260,
		0.0, 0.0, 0.0,
		"which ");
	drawText1(195, 230,
		0.0, 0.0, 0.0,
		"one?");
	drawText1(435, 270,
		0.0, 0.0, 0.0,
		"It's the");
	drawText1(430, 250,
		0.0, 0.0, 0.0,
		"very new");
	drawText1(428, 225,
		0.0, 0.0, 0.0,
		"ROSEGOLD.");
	drawCircle(600, 230,
		200, 150, 120, // Lighter Skin
		1, 1,
		25);
	drawCircle(700, 230,
		200, 150, 120, // Lighter Skin
		1, 1,
		25);

	glBegin(GL_LINES);
	glVertex2i(600, 230);
	glVertex2i(600, 130);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 230);
	glVertex2i(700, 130);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(700, 130);
	glVertex2i(720, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 130);
	glVertex2i(680, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(700, 190);
	glVertex2i(680, 210);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(700, 190);
	glVertex2i(720, 170);
	glEnd();
	//legs
	glBegin(GL_LINES);
	glVertex2i(600, 130);
	glVertex2i(580, 100);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(600, 130);
	glVertex2i(620, 100);
	glEnd();
	//hands
	glBegin(GL_LINES);
	glVertex2i(600, 200);
	glVertex2i(580, 165);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(600, 200);
	glVertex2i(620, 165);
	glEnd();
	//table
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(400, 125);
	glVertex2f(650, 125);
	glVertex2f(650, 130);
	glVertex2f(400, 130);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(450, 125);
	glVertex2i(410, 70);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(600, 125);
	glVertex2i(640, 70);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(470, 150);
	glVertex2f(570, 150);
	glVertex2f(570, 130);
	glVertex2f(470, 130);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(480, 150);
	glVertex2f(560, 150);
	glVertex2f(560, 170);
	glVertex2f(480, 170);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(470, 150);
	glVertex2f(570, 150);
	glVertex2f(570, 130);
	glVertex2f(470, 130);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(480, 150);
	glVertex2f(560, 150);
	glVertex2f(560, 170);
	glVertex2f(480, 170);
	glEnd();
	glColor3f(0, 0, 1);
}
//sixth frame end

//seventh frame
void finalscene7()
{
	glClearColor(1, 0.35, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0.35, 0.0, 0.35);
	glBegin(GL_POLYGON);
	glVertex2f(0, -1.0);
	glVertex2f(0.8, -0.2);
	glVertex2f(0.8, 0.4);
	glVertex2f(0.4, 0.4);
	glVertex2f(0, 0);
	glVertex2f(-0.4, 0.4);
	glVertex2f(-0.8, 0.4);
	glVertex2f(-0.8, -0.2);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0, -0.5);
	glVertex2f(0.4, -0.1);
	glVertex2f(0.4, 0.2);
	glVertex2f(0.2, 0.2);
	glVertex2f(0, 0);
	glVertex2f(-0.2, 0.2);
	glVertex2f(-0.4, 0.2);
	glVertex2f(-0.4, -0.1);
	glEnd();
	glColor3f(0.35, 0, 0.35);
	glBegin(GL_LINES);
	glVertex2f(0.05, 0.05);
	glVertex2f(0.05, 0.5);
	glEnd();
	glColor3f(0.35, 0, 0.35);
	glBegin(GL_LINES);
	glVertex2f(-0.1, 0.5);
	glVertex2f(0.1, 0.5);
	glEnd();
	glColor3f(0.35, 0, 0.35);
	glBegin(GL_LINES);
	glVertex2f(-0.05, 0.05);
	glVertex2f(-0.05, 0.5);
	glEnd();
	glColor4f(0.35, 0, 0.35, 1);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0.6);
	glVertex2f(-0.1, 0.5);
	glVertex2f(-0.1, 0.7);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0, 0.6);
	glVertex2f(0.1, 0.5);
	glVertex2f(0.1, 0.7);
	glEnd();
	drawText1(-0.1, -0.3,
		0.0, 0.0, 0.0,
		"perfume");
	drawText1(-0.2, -0.2,
		0.35, 0.0, 0.35,
		"ROSE GOLD");
	drawText1(-1.0, 0.6,
		0.35, 0.0, 0.35,
		"- LONG LASTING");
	drawText1(0.15, 0.6,
		0.35, 0.0, 0.35,
		"- ROSE EXTRACTS");
	drawText1(-1.0, -0.8,
		0.35, 0.0, 0.35,
		"- AFFORDABLE");

}
//seventh frame end

//display functions
void display7()
{
	glClearColor(0, 0, 0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(700, 400, 0);
	glScalef(400, 300, 0);
	finalscene7();
	glPopMatrix();
	glFlush();

}
void display6()
{
	glClearColor(0.5, 0.9, 0.4, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(1.35, 1.25, 0);
	home2();
	glPopMatrix();
	glFlush();
}
void display5()
{
	glClearColor(0.5, 0.9, 0.4, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(1.35, 1.25, 0);
	home1();
	glPopMatrix();
	glFlush();
}
void display4()
{
	glClearColor(0.5, 0.9, 0.4, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(0, 0, 0);
	glScalef(1.35, 1.25, 0);
	home();
	glPopMatrix();
	glFlush();
}
/*void display3() {

	glClear(GL_COLOR_BUFFER_BIT); // Fills the scene with blue.
	glLoadIdentity();

	glColor3f(0, 0.6f, 0.2f);
	glBegin(GL_POLYGON);
	glVertex2f(-3, -1);
	glVertex2f(1.5f, 1.65f);
	glVertex2f(5, -1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-3, -1);
	glVertex2f(3, 2.1f);
	glVertex2f(7, -1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0, -1);
	glVertex2f(6, 1.2f);
	glVertex2f(20, -1);
	glEnd();

	glColor3f(0.4f, 0.4f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2f(0, -0.4f);
	glVertex2f(7, -0.4f);
	glVertex2f(7, 0.4f);
	glVertex2f(0, 0.4f);
	glEnd();

	glLineWidth(6);  // Set the line width to be 6 pixels.
	glColor3f(1, 1, 1);
	glBegin(GL_LINES);
	glVertex2f(0, 0);
	glVertex2f(7, 0);
	glEnd();
	glLineWidth(1);  // Reset the line width to be 1 pixel.

	glPushMatrix();
	glTranslated(5.8, 3, 0);
	glRotated(-frameNumber * 0.7, 0, 0, 1);
	drawSun();
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.75, 1, 0);
	glScaled(0.6, 0.6, 1);
	drawWindmill();
	glPopMatrix();

	glPushMatrix();
	glTranslated(2.2, 1.6, 0);
	glScaled(0.4, 0.4, 1);
	drawWindmill();
	glPopMatrix();

	glPushMatrix();
	glTranslated(3.7, 0.8, 0);
	glScaled(0.7, 0.7, 1);
	drawWindmill();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-3 + 13 * (frameNumber % 300) / 300.0, 0, 0);
	glScaled(0.3, 0.3, 1);
	drawCart();
	glPopMatrix();

	glFlush();

}*/
void display2()
{
	glClearColor(0.3, 0.7, 0.9, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor4f(1, 0, 0, 1);
	glPushMatrix();
	glTranslatef(700, 400, 0);
	glScalef(700, 400, 0);
	finalscene2();
	glPopMatrix();
	glFlush();

}
void display1()
{
	glClearColor(0.35, 0.0, 0.35, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1400, 0, 800);

	drawText1(400, 700,
		1, 1, 1,
		"COMPUTER GRAPHICS AND VISUALIZATION LABORATORY");
	drawText1(500, 650,
		1, 1, 1,
		"PROJECT TITLE:  PERFUME");
	drawText1(650, 500,
		1, 1, 1,
		"Submitted by:");
	drawText1(580, 450,
		1, 1, 1,
		"POORNIMA T V: 1DS16CS078 ");
	drawText1(580, 400,
		1, 1, 1,
		"MILUSHA PHANIDAPU: 1DS16CS077 ");
	drawText1(580, 350,
		1, 1, 1,
		"MONISHA B N: 1DS16CS060 ");
	drawText1(600, 250,
		1, 1, 1,
		"Under the Guidance of:");
	drawText1(550, 200,
		1, 1, 1,
		"Dr. Shubha Bhatt and Mrs. Dhara ");
	drawText1(650, 150,
		1, 1, 1,
		"Dept of CSE");
	drawText1(630, 100,
		1, 1, 1,
		"DSCE,Bangalore");
	drawText1(400, 50,
		1, 1, 0,
		"HERE GOES THE COMICAL JOURNEY OF OUR PERFUME!... :)");
	glFlush();
	
}

//idle functions
void spindisplay6()
{
	int i, j;
	for (i = 0; i < 50000; i++)
		for (j = 0; j < 50000; j++)
		{
		}
	glutDisplayFunc(display7);
	glutPostRedisplay();
}
void spindisplay5()
{
	int i, j;
	for (i = 0; i < 50000; i++)
		for (j = 0; j < 50000; j++)
		{
		}
	glutDisplayFunc(display6);
	glutIdleFunc(spindisplay6);
	glutPostRedisplay();
}
void spindisplay4()
{
	int i, j;
	for (i = 0; i < 50000; i++)
		for (j = 0; j < 50000; j++)
		{
		}
	glutDisplayFunc(display5);
	glutIdleFunc(spindisplay5);
	glutPostRedisplay();
}
/*void spindisplay3()
{
	int i, j;
	for (i = 0; i < 32000; i++)
		for (j = 0; j < 32000; j++)
		{
		}
	glutDisplayFunc(display2);
	glutIdleFunc(spindisplay3);
	glutPostRedisplay();
}*/
void spindisplay2()
{
	int i, j;
	for (i = 0; i < 50000; i++)
		for (j = 0; j < 50000; j++)
		{
		}
	glutDisplayFunc(display4);
	glutIdleFunc(spindisplay4);
	glutPostRedisplay();
}
void spindisplay1()
{
	int i, j;
	for (i = 0;i < 50000;i++)
		for (j = 0; j < 50000; j++)
		{
		}
	glutDisplayFunc(display2);
	glutIdleFunc(spindisplay2);
	glutPostRedisplay();
}

//main program
void init()
{
	gluOrtho2D(0, 800, 0, 600);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1400, 800);
	glutCreateWindow("Perfume");
	glutDisplayFunc(display1);
	glutIdleFunc(spindisplay1);
	glutMainLoop();
	return 0;
}
