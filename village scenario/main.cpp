#include <GL/glut.h>
#include <iostream>
using namespace std;
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <conio.h> // For getch()
#include <cmath> // For cos and sin functions
#include<cstdio>
#include <windows.h>
#include<math.h>
#include <vector>
#include <cstdlib>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

//float boatX = 0.0f; // Starting position of the boat
float batSpeed = 3.0f;
float batMoving1=true;
float birdMoving1=true;
float boatPosition1 = 700.0f; // Initial position of the ----------------------------------boat
float birdPosition = 80.0f;
//float position = 0.0f; // Position of the cycle along the x-axis----------------------------------cycle
//float angle = 0.0f;    // Rotation angle for wheels .......................................................cycle
//float position = 1000.0f;  // Initial position of the cycle (right side of the screen)
//float angle = 0.0f;
float sunPosition=800.0f;
GLboolean sunMoving = true; // Control flag for sun movement

GLboolean boatMoving1 = true;

GLfloat cloudPosition1 = 0.0;

GLboolean cloudMoving1 = true;

/*

void updateClouds(int value) {
    if (cloudMoving) {
        cloudPosition += 2.0f; // Move the sun
        if (cloudPosition > 1000.0f) {
            cloudPosition = 0.0f; // Reset position when out of bounds
        }
        glutPostRedisplay(); // Redisplay with updated position
    }
    glutTimerFunc(25, updateClouds, 0); // Call `updateSun` every 25ms
}
*/

//GLfloat speed2 = 0.004f;
void updateClouds1(int value) {
    if(cloudMoving1)
    {


    cloudPosition1 +=1.0f;
    if(cloudPosition1 > 1000)
    {
      cloudPosition1=0;
    }
}
   // position2 += speed2;
	glutPostRedisplay();
	glutTimerFunc(20, updateClouds1, 0);

}

/*
void handleKeyboardCloud(unsigned char key, int x, int y) {
    switch (key) {
    case 'r': // Start moving the cloud
        cloudMoving = true;
        break;
    case 'p': // Stop moving the cloud
        cloudMoving = false;
        break;
    }
}

*/
void cloud1D()
{
    int i;
    GLfloat x = (0.5f + 1.0f) * 500.0f; GLfloat y = (0.86f + 1.0f) * 500.0f; GLfloat radius = 50.0f / 2.0f; // Scale radius to one-third
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(x, y); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat a = (0.55f + 1.0f) * 500.0f; GLfloat b = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(a, b); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                a + (radius * cos(i * twicePi / triangleAmount)),
                b + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat c = (0.45f + 1.0f) * 500.0f; GLfloat d = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(c, d); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                c + (radius * cos(i * twicePi / triangleAmount)),
                d + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat e = (0.52f + 1.0f) * 500.0f; GLfloat f = (0.8f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(e, f); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                e + (radius * cos(i * twicePi / triangleAmount)),
                f + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat g = (0.6f + 1.0f) * 500.0f; GLfloat h = (0.82f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(g, h); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                g + (radius * cos(i * twicePi / triangleAmount)),
                h + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}

void cloud2D()
{
  int i;
    GLfloat x = (-0.5f + 1.0f) * 500.0f; GLfloat y = (0.86f + 1.0f) * 500.0f; GLfloat radius = 50.0f / 2.0f; // Scale radius to one-third
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(x, y); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat a = (-0.55f + 1.0f) * 500.0f; GLfloat b = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(a, b); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                a + (radius * cos(i * twicePi / triangleAmount)),
                b + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat c = (-0.45f + 1.0f) * 500.0f; GLfloat d = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(c, d); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                c + (radius * cos(i * twicePi / triangleAmount)),
                d + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat e = (-0.52f + 1.0f) * 500.0f; GLfloat f = (0.8f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(e, f); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                e + (radius * cos(i * twicePi / triangleAmount)),
                f + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat g = (-0.6f + 1.0f) * 500.0f; GLfloat h = (0.82f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(g, h); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                g + (radius * cos(i * twicePi / triangleAmount)),
                h + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}

void cloud3D()
{
    int i;
    GLfloat x = (0.0f + 1.0f) * 500.0f; GLfloat y = (0.86f + 1.0f) * 500.0f; GLfloat radius = 50.0f / 2.0f; // Scale radius to one-third
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(x, y); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat a = (0.05f + 1.0f) * 500.0f; GLfloat b = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(a, b); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                a + (radius * cos(i * twicePi / triangleAmount)),
                b + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat c = (-0.05f + 1.0f) * 500.0f; GLfloat d = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(c, d); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                c + (radius * cos(i * twicePi / triangleAmount)),
                d + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat e = (0.02f + 1.0f) * 500.0f; GLfloat f = (0.8f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(e, f); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                e + (radius * cos(i * twicePi / triangleAmount)),
                f + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat g = (0.1f + 1.0f) * 500.0f; GLfloat h = (0.82f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0); // white
        glVertex2f(g, h); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                g + (radius * cos(i * twicePi / triangleAmount)),
                h + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}






void cloud1N()
{
    int i;
    GLfloat x = (0.5f + 1.0f) * 500.0f; GLfloat y = (0.86f + 1.0f) * 500.0f; GLfloat radius = 50.0f / 2.0f; // Scale radius to one-third
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(x, y); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat a = (0.55f + 1.0f) * 500.0f; GLfloat b = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(a, b); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                a + (radius * cos(i * twicePi / triangleAmount)),
                b + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat c = (0.45f + 1.0f) * 500.0f; GLfloat d = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(c, d); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                c + (radius * cos(i * twicePi / triangleAmount)),
                d + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat e = (0.52f + 1.0f) * 500.0f; GLfloat f = (0.8f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(e, f); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                e + (radius * cos(i * twicePi / triangleAmount)),
                f + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat g = (0.6f + 1.0f) * 500.0f; GLfloat h = (0.82f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(g, h); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                g + (radius * cos(i * twicePi / triangleAmount)),
                h + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}

void cloud2N()
{
  int i;
    GLfloat x = (-0.5f + 1.0f) * 500.0f; GLfloat y = (0.86f + 1.0f) * 500.0f; GLfloat radius = 50.0f / 2.0f; // Scale radius to one-third
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(x, y); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat a = (-0.55f + 1.0f) * 500.0f; GLfloat b = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(a, b); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                a + (radius * cos(i * twicePi / triangleAmount)),
                b + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat c = (-0.45f + 1.0f) * 500.0f; GLfloat d = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(c, d); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                c + (radius * cos(i * twicePi / triangleAmount)),
                d + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat e = (-0.52f + 1.0f) * 500.0f; GLfloat f = (0.8f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(e, f); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                e + (radius * cos(i * twicePi / triangleAmount)),
                f + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat g = (-0.6f + 1.0f) * 500.0f; GLfloat h = (0.82f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(g, h); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                g + (radius * cos(i * twicePi / triangleAmount)),
                h + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}

void cloud3N()
{
    int i;
    GLfloat x = (0.0f + 1.0f) * 500.0f; GLfloat y = (0.86f + 1.0f) * 500.0f; GLfloat radius = 50.0f / 2.0f; // Scale radius to one-third
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(x, y); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat a = (0.05f + 1.0f) * 500.0f; GLfloat b = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(a, b); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                a + (radius * cos(i * twicePi / triangleAmount)),
                b + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat c = (-0.05f + 1.0f) * 500.0f; GLfloat d = (0.83f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(c, d); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                c + (radius * cos(i * twicePi / triangleAmount)),
                d + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat e = (0.02f + 1.0f) * 500.0f; GLfloat f = (0.8f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(e, f); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                e + (radius * cos(i * twicePi / triangleAmount)),
                f + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

    GLfloat g = (0.1f + 1.0f) * 500.0f; GLfloat h = (0.82f + 1.0f) * 500.0f;
    glBegin(GL_TRIANGLE_FAN);
glColor3f(0.3f, 0.3f, 0.4f); // Dark Gray-Blue Cloud
        glVertex2f(g, h); // center of circle
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                g + (radius * cos(i * twicePi / triangleAmount)),
                h + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}















float planeX = 1000; // Starting position at the right (X = 1000)

void updateplane() {
    // Decrease the X position to move the plane to the left
    planeX -= 2; // Adjust this value to control the speed of the movement

    if (planeX < -300) { // Reset position when it goes off-screen
        planeX = 1000; // Restart at the right edge
    }
}



/*


void drawCycle(float xOffset, float rotationAngle) {
    // Left wheel (Positioned at the bottom)
    glPushMatrix();
    glTranslatef(200 + xOffset, 350, 0); // Move to the center of the wheel (y = 350)
    glRotatef(rotationAngle, 0.0f, 0.0f, 1.0f); // Rotate wheel to simulate movement
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f); // Black color for wheels
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.14159f / 180.0f; // Convert degrees to radians
        glVertex2f(cos(theta) * 30, sin(theta) * 30); // Draw the wheel
    }
    glEnd();
    glPopMatrix();

    // Right wheel (Positioned at the bottom)
    glPushMatrix();
    glTranslatef(350 + xOffset, 350, 0); // Move to the center of the wheel (y = 350)
    glRotatef(rotationAngle, 0.0f, 0.0f, 1.0f); // Rotate wheel
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.14159f / 180.0f;
        glVertex2f(cos(theta) * 30, sin(theta) * 30); // Draw the wheel
    }
    glEnd();
    glPopMatrix();

    // Cycle body (frame and parts)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); // Color for the frame and supports

    // Bottom horizontal bar (connecting the wheels)
    glVertex2f(200 + xOffset, 350); glVertex2f(350 + xOffset, 350);

    // Top horizontal bar (above the wheels)
   //glVertex2f(200 + xOffset, 350); glVertex2f(200 + xOffset, 380);

   glVertex2f(200 + xOffset, 430); glVertex2f(350 + xOffset, 430);
      glVertex2f(200 + xOffset, 430); glVertex2f(200 + xOffset, 450);

     glVertex2f(190 + xOffset, 450); glVertex2f(210 + xOffset, 450);
    glVertex2f(330 + xOffset, 440); glVertex2f(370 + xOffset, 440);


    glVertex2f(200 + xOffset, 430); glVertex2f(200 + xOffset, 350);

    glVertex2f(275 + xOffset, 350); glVertex2f(350 + xOffset, 430);

   glVertex2f(200 + xOffset, 430); glVertex2f(275 + xOffset, 350);


   glVertex2f(350 + xOffset, 430); glVertex2f(350 + xOffset, 350);

    // Left vertical support
    glVertex2f(200 + xOffset, 380); glVertex2f(200 + xOffset, 350);

    // Right vertical support
    glVertex2f(350 + xOffset, 350); glVertex2f(350 + xOffset, 320);

    // Left diagonal support
  //  glVertex2f(200 + xOffset, 380); glVertex2f(270 + xOffset, 430);

    // Right diagonal support
  //  glVertex2f(270 + xOffset, 430); glVertex2f(350 + xOffset, 380);

    // Right handlebar
    glVertex2f(350 + xOffset, 320); glVertex2f(400 + xOffset, 350);

    // Left handlebar
    glVertex2f(200 + xOffset, 380); glVertex2f(150 + xOffset, 350);

    // Pedal
   // glVertex2f(270 + xOffset, 430); glVertex2f(290 + xOffset, 450);

    glEnd();
}
 */








//sun
void drawSun1(GLfloat x, GLfloat y, GLfloat radius) {
    int numSegments = 100;
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= numSegments; ++i) {
        GLfloat angle = 2.0f * 3.14159f * i / numSegments;
        glVertex2f(x + cos(angle) * radius, y + sin(angle) * radius);
    }
    glEnd();
}



void drawPlane() {
    // Cargo plane body
glColor3f(0.7f, 0.1f, 0.1f); // A deeper warm red color
    glBegin(GL_POLYGON);
    glVertex2f(60 + planeX + 30 + 20, 850 + 50 + 20);
    glVertex2f(210 + planeX + 30 + 20, 850 + 50 + 20);
    glVertex2f(225 + planeX + 30 + 20, 865 + 50 + 20);
    glVertex2f(210 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(60 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(45 + planeX + 30 + 20, 865 + 50 + 20);
    glEnd();

    // Cockpit
    glColor3f(0.3f, 0.6f, 0.9f); // Rich blue for the cockpit
    glBegin(GL_POLYGON);
    glVertex2f(195 + planeX + 30 + 20, 860 + 50 + 20);
    glVertex2f(210 + planeX + 30 + 20, 860 + 50 + 20);
    glVertex2f(219 + planeX + 30 + 20, 870 + 50 + 20);
    glVertex2f(210 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(195 + planeX + 30 + 20, 880 + 50 + 20);
    glEnd();

   /* // Tail fin
    glColor3f(1.0f, 0.0f, 0.0f); // Red color for tail fin
    glBegin(GL_POLYGON);
    glVertex2f(60 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(45 + planeX + 30 + 20, 920 + 50 + 20);
    glVertex2f(54 + planeX + 30 + 20, 920 + 50 + 20);
    glVertex2f(66 + planeX + 30 + 20, 880 + 50 + 20);
    glEnd(); */

/*
    // Horizontal stabilizers
    glColor3f(0.1f, 0.2f, 0.6f); // Dark blue for stabilizers
    glBegin(GL_POLYGON);
    glVertex2f(54 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(36 + planeX + 30 + 20, 902 + 50 + 20);
    glVertex2f(45 + planeX + 30 + 20, 906 + 50 + 20);
    glVertex2f(60 + planeX + 30 + 20, 880 + 50 + 20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(54 + planeX + 30 + 20, 850 + 50 + 20);
    glVertex2f(36 + planeX + 30 + 20, 828 + 50 + 20);
    glVertex2f(45 + planeX + 30 + 20, 824 + 50 + 20);
    glVertex2f(60 + planeX + 30 + 20, 850 + 50 + 20);
    glEnd();*/

    // Enhanced Wings
glColor3f(0.8f, 0.7f, 0.2f); // Deeper warm yellow for the plane wings

    glBegin(GL_POLYGON);
    glVertex2f(120 + planeX + 30 + 20, 850 + 50 + 20);
    glVertex2f(190 + planeX + 30 + 20, 820 + 50 + 20);
    glVertex2f(210 + planeX + 30 + 20, 835 + 50 + 20);
    glVertex2f(140 + planeX + 30 + 20, 850 + 50 + 20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(120 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(190 + planeX + 30 + 20, 910 + 50 + 20);
    glVertex2f(210 + planeX + 30 + 20, 895 + 50 + 20);
    glVertex2f(140 + planeX + 30 + 20, 880 + 50 + 20);
    glEnd();

    // Add realistic wing structure (lines and details)
    glColor3f(0.3f, 0.3f, 0.3f);
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glVertex2f(140 + planeX + 30 + 20, 850 + 50 + 20);
    glVertex2f(170 + planeX + 30 + 20, 835 + 50 + 20);
    glVertex2f(140 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(170 + planeX + 30 + 20, 895 + 50 + 20);
    glVertex2f(160 + planeX + 30 + 20, 850 + 50 + 20);
    glVertex2f(180 + planeX + 30 + 20, 845 + 50 + 20);
    glVertex2f(160 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(180 + planeX + 30 + 20, 885 + 50 + 20);
    glEnd();

    // Engines under wings
    glColor3f(0.3f, 0.3f, 0.3f); // Medium gray for engines
    glBegin(GL_POLYGON);
    glVertex2f(175 + planeX + 30 + 20, 846 + 50 + 20);
    glVertex2f(185 + planeX + 30 + 20, 846 + 50 + 20);
    glVertex2f(185 + planeX + 30 + 20, 860 + 50 + 20);
    glVertex2f(175 + planeX + 30 + 20, 860 + 50 + 20);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(175 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(185 + planeX + 30 + 20, 880 + 50 + 20);
    glVertex2f(185 + planeX + 30 + 20, 894 + 50 + 20);
    glVertex2f(175 + planeX + 30 + 20, 894 + 50 + 20);
    glEnd();

    // Windows
    glColor3f(0.9f, 0.9f, 0.7f); // Ash white windows for contrast
    for (int i = 66 + planeX + 30 + 20; i <= 180 + planeX + 30 + 20; i += 30) {
        glBegin(GL_POLYGON);
        glVertex2f(i, 870 + 50 + 20);
        glVertex2f(i + 10, 870 + 50 + 20);
        glVertex2f(i + 10, 878 + 50 + 20);
        glVertex2f(i, 878 + 50 + 20);
        glEnd();
    }

    glFlush();
}






void backgroundtree()
{
    // Palm trees (scaled height by 70%)
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(200.0f, 650.0f);
    glVertex2f(240.0f, 650.0f);
    glVertex2f(240.0f, 767.0f);
    glVertex2f(220.0f, 785.0f);
    glVertex2f(200.0f, 767.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(220.0f, 785.0f);
    glVertex2f(200.0f, 767.0f);
    glVertex2f(140.0f, 757.0f);
    glVertex2f(170.0f, 775.0f);
    glVertex2f(140.0f, 793.0f);
    glVertex2f(200.0f, 793.0f);
    glVertex2f(200.0f, 849.0f);
    glVertex2f(220.0f, 825.0f);
    glVertex2f(240.0f, 849.0f);
    glVertex2f(240.0f, 793.0f);
    glVertex2f(300.0f, 793.0f);
    glVertex2f(270.0f, 775.0f);
    glVertex2f(300.0f, 757.0f);
    glVertex2f(240.0f, 767.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(800.0f, 650.0f);
    glVertex2f(760.0f, 650.0f);
    glVertex2f(760.0f, 767.0f);
    glVertex2f(780.0f, 785.0f);
    glVertex2f(800.0f, 767.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(780.0f, 785.0f);
    glVertex2f(800.0f, 767.0f);
    glVertex2f(860.0f, 757.0f);
    glVertex2f(830.0f, 775.0f);
    glVertex2f(860.0f, 793.0f);
    glVertex2f(800.0f, 793.0f);
    glVertex2f(800.0f, 849.0f);
    glVertex2f(780.0f, 825.0f);
    glVertex2f(760.0f, 849.0f);
    glVertex2f(760.0f, 793.0f);
    glVertex2f(700.0f, 793.0f);
    glVertex2f(730.0f, 775.0f);
    glVertex2f(700.0f, 757.0f);
    glVertex2f(760.0f, 767.0f);
    glEnd();

    // General trees and foliage (scaled height by 70%)
    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(0.0f, 650.0f);
    glVertex2f(20.0f, 685.0f);
    glVertex2f(70.0f, 722.0f);
    glVertex2f(100.0f, 750.0f);
    glVertex2f(180.0f, 785.0f);
    glVertex2f(250.0f, 806.0f);
    glVertex2f(320.0f, 785.0f);
    glVertex2f(400.0f, 750.0f);
    glVertex2f(430.0f, 722.0f);
    glVertex2f(480.0f, 685.0f);
    glVertex2f(500.0f, 650.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(1000.0f, 650.0f);
    glVertex2f(980.0f, 685.0f);
    glVertex2f(930.0f, 722.0f);
    glVertex2f(900.0f, 750.0f);
    glVertex2f(820.0f, 785.0f);
    glVertex2f(750.0f, 806.0f);
    glVertex2f(680.0f, 785.0f);
    glVertex2f(600.0f, 750.0f);
    glVertex2f(570.0f, 722.0f);
    glVertex2f(520.0f, 685.0f);
    glVertex2f(500.0f, 650.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34, 139, 34);
    glVertex2f(250.0f, 650.0f);
    glVertex2f(270.0f, 685.0f);
    glVertex2f(300.0f, 722.0f);
    glVertex2f(330.0f, 750.0f);
    glVertex2f(380.0f, 775.0f);
    glVertex2f(430.0f, 750.0f);
    glVertex2f(460.0f, 722.0f);
    glVertex2f(480.0f, 685.0f);
    glVertex2f(500.0f, 650.0f);
    glEnd();
}




void tree_1(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}
void tree()
{


glColor3ub(0, 128, 0);
tree_1(30, 40, 102, 670); // Original (100, 670)

glColor3ub(0, 128, 0);
tree_1(30, 40, 152, 670); // Original (150, 670)

glColor3ub(0, 128, 0);
tree_1(25, 30, 112, 720); // Original (110, 720)

glColor3ub(0, 128, 0);
tree_1(30, 30, 137, 720); // Original (135, 720)

glColor3ub(0, 128, 0);
tree_1(25, 30, 122, 750); // Original (120, 750)






    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(140.0f, 425.0f);
    glVertex2f(175.0f, 400.0f);
    glVertex2f(132.5f, 415.0f);
    glVertex2f(130.0f, 375.0f);
    glVertex2f(112.5f, 415.0f);
    glVertex2f(75.0f, 400.0f);
    glVertex2f(110.0f, 425.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(110.0f, 425.0f);
    glVertex2f(110.0f, 615.0f);
    glVertex2f(140.0f, 615.0f);
    glVertex2f(140.0f, 425.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(120.0f, 615.0f);
    glVertex2f(120.0f, 650.0f);
    glVertex2f(130.0f, 650.0f);
    glVertex2f(130.0f, 615.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(130.0f, 615.0f);
    glVertex2f(145.0f, 645.0f);
    glVertex2f(150.0f, 640.0f);
    glVertex2f(140.0f, 615.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(110.0f, 615.0f);
    glVertex2f(100.0f, 640.0f);
    glVertex2f(105.0f, 645.0f);
    glVertex2f(120.0f, 615.0f);
    glEnd();

    int i;
    GLfloat x = 125.0f, y = 665.0f, radius = 30.0f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    /////////////////////////////////////
    // glColor3ub(51, 204, 51);
    glColor3ub(0, 128, 0);

    glVertex2f(x, y);
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat positions[][2] = {
        {160.0f, 655.0f}, {95.0f, 655.0f}, {70.0f, 675.0f}, {195.0f, 675.0f},
        {195.0f, 700.0f}, {70.0f, 700.0f}, {100.0f, 720.0f}, {50.0f, 720.0f},
        {160.0f, 720.0f}, {125.0f, 720.0f}, {80.0f, 720.0f}
    };

    for (int j = 0; j < 11; j++) {
        x = positions[j][0];
        y = positions[j][1];

        glBegin(GL_TRIANGLE_FAN);
         //////////////////////////////////////////////////////////////////////////////////
        glColor3ub(51, 204, 51);
        glColor3ub(0, 128, 0);

        glVertex2f(x, y);
        for (i = 0; i <= triangleAmount; i++) {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
        glEnd();
    }



}





void tree_2(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void tree2()
{




// Tree trunk (shifted left by 100)
glColor3ub(139, 69, 19);
glBegin(GL_POLYGON);
glVertex2d(850, 400); // Original 950 -> 850
glVertex2d(870, 400); // Original 970 -> 870
glVertex2d(870, 550); // Original 970 -> 870
glVertex2d(850, 550); // Original 950 -> 850
glEnd();

// Tree leaves (shifted left by 100)
glColor3ub(0, 128, 0);
tree_2(30, 40, 835, 570); // Original 935 -> 835

glColor3ub(0, 128, 0);
tree_2(30, 40, 885, 570); // Original 985 -> 885

glColor3ub(0, 128, 0);
tree_2(25, 30, 845, 620); // Original 945 -> 845

glColor3ub(0, 128, 0);
tree_2(30, 30, 870, 620); // Original 970 -> 870

glColor3ub(0, 128, 0);
tree_2(25, 30, 855, 650); // Original 955 -> 855






}

void house1()
{

// 2nd House (moved 350 units upward and 200 units to the right, adjusted by -220 x and -320 y, then scaled by 20%)
glColor3ub(210, 105, 30);
glBegin(GL_POLYGON);
glVertex2d((100 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((200 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((175 + 150 + 20 + 250 - 220) * 1.2, (270 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((130 + 150 + 20 + 250 - 220) * 1.2, (270 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

glColor3ub(244, 164, 96);
glBegin(GL_POLYGON);
glVertex2d((100 + 150 + 20 + 250 - 220) * 1.2, (170 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((185 + 150 + 20 + 250 - 220) * 1.2, (170 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((185 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((100 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

glColor3ub(160, 82, 45);
glBegin(GL_POLYGON);
glVertex2d((100 + 150 + 20 + 250 - 220) * 1.2, (170 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((190 + 150 + 20 + 250 - 220) * 1.2, (170 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((190 + 150 + 20 + 250 - 220) * 1.2, (160 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((100 + 150 + 20 + 250 - 220) * 1.2, (160 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

// 2nd house door and window
glColor3ub(160, 82, 45);
glBegin(GL_POLYGON);
glVertex2d((140 + 150 + 20 + 250 - 220) * 1.2, (170 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((165 + 150 + 20 + 250 - 220) * 1.2, (170 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((165 + 150 + 20 + 250 - 220) * 1.2, (200 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((140 + 150 + 20 + 250 - 220) * 1.2, (200 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

// 1st House (moved 350 units upward and 200 units to the right, adjusted by -220 x and -320 y, then scaled by 20%)
glColor3ub(160, 82, 45);
glBegin(GL_POLYGON);
glVertex2d((0 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((135 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((110 + 150 + 20 + 250 - 220) * 1.2, (270 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((25 + 150 + 20 + 250 - 220) * 1.2, (270 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

glColor3ub(255, 222, 173);
glBegin(GL_POLYGON);
glVertex2d((10 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((50 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((25 + 150 + 20 + 250 - 220) * 1.2, (255 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

glColor3ub(255, 222, 173);
glBegin(GL_POLYGON);
glVertex2d((10 + 150 + 20 + 250 - 220) * 1.2, (150 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((50 + 150 + 20 + 250 - 220) * 1.2, (150 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((50 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((10 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

glColor3ub(222, 184, 135);
glBegin(GL_POLYGON);
glVertex2d((50 + 150 + 20 + 250 - 220) * 1.2, (150 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((125 + 150 + 20 + 250 - 220) * 1.2, (150 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((125 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((50 + 150 + 20 + 250 - 220) * 1.2, (220 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

glColor3ub(160, 82, 45);
glBegin(GL_POLYGON);
glVertex2d((10 + 150 + 20 + 250 - 220) * 1.2, (150 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((125 + 150 + 20 + 250 - 220) * 1.2, (150 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((125 + 150 + 20 + 250 - 220) * 1.2, (140 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((10 + 150 + 20 + 250 - 220) * 1.2, (140 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

// 1st house door and window
glColor3ub(160, 82, 45);
glBegin(GL_POLYGON);
glVertex2d((75 + 150 + 20 + 250 - 220) * 1.2, (150 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((95 + 150 + 20 + 250 - 220) * 1.2, (150 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((95 + 150 + 20 + 250 - 220) * 1.2, (195 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((75 + 150 + 20 + 250 - 220) * 1.2, (195 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

glColor3ub(160, 82, 45);
glBegin(GL_POLYGON);
glVertex2d((20 + 150 + 20 + 250 - 220) * 1.2, (200 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((35 + 150 + 20 + 250 - 220) * 1.2, (200 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((35 + 150 + 20 + 250 - 220) * 1.2, (175 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glVertex2d((20 + 150 + 20 + 250 - 220) * 1.2, (175 + 300 + 20 + 150 - 320) * 1.2);  // Scaled by 20%
glEnd();

}






void hut()
{

    // First Polygon
glBegin(GL_POLYGON);
glColor3ub(204, 153, 0);
glVertex2f((((-0.5f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.1f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.18f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Second Polygon
glBegin(GL_POLYGON);
glColor3ub(204, 153, 0);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Third Polygon
glBegin(GL_POLYGON);
glColor3ub(204, 153, 0);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.63f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((-0.15f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.17f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f((((-0.5f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.1f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.5f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.63f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.57f + 1) * 500) * 0.7 + 200) - 100, (((0.445f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((-0.15f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((-0.15f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.1f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.18f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.18f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Main Door
glBegin(GL_POLYGON);
glColor3ub(153, 115, 0);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Door Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.29f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.29f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glEnd();
// Left Window
glBegin(GL_POLYGON);
glColor3ub(153, 115, 0);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Window Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.41f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.41f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Second Door
glBegin(GL_POLYGON);
glColor3ub(153, 115, 0);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((0.12f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((0.14f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((-0.17f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Second Door Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((0.14f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((-0.17f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((0.12f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((0.14f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((0.12f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.545f + 1) * 500) * 0.7 + 200 - 100, (((0.13f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.545f + 1) * 500) * 0.7 + 200 - 100, (((-0.185f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Right Window
glBegin(GL_POLYGON);
glColor3ub(153, 115, 0);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Window Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.17f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.17f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

}

















///////////////////////////////////////////////////////////////
void hut2()
{
float scale = 0.7f; // Scaling factor to reduce size by 30%

// First polygon
glBegin(GL_POLYGON);
glColor3ub(204, 153, 0);
glVertex2f((0.6f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.2f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.28f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glEnd();

// Second polygon
glBegin(GL_POLYGON);
glColor3ub(204, 153, 0);
glVertex2f((0.59f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.23f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.23f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.59f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Third polygon
glBegin(GL_POLYGON);
glColor3ub(204, 153, 0);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glVertex2f((0.73f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (-0.30f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.27f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.6f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.2f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.59f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.59f + 1) * 500 * scale + 200, (-0.2f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.23f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.59f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.23f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.23f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.6f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glVertex2f((0.73f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.67f + 1) * 500 * scale + 200, (0.345f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.71f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (-0.25f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.71f + 1) * 500 * scale + 200, (-0.25f + 1) * 500 * scale + 200);
glVertex2f((0.59f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.2f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.28f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.28f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glEnd();

// Door
glBegin(GL_POLYGON);
glColor3ub(153, 115, 0);
glVertex2f((0.45f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.45f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Door lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.45f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.45f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.45f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.385f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.385f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Left window
glBegin(GL_POLYGON);
glColor3ub(153, 115, 0);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glEnd();

// Left window lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.51f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.51f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glEnd();

// Second door
glBegin(GL_POLYGON);
glColor3ub(153, 115, 0);
glVertex2f((0.61f + 1) * 500 * scale + 200, (0.02f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.04f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (-0.27f + 1) * 500 * scale + 200);
glVertex2f((0.61f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Second door lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.04f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (-0.27f + 1) * 500 * scale + 200);
glVertex2f((0.61f + 1) * 500 * scale + 200, (0.02f + 1) * 500 * scale + 200);
glVertex2f((0.61f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.04f + 1) * 500 * scale + 200);
glVertex2f((0.61f + 1) * 500 * scale + 200, (0.02f + 1) * 500 * scale + 200);
glVertex2f((0.645f + 1) * 500 * scale + 200, (0.03f + 1) * 500 * scale + 200);
glVertex2f((0.645f + 1) * 500 * scale + 200, (-0.29f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (-0.27f + 1) * 500 * scale + 200);
glVertex2f((0.645f + 1) * 500 * scale + 200, (-0.29f + 1) * 500 * scale + 200);
glEnd();


// Right window
glBegin(GL_POLYGON);
glColor3ub(153, 115, 0);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.27f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.27f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glEnd();



}
//




void hutN()
{

    // First Polygon
glBegin(GL_POLYGON);
glColor3ub(60, 45, 0); // Deep Yellow-Orange Shadow
glVertex2f((((-0.5f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.1f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.18f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Second Polygon
glBegin(GL_POLYGON);
glColor3ub(60, 45, 0); // Deep Yellow-Orange Shadow
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Third Polygon
glBegin(GL_POLYGON);
glColor3ub(60, 45, 0); // Deep Yellow-Orange Shadow
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.63f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((-0.15f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.17f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f((((-0.5f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.1f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.13f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.5f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.63f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.57f + 1) * 500) * 0.7 + 200) - 100, (((0.445f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((-0.15f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.61f + 1) * 500) * 0.7 + 200) - 100, (((-0.15f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.49f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.1f + 1) * 500) * 0.7 + 200) - 100, (((0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.18f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);

glColor3ub(0,0,0);
glVertex2f((((-0.18f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.58f + 1) * 500) * 0.7 + 200) - 100, (((0.5f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Main Door
glBegin(GL_POLYGON);
glColor3ub(45, 33, 0); // Deep Yellow-Orange Shadow
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Door Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.22f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.35f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.29f + 1) * 500) * 0.7 + 200) - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f((((-0.29f + 1) * 500) * 0.7 + 200) - 100, (((0.1f + 1) * 500) * 0.7 + 200) - 25);
glEnd();
// Left Window
glBegin(GL_POLYGON);
glColor3ub(190, 140, 0);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Window Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.44f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.38f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.41f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.41f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Second Door
glBegin(GL_POLYGON);
glColor3ub(45, 33, 0); // Deep Yellow-Orange Shadow
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((0.12f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((0.14f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((-0.17f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Second Door Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((0.14f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((-0.17f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((0.12f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((-0.2f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.58f + 1) * 500) * 0.7 + 200 - 100, (((0.14f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.51f + 1) * 500) * 0.7 + 200 - 100, (((0.12f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.545f + 1) * 500) * 0.7 + 200 - 100, (((0.13f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.545f + 1) * 500) * 0.7 + 200 - 100, (((-0.185f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Right Window
glBegin(GL_POLYGON);
glColor3ub(190, 140, 0);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

// Window Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.14f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.2f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.17f + 1) * 500) * 0.7 + 200 - 100, (((0.05f + 1) * 500) * 0.7 + 200) - 25);
glVertex2f(((-0.17f + 1) * 500) * 0.7 + 200 - 100, (((-0.05f + 1) * 500) * 0.7 + 200) - 25);
glEnd();

}

















///////////////////////////////////////////////////////////////
void hut2N()
{
float scale = 0.7f; // Scaling factor to reduce size by 30%

// First polygon
glBegin(GL_POLYGON);
glColor3ub(60, 45, 0); // Deep Yellow-Orange Shadow
glVertex2f((0.6f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.2f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.28f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glEnd();

// Second polygon
glBegin(GL_POLYGON);
glColor3ub(60, 45, 0); // Deep Yellow-Orange Shadow
glVertex2f((0.59f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.23f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.23f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.59f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Third polygon
glBegin(GL_POLYGON);
glColor3ub(60, 45, 0); // Deep Yellow-Orange Shadow
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glVertex2f((0.73f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (-0.30f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.27f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.6f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.2f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.59f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.59f + 1) * 500 * scale + 200, (-0.2f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.23f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.59f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.23f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.23f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.6f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glVertex2f((0.73f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.67f + 1) * 500 * scale + 200, (0.345f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.71f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.71f + 1) * 500 * scale + 200, (-0.25f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.71f + 1) * 500 * scale + 200, (-0.25f + 1) * 500 * scale + 200);
glVertex2f((0.59f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.2f + 1) * 500 * scale + 200, (0.1f + 1) * 500 * scale + 200);
glVertex2f((0.28f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);

glColor3ub(0, 0, 0);
glVertex2f((0.28f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.4f + 1) * 500 * scale + 200);
glEnd();

// Door
glBegin(GL_POLYGON);
glColor3ub(45, 33, 0); // Deep Yellow-Orange Shadow
glVertex2f((0.45f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.45f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Door lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.45f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.32f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.45f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.45f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.385f + 1) * 500 * scale + 200, (0.0f + 1) * 500 * scale + 200);
glVertex2f((0.385f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Left window
glBegin(GL_POLYGON);
glColor3ub(190, 140, 0);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glEnd();

// Left window lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.54f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.48f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.51f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.51f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glEnd();

// Second door
glBegin(GL_POLYGON);
glColor3ub(45, 33, 0); // Deep Yellow-Orange Shadow
glVertex2f((0.61f + 1) * 500 * scale + 200, (0.02f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.04f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (-0.27f + 1) * 500 * scale + 200);
glVertex2f((0.61f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glEnd();

// Second door lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.04f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (-0.27f + 1) * 500 * scale + 200);
glVertex2f((0.61f + 1) * 500 * scale + 200, (0.02f + 1) * 500 * scale + 200);
glVertex2f((0.61f + 1) * 500 * scale + 200, (-0.3f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (0.04f + 1) * 500 * scale + 200);
glVertex2f((0.61f + 1) * 500 * scale + 200, (0.02f + 1) * 500 * scale + 200);
glVertex2f((0.645f + 1) * 500 * scale + 200, (0.03f + 1) * 500 * scale + 200);
glVertex2f((0.645f + 1) * 500 * scale + 200, (-0.29f + 1) * 500 * scale + 200);
glVertex2f((0.68f + 1) * 500 * scale + 200, (-0.27f + 1) * 500 * scale + 200);
glVertex2f((0.645f + 1) * 500 * scale + 200, (-0.29f + 1) * 500 * scale + 200);
glEnd();


// Right window
glBegin(GL_POLYGON);
glColor3ub(190, 140, 0);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.24f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.3f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glVertex2f((0.27f + 1) * 500 * scale + 200, (-0.05f + 1) * 500 * scale + 200);
glVertex2f((0.27f + 1) * 500 * scale + 200, (-0.15f + 1) * 500 * scale + 200);
glEnd();



}




/*void hut2()
{
        glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);
    glVertex2f(250, 600);
    glVertex2f(700, 600);
    glVertex2f(620, 1000);
    glVertex2f(180, 1000);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);
    glVertex2f(260, 600);
    glVertex2f(670, 600);
    glVertex2f(670, 200);
    glVertex2f(260, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);
    glVertex2f(180, 1000);
    glVertex2f(140, 600);
    glVertex2f(160, 600);
    glVertex2f(160, 350);
    glVertex2f(260, 200);
    glVertex2f(630, 200);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(250, 600);
    glVertex2f(700, 600);

    glVertex2f(260, 600);
    glVertex2f(260, 200);

    glVertex2f(670, 200);
    glVertex2f(260, 200);

    glVertex2f(670, 200);
    glVertex2f(670, 600);

    glVertex2f(250, 600);
    glVertex2f(180, 1000);

    glVertex2f(180, 1000);
    glVertex2f(140, 600);

    glVertex2f(190, 940);
    glVertex2f(160, 600);

    glVertex2f(160, 600);
    glVertex2f(160, 350);

    glVertex2f(160, 350);
    glVertex2f(260, 200);

    glVertex2f(700, 600);
    glVertex2f(620, 1000);

    glVertex2f(620, 1000);
    glVertex2f(180, 1000);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 115, 0);
    glVertex2f(400, 500);
    glVertex2f(530, 500);
    glVertex2f(530, 200);
    glVertex2f(400, 200);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(400, 500);
    glVertex2f(530, 500);

    glVertex2f(530, 500);
    glVertex2f(530, 200);

    glVertex2f(400, 500);
    glVertex2f(400, 200);

    glVertex2f(465, 500);
    glVertex2f(465, 200);
    glEnd();

}*/

 void drawCircle(float centerX, float centerY, float radius) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float pi = 3.1416;
        float angle = (i * 2 * pi) / 180;
        float x = centerX + radius * cos(angle);
        float y = centerY + radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
}
float batPosition = 0.0f;
void batMobile()
{
    //Batmobile

// Main body
//Batmobile

// Main body
glColor3f(0.13f, 0.13f, 0.13f);
glBegin(GL_POLYGON);
glVertex2f(60, 291 - 160);  // Adjusted y-coordinate
glVertex2f(53, 301 - 160);  // Adjusted y-coordinate
glVertex2f(30, 346 - 160);  // Adjusted y-coordinate
glVertex2f(35, 351 - 160);  // Adjusted y-coordinate
glVertex2f(140, 341 - 160); // Adjusted y-coordinate
glVertex2f(205, 331 - 160); // Adjusted y-coordinate
glVertex2f(210, 324 - 160); // Adjusted y-coordinate
glVertex2f(215, 291 - 160); // Adjusted y-coordinate
glEnd();

// Head
glColor3f(0.13f, 0.13f, 0.13f);
glBegin(GL_POLYGON);
glVertex2f(62, 341 - 160);  // Adjusted y-coordinate
glVertex2f(70, 351 - 160);  // Adjusted y-coordinate
glVertex2f(75, 366 - 160);  // Adjusted y-coordinate
glVertex2f(130, 357 - 160); // Adjusted y-coordinate
glVertex2f(135, 353 - 160); // Adjusted y-coordinate
glVertex2f(140, 341 - 160); // Adjusted y-coordinate
glEnd();

// Back fang
glColor3f(0.067f, 0.016f, 0.158f);
glBegin(GL_POLYGON);
glVertex2f(30, 346 - 160);  // Adjusted y-coordinate
glVertex2f(26, 341 - 160);  // Adjusted y-coordinate
glVertex2f(40, 336 - 160);  // Adjusted y-coordinate
glVertex2f(30, 331 - 160);  // Adjusted y-coordinate
glVertex2f(50, 326 - 160);  // Adjusted y-coordinate
glVertex2f(32, 321 - 160);  // Adjusted y-coordinate
glVertex2f(60, 316 - 160);  // Adjusted y-coordinate
glVertex2f(35, 311 - 160);  // Adjusted y-coordinate
glVertex2f(70, 306 - 160);  // Adjusted y-coordinate
glVertex2f(38, 301 - 160);  // Adjusted y-coordinate
glVertex2f(80, 296 - 160);  // Adjusted y-coordinate
glEnd();

// Shadows
glColor3f(0.05f, 0.05f, 0.05f);
glBegin(GL_QUADS);
glVertex2f(30, 346 - 160);  // Adjusted y-coordinate
glVertex2f(60, 291 - 160);  // Adjusted y-coordinate
glVertex2f(210, 291 - 160); // Adjusted y-coordinate
glVertex2f(130, 331 - 160); // Adjusted y-coordinate
glEnd();

// Wheels
// Left White Wheel Circle
glColor3f(0.0f, 0.0f, 0.0f);
drawCircle(80.0f, 293.0f - 160, 12.0f); // Adjusted y-coordinate

// Left Inner Black Wheel Circle
glColor3f(0.3f, 0.3f, 0.3f);
drawCircle(80.0f, 293.0f - 160, 7.0f); // Adjusted y-coordinate

// Right Black Wheel Circle
glColor3f(0.0f, 0.0f, 0.0f);
drawCircle(180.0f, 293.0f - 160, 12.0f); // Adjusted y-coordinate

// Right Inner White Wheel Circle
glColor3f(0.3f, 0.3f, 0.3f);
drawCircle(180.0f, 293.0f - 160, 7.0f); // Adjusted y-coordinate

// Windows
glColor3f(0.396f, 0.339f, 0.491f);
glBegin(GL_QUADS);
glVertex2f(107, 359 - 160); // Adjusted y-coordinate
glVertex2f(133, 354 - 160); // Adjusted y-coordinate
glVertex2f(139, 339 - 160); // Adjusted y-coordinate
glVertex2f(100, 341 - 160); // Adjusted y-coordinate
glEnd();

// Window shadow
glColor3f(0.296f, 0.239f, 0.391f);
glBegin(GL_QUADS);
glVertex2f(103, 349 - 160); // Adjusted y-coordinate
glVertex2f(133, 344 - 160); // Adjusted y-coordinate
glVertex2f(139, 339 - 160); // Adjusted y-coordinate
glVertex2f(100, 341 - 160); // Adjusted y-coordinate
glEnd();

}





void boat()
{

// Boat design moved up by 380 on the Y-axis

glBegin(GL_POLYGON); //body middle
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(300, 530 + 70); //top right
glVertex2f(300, 510 + 70); //bottom right
glVertex2f(100, 510 + 70); //bottom left
glVertex2f(100, 530 + 70); //top left
glEnd();

glBegin(GL_TRIANGLES); //left angle
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(100, 510 + 70); //bottom
glVertex2f(100, 530 + 70); //top
glVertex2f(50, 560 + 70); //bottom right
glEnd();

glBegin(GL_TRIANGLES);//right angle
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(300, 510 + 70); //bottom
glVertex2f(300, 530 + 70); //top
glVertex2f(350, 560 + 70); //bottom right
glEnd();

glBegin(GL_POLYGON);//middle upper 1
glColor3f(0.55f, 0.27f, 0.07f);
glVertex2f(105, 530 + 70);
glVertex2f(110, 550 + 70);
glVertex2f(290, 550 + 70);
glVertex2f(295, 530 + 70);
glEnd();

glBegin(GL_POLYGON);//middle upper 2
glColor3f(0.55f, 0.27f, 0.07f);
glVertex2f(110, 550 + 70);
glVertex2f(115, 570 + 70);
glVertex2f(285, 570 + 70);
glVertex2f(290, 550 + 70);
glEnd();

glBegin(GL_LINES);//middle upper line 1
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(110, 550 + 70);
glVertex2f(290, 550 + 70);
glEnd();

glBegin(GL_POLYGON);//middle upper 3
glColor3f(0.55f, 0.27f, 0.07f);
glVertex2f(115, 570 + 70);
glVertex2f(120, 590 + 70);
glVertex2f(280, 590 + 70);
glVertex2f(285, 570 + 70);
glEnd();

glBegin(GL_LINES);//middle upper line 2
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(115, 570 + 70);
glVertex2f(285, 570 + 70);
glEnd();

glBegin(GL_LINES);//middle upper line 3
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(120, 590 + 70);
glVertex2f(280, 590 + 70);
glEnd();

glBegin(GL_LINES);//line 4 upper
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(120, 530 + 70);
glVertex2f(120, 590 + 70);
glEnd();

glBegin(GL_LINES);//line 5 upper
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(200, 530 + 70);
glVertex2f(200, 590 + 70);
glEnd();

glBegin(GL_LINES);//line 6 upper
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(280, 530 + 70);
glVertex2f(280, 590 + 70);
glEnd();









/*
   glBegin(GL_LINES);
   glColor3f(0.0, 0.0, 0.0); // Black color ,boat mast
   glVertex2f(200, 210); // Bottom
   glVertex2f(200, 280); // Top
   glEnd();


   glBegin(GL_TRIANGLES);
   glColor3f(1.0, 1.0, 0.0); // Yellow , boat sail
    glVertex2f(200, 210); // Bottom
   glVertex2f(200, 280); // Top
   glVertex2f(250, 245); // Right point of  sail //angle
    // glVertex2f(150, 245); // Right point of  sail
*/

}


void boatN()
{

// Boat design moved up by 380 on the Y-axis

glBegin(GL_POLYGON); //body middle
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(300, 530 + 70); //top right
glVertex2f(300, 510 + 70); //bottom right
glVertex2f(100, 510 + 70); //bottom left
glVertex2f(100, 530 + 70); //top left
glEnd();

glBegin(GL_TRIANGLES); //left angle
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(100, 510 + 70); //bottom
glVertex2f(100, 530 + 70); //top
glVertex2f(50, 560 + 70); //bottom right
glEnd();

glBegin(GL_TRIANGLES);//right angle
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(300, 510 + 70); //bottom
glVertex2f(300, 530 + 70); //top
glVertex2f(350, 560 + 70); //bottom right
glEnd();

glBegin(GL_POLYGON);//middle upper 1
glColor3f(0.25f, 0.12f, 0.04f);
glVertex2f(105, 530 + 70);
glVertex2f(110, 550 + 70);
glVertex2f(290, 550 + 70);
glVertex2f(295, 530 + 70);
glEnd();

glBegin(GL_POLYGON);//middle upper 2
glColor3f(0.25f, 0.12f, 0.04f);
glVertex2f(110, 550 + 70);
glVertex2f(115, 570 + 70);
glVertex2f(285, 570 + 70);
glVertex2f(290, 550 + 70);
glEnd();

glBegin(GL_LINES);//middle upper line 1
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(110, 550 + 70);
glVertex2f(290, 550 + 70);
glEnd();

glBegin(GL_POLYGON);//middle upper 3
glColor3f(0.25f, 0.12f, 0.04f);
glVertex2f(115, 570 + 70);
glVertex2f(120, 590 + 70);
glVertex2f(280, 590 + 70);
glVertex2f(285, 570 + 70);
glEnd();

glBegin(GL_LINES);//middle upper line 2
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(115, 570 + 70);
glVertex2f(285, 570 + 70);
glEnd();

glBegin(GL_LINES);//middle upper line 3
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(120, 590 + 70);
glVertex2f(280, 590 + 70);
glEnd();

glBegin(GL_LINES);//line 4 upper
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(120, 530 + 70);
glVertex2f(120, 590 + 70);
glEnd();

glBegin(GL_LINES);//line 5 upper
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(200, 530 + 70);
glVertex2f(200, 590 + 70);
glEnd();

glBegin(GL_LINES);//line 6 upper
glColor3f(0.0, 0.0f, 0.f);
glVertex2f(280, 530 + 70);
glVertex2f(280, 590 + 70);
glEnd();









/*
   glBegin(GL_LINES);
   glColor3f(0.0, 0.0, 0.0); // Black color ,boat mast
   glVertex2f(200, 210); // Bottom
   glVertex2f(200, 280); // Top
   glEnd();


   glBegin(GL_TRIANGLES);
   glColor3f(1.0, 1.0, 0.0); // Yellow , boat sail
    glVertex2f(200, 210); // Bottom
   glVertex2f(200, 280); // Top
   glVertex2f(250, 245); // Right point of  sail //angle
    // glVertex2f(150, 245); // Right point of  sail
*/

}





void river()
{
        //River
    glBegin(GL_POLYGON);
glColor3f(0.0f, 0.6f, 0.6f);  // Turquoise glacial water
    glVertex2f(1000,300);//top right
    glVertex2f(1000,0);//bottom right
    glVertex2f(0,0);//bottom left
    glVertex2f(0,300);//top left
    glEnd();
}

 /*road()
 {
                 //road
    glBegin(GL_POLYGON);
 //glColor3f(0.55f, 0.37f, 0.26f); // Brownish tone for a natural dirt road
glColor3f(0.4f, 0.4f, 0.4f);  // Medium gray

    glVertex2f(1000,350);//top right
    glVertex2f(1000,280);//bottom right
    glVertex2f(0,280);//bottom left
    //glVertex2f(700,200);//angle
    glVertex2f(0,350);//top left
    glEnd();

        /*
    //for cycle.....road line
        glBegin(GL_LINES);//middle upper line 1
   glColor3f(0.0, 0.0f, 0.f);

    glVertex2f(1000,320);  // Starting point of the line
   glVertex2f(0,320);;      // Ending point of the line
   glEnd();

   */
   /*

 } */

  void cropland()
  {
         glBegin(GL_POLYGON);
//glColor3f(0.15f, 0.6f, 0.15f); // A deeper, darker green for denser vegetation
//glColor3f(0.396, 0.263, 0.129);
    glColor3ub(0, 128, 0);


    glVertex2f(1000,530);//top right
    glVertex2f(1000,240);//bottom right
    glVertex2f(0,240);//bottom left
    //glVertex2f(700,200);//angle
    glVertex2f(0,530);//top left
    glEnd();
  }

  void croplandN()
  {
         glBegin(GL_POLYGON);
//glColor3f(0.15f, 0.6f, 0.15f); // A deeper, darker green for denser vegetation
//glColor3f(0.396, 0.263, 0.129);
//glColor3ub(0, 64, 0); // Dark green shadow
glColor3ub(0, 64, 32); // Dark green with a hint of gray


    glVertex2f(1000,530);//top right
    glVertex2f(1000,240);//bottom right
    glVertex2f(0,240);//bottom left
    //glVertex2f(700,200);//angle
    glVertex2f(0,530);//top left
    glEnd();
  }


    void river1()
  {
        glBegin(GL_POLYGON);
//glColor3f(0.15f, 0.6f, 0.15f); // A deeper, darker green for denser vegetation
//glColor3f(0.396, 0.263, 0.129);
glColor3f(0.0f, 0.6f, 0.8f);  // Crystal Blue (#0099CC)

    glVertex2f(1000,725);//top right
    glVertex2f(1000,530);//bottom right
    glVertex2f(0,530);//bottom left
    //glVertex2f(700,200);//angle
    glVertex2f(0,725);//top left
    glEnd();
  }


    void river1N()
  {
        glBegin(GL_POLYGON);
//glColor3f(0.15f, 0.6f, 0.15f); // A deeper, darker green for denser vegetation
//glColor3f(0.396, 0.263, 0.129);
glColor3f(0.0f, 0.4f, 0.6f); // Darker crystal blue with a deeper tone

    glVertex2f(1000,725);//top right
    glVertex2f(1000,530);//bottom right
    glVertex2f(0,530);//bottom left
    //glVertex2f(700,200);//angle
    glVertex2f(0,725);//top left
    glEnd();
  }

void hillsCropland()
  {
  glBegin(GL_POLYGON);
glColor3ub(0, 128, 0);
glVertex2f(0,715);
glVertex2f(0,725);
glVertex2f(1000, 725);
glVertex2f(1000, 715);


glEnd();

  }

  void hillsCroplandN()
  {
  glBegin(GL_POLYGON);
glColor3ub(0, 64, 32); // Dark green with a hint of gray
glVertex2f(0,715);
glVertex2f(0,725);
glVertex2f(1000, 725);
glVertex2f(1000, 715);


glEnd();

  }

void sky()
  {
        glBegin(GL_POLYGON);
//glColor3f(0.15f, 0.6f, 0.15f); // A deeper, darker green for denser vegetation
//glColor3f(0.396, 0.263, 0.129);
   glColor3f(0.4f, 0.7f, 1.0f);
    glVertex2f(1000,1000);//top right
    glVertex2f(1000,725);//bottom right
    glVertex2f(0,725);//bottom left
    //glVertex2f(700,200);//angle
    glVertex2f(0,1000);//top left
    glEnd();
  }

  void sky1()
  {
        glBegin(GL_POLYGON);
//glColor3f(0.15f, 0.6f, 0.15f); // A deeper, darker green for denser vegetation
//glColor3f(0.396, 0.263, 0.129);
   glColor3f(0.0f, 0.0f, 0.2f);  // Dark Night Sky (#000033)
   //glColor3f(0.0f, 0.2f, 0.4f);  // Dark Blue (#003366)


    glVertex2f(1000,1000);//top right
    glVertex2f(1000,725);//bottom right
    glVertex2f(0,725);//bottom left
    //glVertex2f(700,200);//angle
    glVertex2f(0,1000);//top left
    glEnd();
  }



  void hills2()
{


glBegin(GL_POLYGON);
glColor3ub(102, 68, 0);
glVertex2f(((-0.25f + 1) * 500) - 375, (0.45f + 1) * 500);  // (375 - 375, 725) -> (0, 725)
glVertex2f(((-0.23f + 1) * 500) - 375, (0.5f + 1) * 500);   // (385 - 375, 750) -> (10, 750)
glVertex2f(((-0.18f + 1) * 500) - 375, (0.61f + 1) * 500);  // (410 - 375, 805) -> (35, 805)
glVertex2f(((-0.15f + 1) * 500) - 375, (0.65f + 1) * 500);  // (425 - 375, 825) -> (50, 825)
glVertex2f(((-0.07f + 1) * 500) - 375, (0.69f + 1) * 500);  // (465 - 375, 845) -> (90, 845)
glVertex2f(((0.0f + 1) * 500) - 375, (0.72f + 1) * 500);    // (500 - 375, 860) -> (125, 860)
glVertex2f(((0.07f + 1) * 500) - 375, (0.69f + 1) * 500);   // (535 - 375, 845) -> (160, 845)
glVertex2f(((0.15f + 1) * 500) - 375, (0.65f + 1) * 500);   // (575 - 375, 825) -> (200, 825)
glVertex2f(((0.18f + 1) * 500) - 375, (0.61f + 1) * 500);   // (590 - 375, 805) -> (215, 805)
glVertex2f(((0.23f + 1) * 500) - 375, (0.5f + 1) * 500);    // (615 - 375, 750) -> (240, 750)
glVertex2f(((0.25f + 1) * 500) - 375, (0.45f + 1) * 500);   // (625 - 375, 725) -> (250, 725)
glEnd();



glBegin(GL_POLYGON);
glColor3ub(102, 68, 0);
glVertex2f(375 + ((-0.25f + 1) * 500), (0.45f + 1) * 500);  // (375 + 375, 725) -> (750, 725)
glVertex2f(375 + ((-0.23f + 1) * 500), (0.5f + 1) * 500);   // (375 + 385, 750) -> (760, 750)
glVertex2f(375 + ((-0.18f + 1) * 500), (0.61f + 1) * 500);  // (375 + 410, 805) -> (785, 805)
glVertex2f(375 + ((-0.15f + 1) * 500), (0.65f + 1) * 500);  // (375 + 425, 825) -> (800, 825)
glVertex2f(375 + ((-0.07f + 1) * 500), (0.69f + 1) * 500);  // (375 + 465, 845) -> (840, 845)
glVertex2f(375 + ((0.0f + 1) * 500), (0.72f + 1) * 500);    // (375 + 500, 860) -> (875, 860)
glVertex2f(375 + ((0.07f + 1) * 500), (0.69f + 1) * 500);   // (375 + 535, 845) -> (910, 845)
glVertex2f(375 + ((0.15f + 1) * 500), (0.65f + 1) * 500);   // (375 + 575, 825) -> (950, 825)
glVertex2f(375 + ((0.18f + 1) * 500), (0.61f + 1) * 500);   // (375 + 590, 805) -> (965, 805)
glVertex2f(375 + ((0.23f + 1) * 500), (0.5f + 1) * 500);    // (375 + 615, 750) -> (990, 750)
glVertex2f(375 + ((0.25f + 1) * 500), (0.45f + 1) * 500);   // (375 + 625, 725) -> (1000, 725)
glEnd();




glBegin(GL_POLYGON);
glColor3ub(102, 68, 0);
glVertex2f((-0.5f + 1) * 500, (0.45f + 1) * 500);  // (-0.5, 0.45) -> (250, 725)
glVertex2f((-0.48f + 1) * 500, (0.5f + 1) * 500);  // (-0.48, 0.5) -> (260, 750)
glVertex2f((-0.45f + 1) * 500, (0.56f + 1) * 500); // (-0.45, 0.56) -> (275, 780)
glVertex2f((-0.42f + 1) * 500, (0.6f + 1) * 500);  // (-0.42, 0.6) -> (290, 800)
glVertex2f((-0.37f + 1) * 500, (0.62f + 1) * 500); // (-0.37, 0.62) -> (315, 810)
glVertex2f((-0.32f + 1) * 500, (0.6f + 1) * 500);  // (-0.32, 0.6) -> (340, 800)
glVertex2f((-0.29f + 1) * 500, (0.56f + 1) * 500); // (-0.29, 0.56) -> (355, 780)
glVertex2f((-0.27f + 1) * 500, (0.5f + 1) * 500);  // (-0.27, 0.5) -> (365, 750)
glVertex2f((-0.25f + 1) * 500, (0.45f + 1) * 500); // (-0.25, 0.45) -> (375, 725)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(102, 68, 0);
glVertex2f((0.5f + 1) * 500, (0.45f + 1) * 500);  // (0.5, 0.45) -> (750, 725)
glVertex2f((0.48f + 1) * 500, (0.5f + 1) * 500);  // (0.48, 0.5) -> (740, 750)
glVertex2f((0.45f + 1) * 500, (0.56f + 1) * 500); // (0.45, 0.56) -> (725, 780)
glVertex2f((0.42f + 1) * 500, (0.6f + 1) * 500);  // (0.42, 0.6) -> (710, 800)
glVertex2f((0.37f + 1) * 500, (0.62f + 1) * 500); // (0.37, 0.62) -> (685, 810)
glVertex2f((0.32f + 1) * 500, (0.6f + 1) * 500);  // (0.32, 0.6) -> (660, 800)
glVertex2f((0.29f + 1) * 500, (0.56f + 1) * 500); // (0.29, 0.56) -> (645, 780)
glVertex2f((0.27f + 1) * 500, (0.5f + 1) * 500);  // (0.27, 0.5) -> (635, 750)
glVertex2f((0.25f + 1) * 500, (0.45f + 1) * 500); // (0.25, 0.45) -> (625, 725)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(102, 68, 0);
glVertex2f((-0.25f + 1) * 500, (0.45f + 1) * 500);  // (-0.25, 0.45) -> (375, 725)
glVertex2f((-0.23f + 1) * 500, (0.5f + 1) * 500);  // (-0.23, 0.5) -> (385, 750)
glVertex2f((-0.18f + 1) * 500, (0.61f + 1) * 500); // (-0.18, 0.61) -> (410, 805)
glVertex2f((-0.15f + 1) * 500, (0.65f + 1) * 500); // (-0.15, 0.65) -> (425, 825)
glVertex2f((-0.07f + 1) * 500, (0.69f + 1) * 500); // (-0.07, 0.69) -> (465, 845)
glVertex2f((0.0f + 1) * 500, (0.72f + 1) * 500);   // (0.0, 0.72) -> (500, 860)
glVertex2f((0.07f + 1) * 500, (0.69f + 1) * 500);  // (0.07, 0.69) -> (535, 845)
glVertex2f((0.15f + 1) * 500, (0.65f + 1) * 500);  // (0.15, 0.65) -> (575, 825)
glVertex2f((0.18f + 1) * 500, (0.61f + 1) * 500);  // (0.18, 0.61) -> (590, 805)
glVertex2f((0.23f + 1) * 500, (0.5f + 1) * 500);   // (0.23, 0.5) -> (615, 750)
glVertex2f((0.25f + 1) * 500, (0.45f + 1) * 500);  // (0.25, 0.45) -> (625, 725)
glEnd();








// Palm Trees
glBegin(GL_POLYGON);
glColor3ub(102, 51, 0);
glVertex2f((-0.52f + 1) * 500, (0.45f + 1) * 500); // (-0.52, 0.45) -> (240, 725)
glVertex2f((-0.48f + 1) * 500, (0.45f + 1) * 500); // (-0.48, 0.45) -> (260, 725)
glVertex2f((-0.48f + 1) * 500, (0.62f + 1) * 500); // (-0.48, 0.62) -> (260, 810)
glVertex2f((-0.5f + 1) * 500, (0.64f + 1) * 500);  // (-0.5, 0.64) -> (250, 820)
glVertex2f((-0.52f + 1) * 500, (0.62f + 1) * 500); // (-0.52, 0.62) -> (240, 810)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(34, 139, 34);
glVertex2f((-0.5f + 1) * 500, (0.64f + 1) * 500);  // (-0.5, 0.64) -> (250, 820)
glVertex2f((-0.52f + 1) * 500, (0.62f + 1) * 500); // (-0.52, 0.62) -> (240, 810)
glVertex2f((-0.58f + 1) * 500, (0.6f + 1) * 500);  // (-0.58, 0.6) -> (210, 800)
glVertex2f((-0.55f + 1) * 500, (0.63f + 1) * 500); // (-0.55, 0.63) -> (225, 815)
glVertex2f((-0.58f + 1) * 500, (0.66f + 1) * 500); // (-0.58, 0.66) -> (210, 830)
glVertex2f((-0.52f + 1) * 500, (0.66f + 1) * 500); // (-0.52, 0.66) -> (240, 830)
glVertex2f((-0.52f + 1) * 500, (0.72f + 1) * 500); // (-0.52, 0.72) -> (240, 860)
glVertex2f((-0.5f + 1) * 500, (0.69f + 1) * 500);  // (-0.5, 0.69) -> (250, 845)
glVertex2f((-0.48f + 1) * 500, (0.72f + 1) * 500); // (-0.48, 0.72) -> (260, 860)
glVertex2f((-0.48f + 1) * 500, (0.66f + 1) * 500); // (-0.48, 0.66) -> (260, 830)
glVertex2f((-0.42f + 1) * 500, (0.66f + 1) * 500); // (-0.42, 0.66) -> (290, 830)
glVertex2f((-0.45f + 1) * 500, (0.63f + 1) * 500); // (-0.45, 0.63) -> (275, 815)
glVertex2f((-0.42f + 1) * 500, (0.6f + 1) * 500);  // (-0.42, 0.6) -> (290, 800)
glVertex2f((-0.48f + 1) * 500, (0.62f + 1) * 500); // (-0.48, 0.62) -> (260, 810)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(102, 51, 0);
glVertex2f((0.52f + 1) * 500, (0.45f + 1) * 500); // (0.52, 0.45) -> (760, 725)
glVertex2f((0.48f + 1) * 500, (0.45f + 1) * 500); // (0.48, 0.45) -> (740, 725)
glVertex2f((0.48f + 1) * 500, (0.62f + 1) * 500); // (0.48, 0.62) -> (740, 810)
glVertex2f((0.5f + 1) * 500, (0.64f + 1) * 500);  // (0.5, 0.64) -> (750, 820)
glVertex2f((0.52f + 1) * 500, (0.62f + 1) * 500); // (0.52, 0.62) -> (760, 810)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(34, 139, 34);
glVertex2f((0.5f + 1) * 500, (0.64f + 1) * 500);  // (0.5, 0.64) -> (750, 820)
glVertex2f((0.52f + 1) * 500, (0.62f + 1) * 500); // (0.52, 0.62) -> (760, 810)
glVertex2f((0.58f + 1) * 500, (0.6f + 1) * 500);  // (0.58, 0.6) -> (790, 800)
glVertex2f((0.55f + 1) * 500, (0.63f + 1) * 500); // (0.55, 0.63) -> (775, 815)
glVertex2f((0.58f + 1) * 500, (0.66f + 1) * 500); // (0.58, 0.66) -> (790, 830)
glVertex2f((0.52f + 1) * 500, (0.66f + 1) * 500); // (0.52, 0.66) -> (760, 830)
glVertex2f((0.52f + 1) * 500, (0.72f + 1) * 500); // (0.52, 0.72) -> (760, 860)
glVertex2f((0.5f + 1) * 500, (0.69f + 1) * 500);  // (0.5, 0.69) -> (750, 845)
glVertex2f((0.48f + 1) * 500, (0.72f + 1) * 500); // (0.48, 0.72) -> (740, 860)
glVertex2f((0.48f + 1) * 500, (0.66f + 1) * 500); // (0.48, 0.66) -> (740, 830)
glVertex2f((0.42f + 1) * 500, (0.66f + 1) * 500); // (0.42, 0.66) -> (710, 830)
glVertex2f((0.45f + 1) * 500, (0.63f + 1) * 500); // (0.45, 0.63) -> (725, 815)
glVertex2f((0.42f + 1) * 500, (0.6f + 1) * 500);  // (0.42, 0.6) -> (710, 800)
glVertex2f((0.48f + 1) * 500, (0.62f + 1) * 500); // (0.48, 0.62) -> (740, 810)
glEnd();

// Other polygons (converted similarly)
// ... (apply the same transformation to the remaining polygons)

}


  void hills2N()
{


glBegin(GL_POLYGON);
glColor3ub(30, 20, 5); // Dark brown with a hint of red and very low brightness
glVertex2f(((-0.25f + 1) * 500) - 375, (0.45f + 1) * 500);  // (375 - 375, 725) -> (0, 725)
glVertex2f(((-0.23f + 1) * 500) - 375, (0.5f + 1) * 500);   // (385 - 375, 750) -> (10, 750)
glVertex2f(((-0.18f + 1) * 500) - 375, (0.61f + 1) * 500);  // (410 - 375, 805) -> (35, 805)
glVertex2f(((-0.15f + 1) * 500) - 375, (0.65f + 1) * 500);  // (425 - 375, 825) -> (50, 825)
glVertex2f(((-0.07f + 1) * 500) - 375, (0.69f + 1) * 500);  // (465 - 375, 845) -> (90, 845)
glVertex2f(((0.0f + 1) * 500) - 375, (0.72f + 1) * 500);    // (500 - 375, 860) -> (125, 860)
glVertex2f(((0.07f + 1) * 500) - 375, (0.69f + 1) * 500);   // (535 - 375, 845) -> (160, 845)
glVertex2f(((0.15f + 1) * 500) - 375, (0.65f + 1) * 500);   // (575 - 375, 825) -> (200, 825)
glVertex2f(((0.18f + 1) * 500) - 375, (0.61f + 1) * 500);   // (590 - 375, 805) -> (215, 805)
glVertex2f(((0.23f + 1) * 500) - 375, (0.5f + 1) * 500);    // (615 - 375, 750) -> (240, 750)
glVertex2f(((0.25f + 1) * 500) - 375, (0.45f + 1) * 500);   // (625 - 375, 725) -> (250, 725)
glEnd();



glBegin(GL_POLYGON);
glColor3ub(30, 20, 5); // Dark brown with a hint of red and very low brightness
glVertex2f(375 + ((-0.25f + 1) * 500), (0.45f + 1) * 500);  // (375 + 375, 725) -> (750, 725)
glVertex2f(375 + ((-0.23f + 1) * 500), (0.5f + 1) * 500);   // (375 + 385, 750) -> (760, 750)
glVertex2f(375 + ((-0.18f + 1) * 500), (0.61f + 1) * 500);  // (375 + 410, 805) -> (785, 805)
glVertex2f(375 + ((-0.15f + 1) * 500), (0.65f + 1) * 500);  // (375 + 425, 825) -> (800, 825)
glVertex2f(375 + ((-0.07f + 1) * 500), (0.69f + 1) * 500);  // (375 + 465, 845) -> (840, 845)
glVertex2f(375 + ((0.0f + 1) * 500), (0.72f + 1) * 500);    // (375 + 500, 860) -> (875, 860)
glVertex2f(375 + ((0.07f + 1) * 500), (0.69f + 1) * 500);   // (375 + 535, 845) -> (910, 845)
glVertex2f(375 + ((0.15f + 1) * 500), (0.65f + 1) * 500);   // (375 + 575, 825) -> (950, 825)
glVertex2f(375 + ((0.18f + 1) * 500), (0.61f + 1) * 500);   // (375 + 590, 805) -> (965, 805)
glVertex2f(375 + ((0.23f + 1) * 500), (0.5f + 1) * 500);    // (375 + 615, 750) -> (990, 750)
glVertex2f(375 + ((0.25f + 1) * 500), (0.45f + 1) * 500);   // (375 + 625, 725) -> (1000, 725)
glEnd();




glBegin(GL_POLYGON);
glColor3ub(30, 20, 5); // Dark brown with a hint of red and very low brightness
glVertex2f((-0.5f + 1) * 500, (0.45f + 1) * 500);  // (-0.5, 0.45) -> (250, 725)
glVertex2f((-0.48f + 1) * 500, (0.5f + 1) * 500);  // (-0.48, 0.5) -> (260, 750)
glVertex2f((-0.45f + 1) * 500, (0.56f + 1) * 500); // (-0.45, 0.56) -> (275, 780)
glVertex2f((-0.42f + 1) * 500, (0.6f + 1) * 500);  // (-0.42, 0.6) -> (290, 800)
glVertex2f((-0.37f + 1) * 500, (0.62f + 1) * 500); // (-0.37, 0.62) -> (315, 810)
glVertex2f((-0.32f + 1) * 500, (0.6f + 1) * 500);  // (-0.32, 0.6) -> (340, 800)
glVertex2f((-0.29f + 1) * 500, (0.56f + 1) * 500); // (-0.29, 0.56) -> (355, 780)
glVertex2f((-0.27f + 1) * 500, (0.5f + 1) * 500);  // (-0.27, 0.5) -> (365, 750)
glVertex2f((-0.25f + 1) * 500, (0.45f + 1) * 500); // (-0.25, 0.45) -> (375, 725)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(30, 20, 5); // Dark brown with a hint of red and very low brightness
glVertex2f((0.5f + 1) * 500, (0.45f + 1) * 500);  // (0.5, 0.45) -> (750, 725)
glVertex2f((0.48f + 1) * 500, (0.5f + 1) * 500);  // (0.48, 0.5) -> (740, 750)
glVertex2f((0.45f + 1) * 500, (0.56f + 1) * 500); // (0.45, 0.56) -> (725, 780)
glVertex2f((0.42f + 1) * 500, (0.6f + 1) * 500);  // (0.42, 0.6) -> (710, 800)
glVertex2f((0.37f + 1) * 500, (0.62f + 1) * 500); // (0.37, 0.62) -> (685, 810)
glVertex2f((0.32f + 1) * 500, (0.6f + 1) * 500);  // (0.32, 0.6) -> (660, 800)
glVertex2f((0.29f + 1) * 500, (0.56f + 1) * 500); // (0.29, 0.56) -> (645, 780)
glVertex2f((0.27f + 1) * 500, (0.5f + 1) * 500);  // (0.27, 0.5) -> (635, 750)
glVertex2f((0.25f + 1) * 500, (0.45f + 1) * 500); // (0.25, 0.45) -> (625, 725)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(30, 20, 5); // Dark brown with a hint of red and very low brightness
glVertex2f((-0.25f + 1) * 500, (0.45f + 1) * 500);  // (-0.25, 0.45) -> (375, 725)
glVertex2f((-0.23f + 1) * 500, (0.5f + 1) * 500);  // (-0.23, 0.5) -> (385, 750)
glVertex2f((-0.18f + 1) * 500, (0.61f + 1) * 500); // (-0.18, 0.61) -> (410, 805)
glVertex2f((-0.15f + 1) * 500, (0.65f + 1) * 500); // (-0.15, 0.65) -> (425, 825)
glVertex2f((-0.07f + 1) * 500, (0.69f + 1) * 500); // (-0.07, 0.69) -> (465, 845)
glVertex2f((0.0f + 1) * 500, (0.72f + 1) * 500);   // (0.0, 0.72) -> (500, 860)
glVertex2f((0.07f + 1) * 500, (0.69f + 1) * 500);  // (0.07, 0.69) -> (535, 845)
glVertex2f((0.15f + 1) * 500, (0.65f + 1) * 500);  // (0.15, 0.65) -> (575, 825)
glVertex2f((0.18f + 1) * 500, (0.61f + 1) * 500);  // (0.18, 0.61) -> (590, 805)
glVertex2f((0.23f + 1) * 500, (0.5f + 1) * 500);   // (0.23, 0.5) -> (615, 750)
glVertex2f((0.25f + 1) * 500, (0.45f + 1) * 500);  // (0.25, 0.45) -> (625, 725)
glEnd();








// Palm Trees
glBegin(GL_POLYGON);
glColor3ub(60, 34, 0); // Dark brown shadow
glVertex2f((-0.52f + 1) * 500, (0.45f + 1) * 500); // (-0.52, 0.45) -> (240, 725)
glVertex2f((-0.48f + 1) * 500, (0.45f + 1) * 500); // (-0.48, 0.45) -> (260, 725)
glVertex2f((-0.48f + 1) * 500, (0.62f + 1) * 500); // (-0.48, 0.62) -> (260, 810)
glVertex2f((-0.5f + 1) * 500, (0.64f + 1) * 500);  // (-0.5, 0.64) -> (250, 820)
glVertex2f((-0.52f + 1) * 500, (0.62f + 1) * 500); // (-0.52, 0.62) -> (240, 810)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 64, 32); // Dark green with a hint of gray
glVertex2f((-0.5f + 1) * 500, (0.64f + 1) * 500);  // (-0.5, 0.64) -> (250, 820)
glVertex2f((-0.52f + 1) * 500, (0.62f + 1) * 500); // (-0.52, 0.62) -> (240, 810)
glVertex2f((-0.58f + 1) * 500, (0.6f + 1) * 500);  // (-0.58, 0.6) -> (210, 800)
glVertex2f((-0.55f + 1) * 500, (0.63f + 1) * 500); // (-0.55, 0.63) -> (225, 815)
glVertex2f((-0.58f + 1) * 500, (0.66f + 1) * 500); // (-0.58, 0.66) -> (210, 830)
glVertex2f((-0.52f + 1) * 500, (0.66f + 1) * 500); // (-0.52, 0.66) -> (240, 830)
glVertex2f((-0.52f + 1) * 500, (0.72f + 1) * 500); // (-0.52, 0.72) -> (240, 860)
glVertex2f((-0.5f + 1) * 500, (0.69f + 1) * 500);  // (-0.5, 0.69) -> (250, 845)
glVertex2f((-0.48f + 1) * 500, (0.72f + 1) * 500); // (-0.48, 0.72) -> (260, 860)
glVertex2f((-0.48f + 1) * 500, (0.66f + 1) * 500); // (-0.48, 0.66) -> (260, 830)
glVertex2f((-0.42f + 1) * 500, (0.66f + 1) * 500); // (-0.42, 0.66) -> (290, 830)
glVertex2f((-0.45f + 1) * 500, (0.63f + 1) * 500); // (-0.45, 0.63) -> (275, 815)
glVertex2f((-0.42f + 1) * 500, (0.6f + 1) * 500);  // (-0.42, 0.6) -> (290, 800)
glVertex2f((-0.48f + 1) * 500, (0.62f + 1) * 500); // (-0.48, 0.62) -> (260, 810)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(60, 34, 0); // Dark brown shadow
glVertex2f((0.52f + 1) * 500, (0.45f + 1) * 500); // (0.52, 0.45) -> (760, 725)
glVertex2f((0.48f + 1) * 500, (0.45f + 1) * 500); // (0.48, 0.45) -> (740, 725)
glVertex2f((0.48f + 1) * 500, (0.62f + 1) * 500); // (0.48, 0.62) -> (740, 810)
glVertex2f((0.5f + 1) * 500, (0.64f + 1) * 500);  // (0.5, 0.64) -> (750, 820)
glVertex2f((0.52f + 1) * 500, (0.62f + 1) * 500); // (0.52, 0.62) -> (760, 810)
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 64, 32); // Dark green with a hint of gray
glVertex2f((0.5f + 1) * 500, (0.64f + 1) * 500);  // (0.5, 0.64) -> (750, 820)
glVertex2f((0.52f + 1) * 500, (0.62f + 1) * 500); // (0.52, 0.62) -> (760, 810)
glVertex2f((0.58f + 1) * 500, (0.6f + 1) * 500);  // (0.58, 0.6) -> (790, 800)
glVertex2f((0.55f + 1) * 500, (0.63f + 1) * 500); // (0.55, 0.63) -> (775, 815)
glVertex2f((0.58f + 1) * 500, (0.66f + 1) * 500); // (0.58, 0.66) -> (790, 830)
glVertex2f((0.52f + 1) * 500, (0.66f + 1) * 500); // (0.52, 0.66) -> (760, 830)
glVertex2f((0.52f + 1) * 500, (0.72f + 1) * 500); // (0.52, 0.72) -> (760, 860)
glVertex2f((0.5f + 1) * 500, (0.69f + 1) * 500);  // (0.5, 0.69) -> (750, 845)
glVertex2f((0.48f + 1) * 500, (0.72f + 1) * 500); // (0.48, 0.72) -> (740, 860)
glVertex2f((0.48f + 1) * 500, (0.66f + 1) * 500); // (0.48, 0.66) -> (740, 830)
glVertex2f((0.42f + 1) * 500, (0.66f + 1) * 500); // (0.42, 0.66) -> (710, 830)
glVertex2f((0.45f + 1) * 500, (0.63f + 1) * 500); // (0.45, 0.63) -> (725, 815)
glVertex2f((0.42f + 1) * 500, (0.6f + 1) * 500);  // (0.42, 0.6) -> (710, 800)
glVertex2f((0.48f + 1) * 500, (0.62f + 1) * 500); // (0.48, 0.62) -> (740, 810)
glEnd();

// Other polygons (converted similarly)
// ... (apply the same transformation to the remaining polygons)

}

void backgroundtree2()
{
    glBegin(GL_POLYGON);
    glColor3ub(125, 85, 0);
    glVertex2f((1.30f + 1) * 500, (0.45f + 1) * 500); // (1.30, 0.45) -> (1150, 725)
    glVertex2f((1.18f + 1) * 500, (0.5f + 1) * 500);  // (1.18, 0.5) -> (1090, 750)
    glVertex2f((1.03f + 1) * 500, (0.56f + 1) * 500); // (1.03, 0.56) -> (1015, 780)
    glVertex2f((0.9f + 1) * 500, (0.6f + 1) * 500);   // (0.9, 0.6) -> (950, 800)
    glVertex2f((0.82f + 1) * 500, (0.64f + 1) * 500); // (0.82, 0.64) -> (910, 820)
    glVertex2f((0.75f + 1) * 500, (0.67f + 1) * 500); // (0.75, 0.67) -> (875, 835)
    glVertex2f((0.78f + 1) * 500, (0.64f + 1) * 500); // (0.78, 0.64) -> (890, 820)
    glVertex2f((0.7f + 1) * 500, (0.6f + 1) * 500);   // (0.7, 0.6) -> (850, 800)
    glVertex2f((0.67f + 1) * 500, (0.56f + 1) * 500); // (0.67, 0.56) -> (835, 780)
    glVertex2f((0.62f + 1) * 500, (0.5f + 1) * 500);  // (0.62, 0.5) -> (810, 750)
    glVertex2f((0.6f + 1) * 500, (0.45f + 1) * 500);  // (0.6, 0.45) -> (800, 725)
    glVertex2f((1.0f + 1) * 500, (0.45f + 1) * 500);  // (1.0, 0.45) -> (1000, 725)
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(125, 85, 0);
    glVertex2f((-0.70f + 1) * 500, (0.45f + 1) * 500); // (-0.70, 0.45) -> (150, 725)
    glVertex2f((-0.64f + 1) * 500, (0.6f + 1) * 500);  // (-0.64, 0.6) -> (180, 800)
    glVertex2f((-0.60f + 1) * 500, (0.66f + 1) * 500); // (-0.60, 0.66) -> (200, 830)
    glVertex2f((-0.56f + 1) * 500, (0.7f + 1) * 500);  // (-0.56, 0.7) -> (220, 850)
    glVertex2f((-0.52f + 1) * 500, (0.8f + 1) * 500);  // (-0.52, 0.8) -> (240, 900)
    glVertex2f((-0.47f + 1) * 500, (0.7f + 1) * 500);  // (-0.47, 0.7) -> (265, 850)
    glVertex2f((-0.42f + 1) * 500, (0.66f + 1) * 500); // (-0.42, 0.66) -> (290, 830)
    glVertex2f((-0.37f + 1) * 500, (0.6f + 1) * 500);  // (-0.37, 0.6) -> (315, 800)
    glVertex2f((-0.35f + 1) * 500, (0.45f + 1) * 500); // (-0.35, 0.45) -> (325, 725)
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(125, 85, 0);
    glVertex2f((0.66f + 1) * 500, (0.45f + 1) * 500); // (0.66, 0.45) -> (830, 725)
    glVertex2f((0.60f + 1) * 500, (0.65f + 1) * 500); // (0.60, 0.65) -> (800, 825)
    glVertex2f((0.54f + 1) * 500, (0.71f + 1) * 500); // (0.54, 0.71) -> (770, 855)
    glVertex2f((0.48f + 1) * 500, (0.75f + 1) * 500); // (0.48, 0.75) -> (740, 875)
    glVertex2f((0.44f + 1) * 500, (0.77f + 1) * 500); // (0.44, 0.77) -> (720, 885)
    glVertex2f((0.38f + 1) * 500, (0.75f + 1) * 500); // (0.38, 0.75) -> (690, 875)
    glVertex2f((0.34f + 1) * 500, (0.71f + 1) * 500); // (0.34, 0.71) -> (670, 855)
    glVertex2f((0.30f + 1) * 500, (0.65f + 1) * 500); // (0.30, 0.65) -> (650, 825)
    glVertex2f((0.25f + 1) * 500, (0.45f + 1) * 500); // (0.25, 0.45) -> (625, 725)
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(125, 85, 0);
    glVertex2f((-0.35f + 1) * 500, (0.45f + 1) * 500); // (-0.35, 0.45) -> (325, 725)
    glVertex2f((-0.33f + 1) * 500, (0.6f + 1) * 500);  // (-0.33, 0.6) -> (335, 800)
    glVertex2f((-0.28f + 1) * 500, (0.66f + 1) * 500); // (-0.28, 0.66) -> (360, 830)
    glVertex2f((-0.25f + 1) * 500, (0.66f + 1) * 500); // (-0.25, 0.66) -> (375, 830)
    glVertex2f((-0.17f + 1) * 500, (0.74f + 1) * 500); // (-0.17, 0.74) -> (415, 870)
    glVertex2f((-0.10f + 1) * 500, (0.77f + 1) * 500); // (-0.10, 0.77) -> (450, 885)
    glVertex2f((0.17f + 1) * 500, (0.74f + 1) * 500);  // (0.17, 0.74) -> (585, 870)
    glVertex2f((0.25f + 1) * 500, (0.7f + 1) * 500);   // (0.25, 0.7) -> (625, 850)
    glVertex2f((0.28f + 1) * 500, (0.6f + 1) * 500);   // (0.28, 0.6) -> (640, 800)
    glVertex2f((0.33f + 1) * 500, (0.6f + 1) * 500);   // (0.33, 0.6) -> (665, 800)
    glVertex2f((0.35f + 1) * 500, (0.45f + 1) * 500);  // (0.35, 0.45) -> (675, 725)
    glEnd();
}

void backgroundtree2N()
{
    glBegin(GL_POLYGON);
   //glColor3ub(50, 35, 0); // Dark brown shadow
   glColor3ub(60, 45, 10); // Darker brown with a slight hint of red


    glVertex2f((1.30f + 1) * 500, (0.45f + 1) * 500); // (1.30, 0.45) -> (1150, 725)
    glVertex2f((1.18f + 1) * 500, (0.5f + 1) * 500);  // (1.18, 0.5) -> (1090, 750)
    glVertex2f((1.03f + 1) * 500, (0.56f + 1) * 500); // (1.03, 0.56) -> (1015, 780)
    glVertex2f((0.9f + 1) * 500, (0.6f + 1) * 500);   // (0.9, 0.6) -> (950, 800)
    glVertex2f((0.82f + 1) * 500, (0.64f + 1) * 500); // (0.82, 0.64) -> (910, 820)
    glVertex2f((0.75f + 1) * 500, (0.67f + 1) * 500); // (0.75, 0.67) -> (875, 835)
    glVertex2f((0.78f + 1) * 500, (0.64f + 1) * 500); // (0.78, 0.64) -> (890, 820)
    glVertex2f((0.7f + 1) * 500, (0.6f + 1) * 500);   // (0.7, 0.6) -> (850, 800)
    glVertex2f((0.67f + 1) * 500, (0.56f + 1) * 500); // (0.67, 0.56) -> (835, 780)
    glVertex2f((0.62f + 1) * 500, (0.5f + 1) * 500);  // (0.62, 0.5) -> (810, 750)
    glVertex2f((0.6f + 1) * 500, (0.45f + 1) * 500);  // (0.6, 0.45) -> (800, 725)
    glVertex2f((1.0f + 1) * 500, (0.45f + 1) * 500);  // (1.0, 0.45) -> (1000, 725)
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(60, 45, 10); // Darker brown with a slight hint of red

    glVertex2f((-0.70f + 1) * 500, (0.45f + 1) * 500); // (-0.70, 0.45) -> (150, 725)
    glVertex2f((-0.64f + 1) * 500, (0.6f + 1) * 500);  // (-0.64, 0.6) -> (180, 800)
    glVertex2f((-0.60f + 1) * 500, (0.66f + 1) * 500); // (-0.60, 0.66) -> (200, 830)
    glVertex2f((-0.56f + 1) * 500, (0.7f + 1) * 500);  // (-0.56, 0.7) -> (220, 850)
    glVertex2f((-0.52f + 1) * 500, (0.8f + 1) * 500);  // (-0.52, 0.8) -> (240, 900)
    glVertex2f((-0.47f + 1) * 500, (0.7f + 1) * 500);  // (-0.47, 0.7) -> (265, 850)
    glVertex2f((-0.42f + 1) * 500, (0.66f + 1) * 500); // (-0.42, 0.66) -> (290, 830)
    glVertex2f((-0.37f + 1) * 500, (0.6f + 1) * 500);  // (-0.37, 0.6) -> (315, 800)
    glVertex2f((-0.35f + 1) * 500, (0.45f + 1) * 500); // (-0.35, 0.45) -> (325, 725)
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(60, 45, 10); // Darker brown with a slight hint of red
    glVertex2f((0.66f + 1) * 500, (0.45f + 1) * 500); // (0.66, 0.45) -> (830, 725)
    glVertex2f((0.60f + 1) * 500, (0.65f + 1) * 500); // (0.60, 0.65) -> (800, 825)
    glVertex2f((0.54f + 1) * 500, (0.71f + 1) * 500); // (0.54, 0.71) -> (770, 855)
    glVertex2f((0.48f + 1) * 500, (0.75f + 1) * 500); // (0.48, 0.75) -> (740, 875)
    glVertex2f((0.44f + 1) * 500, (0.77f + 1) * 500); // (0.44, 0.77) -> (720, 885)
    glVertex2f((0.38f + 1) * 500, (0.75f + 1) * 500); // (0.38, 0.75) -> (690, 875)
    glVertex2f((0.34f + 1) * 500, (0.71f + 1) * 500); // (0.34, 0.71) -> (670, 855)
    glVertex2f((0.30f + 1) * 500, (0.65f + 1) * 500); // (0.30, 0.65) -> (650, 825)
    glVertex2f((0.25f + 1) * 500, (0.45f + 1) * 500); // (0.25, 0.45) -> (625, 725)
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(60, 45, 10); // Darker brown with a slight hint of red
    glVertex2f((-0.35f + 1) * 500, (0.45f + 1) * 500); // (-0.35, 0.45) -> (325, 725)
    glVertex2f((-0.33f + 1) * 500, (0.6f + 1) * 500);  // (-0.33, 0.6) -> (335, 800)
    glVertex2f((-0.28f + 1) * 500, (0.66f + 1) * 500); // (-0.28, 0.66) -> (360, 830)
    glVertex2f((-0.25f + 1) * 500, (0.66f + 1) * 500); // (-0.25, 0.66) -> (375, 830)
    glVertex2f((-0.17f + 1) * 500, (0.74f + 1) * 500); // (-0.17, 0.74) -> (415, 870)
    glVertex2f((-0.10f + 1) * 500, (0.77f + 1) * 500); // (-0.10, 0.77) -> (450, 885)
    glVertex2f((0.17f + 1) * 500, (0.74f + 1) * 500);  // (0.17, 0.74) -> (585, 870)
    glVertex2f((0.25f + 1) * 500, (0.7f + 1) * 500);   // (0.25, 0.7) -> (625, 850)
    glVertex2f((0.28f + 1) * 500, (0.6f + 1) * 500);   // (0.28, 0.6) -> (640, 800)
    glVertex2f((0.33f + 1) * 500, (0.6f + 1) * 500);   // (0.33, 0.6) -> (665, 800)
    glVertex2f((0.35f + 1) * 500, (0.45f + 1) * 500);  // (0.35, 0.45) -> (675, 725)
    glEnd();
}



void bird()
{
    int i;

// bird 1
GLfloat mm = (0.182f + 1) * 500 - 475;
GLfloat nn = (0.801f + 1) * 500 - 175;
GLfloat radiusmm = 0.01f * 1000 / 2;
int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(225, 225, 208);
glVertex2f(mm, nn);
for(i = 0; i <= triangleAmount; i++)
{
    glVertex2f(
        mm + (radiusmm * cos(i * twicePi / triangleAmount)),
        nn + (radiusmm * sin(i * twicePi / triangleAmount))
    );
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(225, 225, 208);
glVertex2f((0.1f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.11f + 1) * 500 - 475, (0.79f + 1) * 500 - 175);
glVertex2f((0.12f + 1) * 500 - 475, (0.78f + 1) * 500 - 175);
glVertex2f((0.16f + 1) * 500 - 475, (0.77f + 1) * 500 - 175);
glVertex2f((0.19f + 1) * 500 - 475, (0.79f + 1) * 500 - 175);
glVertex2f((0.201f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(217, 217, 217);
glVertex2f((0.175f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.15f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.14f + 1) * 500 - 475, (0.84f + 1) * 500 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(242, 242, 242);
glVertex2f((0.175f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.144f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.12f + 1) * 500 - 475, (0.83f + 1) * 500 - 175);
glEnd();





// bird 2
// bird 2
GLfloat mm1= (0.182f + 1) * 500 + 50 - 475;
GLfloat nn1= (0.801f + 1) * 500 - 175;
GLfloat radiusmm1 = 0.01f * 1000 / 2;
int triangleAmount1 = 20;
GLfloat twicePi1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(225, 225, 208);
glVertex2f(mm1, nn1);
for(i = 0; i <= triangleAmount1; i++)
{
    glVertex2f(
        mm1 + (radiusmm1 * cos(i *  twicePi1 / triangleAmount1)),
        nn1 + (radiusmm1 * sin(i * twicePi1 / triangleAmount1))
    );
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(225, 225, 208);
glVertex2f((0.1f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.11f + 1) * 500 + 50 - 475, (0.79f + 1) * 500 - 175);
glVertex2f((0.12f + 1) * 500 + 50 - 475, (0.78f + 1) * 500 - 175);
glVertex2f((0.16f + 1) * 500 + 50 - 475, (0.77f + 1) * 500 - 175);
glVertex2f((0.19f + 1) * 500 + 50 - 475, (0.79f + 1) * 500 - 175);
glVertex2f((0.201f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(217, 217, 217);
glVertex2f((0.175f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.15f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.14f + 1) * 500 + 50 - 475, (0.84f + 1) * 500 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(242, 242, 242);
glVertex2f((0.175f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.144f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.12f + 1) * 500 + 50 - 475, (0.83f + 1) * 500 - 175);
glEnd();



// bird 3
GLfloat mm2 = (0.182f + 1) * 500 + 50 - 25 - 475;
GLfloat nn2 = (0.801f + 1) * 500 - 50 - 175;
GLfloat radiusmm2 = 0.01f * 1000 / 2;
int triangleAmount2 = 20;
GLfloat twicePi2 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(225, 225, 208);
glVertex2f(mm2, nn2);
for(i = 0; i <= triangleAmount2; i++)
{
    glVertex2f(
        mm2 + (radiusmm2 * cos(i * twicePi2 / triangleAmount2)),
        nn2 + (radiusmm2 * sin(i * twicePi2 / triangleAmount2))
    );
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(225, 225, 208);
glVertex2f((0.1f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.11f + 1) * 500 + 50 - 25 - 475, (0.79f + 1) * 500 - 50 - 175);
glVertex2f((0.12f + 1) * 500 + 50 - 25 - 475, (0.78f + 1) * 500 - 50 - 175);
glVertex2f((0.16f + 1) * 500 + 50 - 25 - 475, (0.77f + 1) * 500 - 50 - 175);
glVertex2f((0.19f + 1) * 500 + 50 - 25 - 475, (0.79f + 1) * 500 - 50 - 175);
glVertex2f((0.201f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(217, 217, 217);
glVertex2f((0.175f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.15f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.14f + 1) * 500 + 50 - 25 - 475, (0.84f + 1) * 500 - 50 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(242, 242, 242);
glVertex2f((0.175f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.144f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.12f + 1) * 500 + 50 - 25 - 475, (0.83f + 1) * 500 - 50 - 175);
glEnd();




}



void birdN()
{
    int i;

// bird 1
GLfloat mm = (0.182f + 1) * 500 - 475;
GLfloat nn = (0.801f + 1) * 500 - 175;
GLfloat radiusmm = 0.01f * 1000 / 2;
int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(120, 120, 110); // Dark Warm Gray
glVertex2f(mm, nn);
for(i = 0; i <= triangleAmount; i++)
{
    glVertex2f(
        mm + (radiusmm * cos(i * twicePi / triangleAmount)),
        nn + (radiusmm * sin(i * twicePi / triangleAmount))
    );
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(120, 120, 110); // Dark Warm Gray
glVertex2f((0.1f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.11f + 1) * 500 - 475, (0.79f + 1) * 500 - 175);
glVertex2f((0.12f + 1) * 500 - 475, (0.78f + 1) * 500 - 175);
glVertex2f((0.16f + 1) * 500 - 475, (0.77f + 1) * 500 - 175);
glVertex2f((0.19f + 1) * 500 - 475, (0.79f + 1) * 500 - 175);
glVertex2f((0.201f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(115, 115, 110); // Medium Dark Gray
glVertex2f((0.175f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.15f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.14f + 1) * 500 - 475, (0.84f + 1) * 500 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(180, 180, 180); // Soft Dark Gray
glVertex2f((0.175f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.144f + 1) * 500 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.12f + 1) * 500 - 475, (0.83f + 1) * 500 - 175);
glEnd();





// bird 2
// bird 2
GLfloat mm1= (0.182f + 1) * 500 + 50 - 475;
GLfloat nn1= (0.801f + 1) * 500 - 175;
GLfloat radiusmm1 = 0.01f * 1000 / 2;
int triangleAmount1 = 20;
GLfloat twicePi1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(120, 120, 110); // Dark Warm Gray
glVertex2f(mm1, nn1);
for(i = 0; i <= triangleAmount1; i++)
{
    glVertex2f(
        mm1 + (radiusmm1 * cos(i *  twicePi1 / triangleAmount1)),
        nn1 + (radiusmm1 * sin(i * twicePi1 / triangleAmount1))
    );
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(120, 120, 110); // Dark Warm Gray
glVertex2f((0.1f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.11f + 1) * 500 + 50 - 475, (0.79f + 1) * 500 - 175);
glVertex2f((0.12f + 1) * 500 + 50 - 475, (0.78f + 1) * 500 - 175);
glVertex2f((0.16f + 1) * 500 + 50 - 475, (0.77f + 1) * 500 - 175);
glVertex2f((0.19f + 1) * 500 + 50 - 475, (0.79f + 1) * 500 - 175);
glVertex2f((0.201f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(115, 115, 110); // Medium Dark Gray
glVertex2f((0.175f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.15f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.14f + 1) * 500 + 50 - 475, (0.84f + 1) * 500 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(180, 180, 180); // Soft Dark Gray
glVertex2f((0.175f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.144f + 1) * 500 + 50 - 475, (0.8f + 1) * 500 - 175);
glVertex2f((0.12f + 1) * 500 + 50 - 475, (0.83f + 1) * 500 - 175);
glEnd();



// bird 3
GLfloat mm2 = (0.182f + 1) * 500 + 50 - 25 - 475;
GLfloat nn2 = (0.801f + 1) * 500 - 50 - 175;
GLfloat radiusmm2 = 0.01f * 1000 / 2;
int triangleAmount2 = 20;
GLfloat twicePi2 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(120, 120, 110); // Dark Warm Gray
glVertex2f(mm2, nn2);
for(i = 0; i <= triangleAmount2; i++)
{
    glVertex2f(
        mm2 + (radiusmm2 * cos(i * twicePi2 / triangleAmount2)),
        nn2 + (radiusmm2 * sin(i * twicePi2 / triangleAmount2))
    );
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(120, 120, 110); // Dark Warm Gray
glVertex2f((0.1f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.11f + 1) * 500 + 50 - 25 - 475, (0.79f + 1) * 500 - 50 - 175);
glVertex2f((0.12f + 1) * 500 + 50 - 25 - 475, (0.78f + 1) * 500 - 50 - 175);
glVertex2f((0.16f + 1) * 500 + 50 - 25 - 475, (0.77f + 1) * 500 - 50 - 175);
glVertex2f((0.19f + 1) * 500 + 50 - 25 - 475, (0.79f + 1) * 500 - 50 - 175);
glVertex2f((0.201f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(115, 115, 110); // Medium Dark Gray
glVertex2f((0.175f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.15f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.14f + 1) * 500 + 50 - 25 - 475, (0.84f + 1) * 500 - 50 - 175);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(180, 180, 180); // Soft Dark Gray
glVertex2f((0.175f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.144f + 1) * 500 + 50 - 25 - 475, (0.8f + 1) * 500 - 50 - 175);
glVertex2f((0.12f + 1) * 500 + 50 - 25 - 475, (0.83f + 1) * 500 - 50 - 175);
glEnd();




}



void road1()
{
glColor3f(0.0f, 0.6f, 0.6f);  // Turquoise glacial water
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);     // +100 to y
    glVertex2d(1000, 0);  // +100 to y
    glVertex2d(1000, 240);  // +100 to y
    glVertex2d(0, 240);     // +100 to y
    glEnd();

    // car road
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(0, 100);     // +100 to y
    glVertex2d(1000, 100);  // +100 to y
    glVertex2d(1000, 210);  // +100 to y
    glVertex2d(0, 210);     // +100 to y
    glEnd();

    glColor3ub(105, 105, 105);
    glBegin(GL_POLYGON);
    glVertex2d(0, 100);     // +100 to y
    glVertex2d(1000, 100);  // +100 to y
    glVertex2d(1000, 200);  // +100 to y
    glVertex2d(0, 200);     // +100 to y
    glEnd();

    // White road markings
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(30, 140);   // +100 to y
    glVertex2d(100, 140);  // +100 to y
    glVertex2d(100, 160);  // +100 to y
    glVertex2d(30, 160);   // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(130, 140);  // +100 to y
    glVertex2d(200, 140);  // +100 to y
    glVertex2d(200, 160);  // +100 to y
    glVertex2d(130, 160);  // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(230, 140);  // +100 to y
    glVertex2d(300, 140);  // +100 to y
    glVertex2d(300, 160);  // +100 to y
    glVertex2d(230, 160);  // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(330, 140);  // +100 to y
    glVertex2d(400, 140);  // +100 to y
    glVertex2d(400, 160);  // +100 to y
    glVertex2d(330, 160);  // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(430, 140);  // +100 to y
    glVertex2d(500, 140);  // +100 to y
    glVertex2d(500, 160);  // +100 to y
    glVertex2d(430, 160);  // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(530, 140);  // +100 to y
    glVertex2d(600, 140);  // +100 to y
    glVertex2d(600, 160);  // +100 to y
    glVertex2d(530, 160);  // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(630, 140);  // +100 to y
    glVertex2d(700, 140);  // +100 to y
    glVertex2d(700, 160);  // +100 to y
    glVertex2d(630, 160);  // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(730, 140);  // +100 to y
    glVertex2d(800, 140);  // +100 to y
    glVertex2d(800, 160);  // +100 to y
    glVertex2d(730, 160);  // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(830, 140);  // +100 to y
    glVertex2d(900, 140);  // +100 to y
    glVertex2d(900, 160);  // +100 to y
    glVertex2d(830, 160);  // +100 to y
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(930, 140);  // +100 to y
    glVertex2d(1000, 140); // +100 to y
    glVertex2d(1000, 160); // +100 to y
    glVertex2d(930, 160);  // +100 to y
    glEnd();
}


void road1N()
{
glColor3f(0.0f, 0.2f, 0.2f); // Deep Dark Teal
  // Turquoise glacial water
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);     // +100 to y
    glVertex2d(1000, 0);  // +100 to y
    glVertex2d(1000, 240);  // +100 to y
    glVertex2d(0, 240);     // +100 to y
    glEnd();

    // car road
glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(0, 100);     // +100 to y
    glVertex2d(1000, 100);  // +100 to y
    glVertex2d(1000, 210);  // +100 to y
    glVertex2d(0, 210);     // +100 to y
    glEnd();

glColor3ub(60, 60, 60); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(0, 100);     // +100 to y
    glVertex2d(1000, 100);  // +100 to y
    glVertex2d(1000, 200);  // +100 to y
    glVertex2d(0, 200);     // +100 to y
    glEnd();

    // White road markings
glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(30, 140);   // +100 to y
    glVertex2d(100, 140);  // +100 to y
    glVertex2d(100, 160);  // +100 to y
    glVertex2d(30, 160);   // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(130, 140);  // +100 to y
    glVertex2d(200, 140);  // +100 to y
    glVertex2d(200, 160);  // +100 to y
    glVertex2d(130, 160);  // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(230, 140);  // +100 to y
    glVertex2d(300, 140);  // +100 to y
    glVertex2d(300, 160);  // +100 to y
    glVertex2d(230, 160);  // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(330, 140);  // +100 to y
    glVertex2d(400, 140);  // +100 to y
    glVertex2d(400, 160);  // +100 to y
    glVertex2d(330, 160);  // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(430, 140);  // +100 to y
    glVertex2d(500, 140);  // +100 to y
    glVertex2d(500, 160);  // +100 to y
    glVertex2d(430, 160);  // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(530, 140);  // +100 to y
    glVertex2d(600, 140);  // +100 to y
    glVertex2d(600, 160);  // +100 to y
    glVertex2d(530, 160);  // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(630, 140);  // +100 to y
    glVertex2d(700, 140);  // +100 to y
    glVertex2d(700, 160);  // +100 to y
    glVertex2d(630, 160);  // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(730, 140);  // +100 to y
    glVertex2d(800, 140);  // +100 to y
    glVertex2d(800, 160);  // +100 to y
    glVertex2d(730, 160);  // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(830, 140);  // +100 to y
    glVertex2d(900, 140);  // +100 to y
    glVertex2d(900, 160);  // +100 to y
    glVertex2d(830, 160);  // +100 to y
    glEnd();

glColor3ub(100, 100, 100); // Dark Gray
    glBegin(GL_POLYGON);
    glVertex2d(930, 140);  // +100 to y
    glVertex2d(1000, 140); // +100 to y
    glVertex2d(1000, 160); // +100 to y
    glVertex2d(930, 160);  // +100 to y
    glEnd();
}




void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}


void treeDouble()
{
    // back tree
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(75 * 2, 180 * 2);  // (150, 360)
    glVertex2d(85 * 2, 180 * 2);  // (170, 360)
    glVertex2d(85 * 2, 350 * 2);  // (170, 700)
    glVertex2d(75 * 2, 350 * 2);  // (150, 700)
    glEnd();

    glColor3ub(0, 128, 0);

    circle(30 * 2, 40 * 2, 85 * 2, 370 * 2);
    circle(20 * 2, 30 * 2, 90 * 2, 340 * 2);
    circle(20 * 2, 30 * 2, 65 * 2, 395 * 2);

    // forward tree
    glColor3ub(0, 100, 0);
    circle(40 * 2, 50 * 2, 45 * 2, 360 * 2);
    glColor3ub(0, 100, 0);
    circle(30 * 2, 30 * 2, 60 * 2, 330 * 2);
    circle(20 * 2, 30 * 2, 30 * 2, 300 * 2);
    circle(20 * 2, 30 * 2, 60 * 2, 300 * 2);

    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);
    glVertex2d(40 * 2, 180 * 2);   // (80, 360)
    glVertex2d(50 * 2, 180 * 2);   // (100, 360)
    glVertex2d(50 * 2, 296 * 2);   // (100, 592)
    glVertex2d(60 * 2, 320 * 2);   // (120, 640)
    glVertex2d(55 * 2, 326 * 2);   // (110, 652)
    glVertex2d(50 * 2, 300 * 2);   // (100, 600)
    glVertex2d(50 * 2, 350 * 2);   // (100, 700)
    glVertex2d(45 * 2, 350 * 2);   // (90, 700)
    glVertex2d(45 * 2, 310 * 2);   // (90, 620)
    glEnd();

    //////////////////////////right side


}



void treeDoubleN()
{
    // back tree
glColor3ub(70, 34, 0); // Dark brown shadow
    glBegin(GL_POLYGON);
    glVertex2d(75 * 2, 180 * 2);  // (150, 360)
    glVertex2d(85 * 2, 180 * 2);  // (170, 360)
    glVertex2d(85 * 2, 350 * 2);  // (170, 700)
    glVertex2d(75 * 2, 350 * 2);  // (150, 700)
    glEnd();

   glColor3ub(0, 48, 0); // Deeper shadow with a more muted green

    circle(30 * 2, 40 * 2, 85 * 2, 370 * 2);
    circle(20 * 2, 30 * 2, 90 * 2, 340 * 2);
    circle(20 * 2, 30 * 2, 65 * 2, 395 * 2);

    // forward tree
  glColor3ub(0, 40, 0); // Even darker green shadow for more depth
    circle(40 * 2, 50 * 2, 45 * 2, 360 * 2);
glColor3ub(0, 40, 0); // Even darker green shadow for more depth
    circle(30 * 2, 30 * 2, 60 * 2, 330 * 2);
    circle(20 * 2, 30 * 2, 30 * 2, 300 * 2);
    circle(20 * 2, 30 * 2, 60 * 2, 300 * 2);

glColor3ub(70, 34, 0); // Dark brown shadow
    glBegin(GL_POLYGON);
    glVertex2d(40 * 2, 180 * 2);   // (80, 360)
    glVertex2d(50 * 2, 180 * 2);   // (100, 360)
    glVertex2d(50 * 2, 296 * 2);   // (100, 592)
    glVertex2d(60 * 2, 320 * 2);   // (120, 640)
    glVertex2d(55 * 2, 326 * 2);   // (110, 652)
    glVertex2d(50 * 2, 300 * 2);   // (100, 600)
    glVertex2d(50 * 2, 350 * 2);   // (100, 700)
    glVertex2d(45 * 2, 350 * 2);   // (90, 700)
    glVertex2d(45 * 2, 310 * 2);   // (90, 620)
    glEnd();

    //////////////////////////right side


}

void treeDouble2()
{
// Back tree
glColor3ub(139, 69, 19);
glBegin(GL_POLYGON);
glVertex2d(((75 * 2 + 700 + 80) * 0.85) + 150, ((180 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glVertex2d(((85 * 2 + 700 + 80) * 0.85) + 150, ((180 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glVertex2d(((85 * 2 + 700 + 80) * 0.85) + 150, ((350 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glVertex2d(((75 * 2 + 700 + 80) * 0.85) + 150, ((350 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glEnd();

glColor3ub(0, 128, 0);
circle(30 * 2 * 0.85, 40 * 2 * 0.85, ((85 * 2 + 700 + 80) * 0.85) + 150, ((370 * 2) * 0.85) + 50);  // Adjusted y-coordinate
circle(20 * 2 * 0.85, 30 * 2 * 0.85, ((90 * 2 + 700 + 80) * 0.85) + 150, ((340 * 2) * 0.85) + 50);  // Adjusted y-coordinate
circle(20 * 2 * 0.85, 30 * 2 * 0.85, ((65 * 2 + 700 + 80) * 0.85) + 150, ((395 * 2) * 0.85) + 50);  // Adjusted y-coordinate

// Forward tree
glColor3ub(0, 100, 0);
circle(40 * 2 * 0.85, 50 * 2 * 0.85, ((45 * 2 + 700 + 80) * 0.85) + 150, ((360 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glColor3ub(0, 100, 0);
circle(30 * 2 * 0.85, 30 * 2 * 0.85, ((60 * 2 + 700 + 80) * 0.85) + 150, ((330 * 2) * 0.85) + 50);  // Adjusted y-coordinate
circle(20 * 2 * 0.85, 30 * 2 * 0.85, ((30 * 2 + 700 + 80) * 0.85) + 150, ((300 * 2) * 0.85) + 50);  // Adjusted y-coordinate
circle(20 * 2 * 0.85, 30 * 2 * 0.85, ((60 * 2 + 700 + 80) * 0.85) + 150, ((300 * 2) * 0.85) + 50);  // Adjusted y-coordinate

glColor3ub(139, 69, 19);
glBegin(GL_POLYGON);
glVertex2d(((40 * 2 + 700 + 80) * 0.85) + 150, ((180 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((50 * 2 + 700 + 80) * 0.85) + 150, ((180 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((50 * 2 + 700 + 80) * 0.85) + 150, ((296 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((60 * 2 + 700 + 80) * 0.85) + 150, ((320 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((55 * 2 + 700 + 80) * 0.85) + 150, ((326 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((50 * 2 + 700 + 80) * 0.85) + 150, ((300 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((50 * 2 + 700 + 80) * 0.85) + 150, ((350 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((45 * 2 + 700 + 80) * 0.85) + 150, ((350 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((45 * 2 + 700 + 80) * 0.85) + 150, ((310 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glEnd();




}


void treeDouble2N()
{
// Back tree
glColor3ub(70, 34, 0); // Dark brown shadow
glBegin(GL_POLYGON);
glVertex2d(((75 * 2 + 700 + 80) * 0.85) + 150, ((180 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glVertex2d(((85 * 2 + 700 + 80) * 0.85) + 150, ((180 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glVertex2d(((85 * 2 + 700 + 80) * 0.85) + 150, ((350 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glVertex2d(((75 * 2 + 700 + 80) * 0.85) + 150, ((350 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glEnd();

   glColor3ub(0, 48, 0); // Deeper shadow with a more muted green
circle(30 * 2 * 0.85, 40 * 2 * 0.85, ((85 * 2 + 700 + 80) * 0.85) + 150, ((370 * 2) * 0.85) + 50);  // Adjusted y-coordinate
circle(20 * 2 * 0.85, 30 * 2 * 0.85, ((90 * 2 + 700 + 80) * 0.85) + 150, ((340 * 2) * 0.85) + 50);  // Adjusted y-coordinate
circle(20 * 2 * 0.85, 30 * 2 * 0.85, ((65 * 2 + 700 + 80) * 0.85) + 150, ((395 * 2) * 0.85) + 50);  // Adjusted y-coordinate

// Forward tree
glColor3ub(0, 40, 0); // Even darker green shadow for more depth
circle(40 * 2 * 0.85, 50 * 2 * 0.85, ((45 * 2 + 700 + 80) * 0.85) + 150, ((360 * 2) * 0.85) + 50);  // Adjusted y-coordinate
glColor3ub(0, 40, 0); // Even darker green shadow for more depth
circle(30 * 2 * 0.85, 30 * 2 * 0.85, ((60 * 2 + 700 + 80) * 0.85) + 150, ((330 * 2) * 0.85) + 50);  // Adjusted y-coordinate
circle(20 * 2 * 0.85, 30 * 2 * 0.85, ((30 * 2 + 700 + 80) * 0.85) + 150, ((300 * 2) * 0.85) + 50);  // Adjusted y-coordinate
circle(20 * 2 * 0.85, 30 * 2 * 0.85, ((60 * 2 + 700 + 80) * 0.85) + 150, ((300 * 2) * 0.85) + 50);  // Adjusted y-coordinate

glColor3ub(70, 34, 0); // Dark brown shadow
glBegin(GL_POLYGON);
glVertex2d(((40 * 2 + 700 + 80) * 0.85) + 150, ((180 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((50 * 2 + 700 + 80) * 0.85) + 150, ((180 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((50 * 2 + 700 + 80) * 0.85) + 150, ((296 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((60 * 2 + 700 + 80) * 0.85) + 150, ((320 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((55 * 2 + 700 + 80) * 0.85) + 150, ((326 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((50 * 2 + 700 + 80) * 0.85) + 150, ((300 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((50 * 2 + 700 + 80) * 0.85) + 150, ((350 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((45 * 2 + 700 + 80) * 0.85) + 150, ((350 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glVertex2d(((45 * 2 + 700 + 80) * 0.85) + 150, ((310 * 2) * 0.85) + 50);   // Adjusted y-coordinate
glEnd();




}

void Bushes()
{
// 1st Bushes
// 1st Bushes
// 1st Bushes
glColor3ub(154, 205, 50);
circle(40, 60, 40, 360 * 0.65);  // Reduced the angle size
circle(40, 60, 80, 420 * 0.65);
circle(40, 60, 120, 360 * 0.65);//120,234

// 2nd Bushes
glColor3ub(154, 205, 50);
circle(40, 60, 860, 360 * 0.65);
circle(40, 60, 900, 420 * 0.65);
circle(40, 60, 940, 360 * 0.65);

// 3rd Bushes
glColor3ub(120, 128, 0);
circle(40, 60, 980, 360 * 0.65);
circle(40, 60, 1020, 420 * 0.65);


}

void BushesN()
{
// 1st Bushes
// 1st Bushes
// 1st Bushes
glColor3ub(77, 102, 25); // Dark Olive Green (Darker Shadow of Yellow-Green)
circle(40, 60, 40, 360 * 0.65);  // Reduced the angle size
circle(40, 60, 80, 420 * 0.65);
circle(40, 60, 120, 360 * 0.65);//120,234

// 2nd Bushes
glColor3ub(77, 102, 25); // Dark Olive Green (Darker Shadow of Yellow-Green)
circle(40, 60, 860, 360 * 0.65);
circle(40, 60, 900, 420 * 0.65);
circle(40, 60, 940, 360 * 0.65);

// 3rd Bushes
glColor3ub(40, 45, 0); // Very dark muted green shadow
circle(40, 60, 980, 360 * 0.65);
circle(40, 60, 1020, 420 * 0.65);


}

void flower() {
// Right side flowers
// Right side flowers
glColor3ub(255, 0, 0);
circle(6, 10, 900, 420 - 100);  // Adjusted y-coordinate
circle(6, 10, 910, 410 - 100);  // Adjusted y-coordinate
circle(6, 10, 910, 430 - 100);  // Adjusted y-coordinate
circle(6, 10, 920, 420 - 100);  // Adjusted y-coordinate
glColor3ub(255, 215, 0);
circle(6, 10, 910, 420 - 100);  // Adjusted y-coordinate

glColor3ub(255, 0, 0);
circle(6, 10, 880, 390 - 100);  // Adjusted y-coordinate
circle(6, 10, 880, 370 - 100);  // Adjusted y-coordinate
circle(6, 10, 870, 380 - 100);  // Adjusted y-coordinate
circle(6, 10, 890, 380 - 100);  // Adjusted y-coordinate
glColor3ub(255, 215, 0);
circle(6, 10, 880, 380 - 100);  // Adjusted y-coordinate

glColor3ub(255, 0, 0);
circle(6, 10, 940, 390 - 100);  // Adjusted y-coordinate
circle(6, 10, 940, 370 - 100);  // Adjusted y-coordinate
circle(6, 10, 930, 380 - 100);  // Adjusted y-coordinate
circle(6, 10, 950, 380 - 100);  // Adjusted y-coordinate
glColor3ub(255, 215, 0);
circle(6, 10, 940, 380 - 100);  // Adjusted y-coordinate

// Left side flowers
glColor3ub(255, 0, 0);
circle(6, 10, 60, 410 - 100);   // Adjusted y-coordinate
circle(6, 10, 60, 390 - 100);   // Adjusted y-coordinate
circle(6, 10, 50, 400 - 100);   // Adjusted y-coordinate
circle(6, 10, 70, 400 - 100);   // Adjusted y-coordinate
glColor3ub(255, 215, 0);
circle(6, 10, 60, 400 - 100);   // Adjusted y-coordinate

glColor3ub(255, 215, 0);
circle(6, 10, 20, 430 - 100);   // Adjusted y-coordinate
circle(6, 10, 20, 410 - 100);   // Adjusted y-coordinate
circle(6, 10, 10, 420 - 100);   // Adjusted y-coordinate
circle(6, 10, 30, 420 - 100);   // Adjusted y-coordinate
glColor3ub(255, 0, 0);
circle(6, 10, 20, 420 - 100);
}



void flowerN() {
// Right side flowers
// Right side flowers
glColor3ub(90, 0, 0); // Very Dark Red
circle(6, 10, 900, 420 - 100);  // Adjusted y-coordinate
circle(6, 10, 910, 410 - 100);  // Adjusted y-coordinate
circle(6, 10, 910, 430 - 100);  // Adjusted y-coordinate
circle(6, 10, 920, 420 - 100);  // Adjusted y-coordinate
glColor3ub(102, 86, 0); // Deep Dark Gold
circle(6, 10, 910, 420 - 100);  // Adjusted y-coordinate

glColor3ub(90, 0, 0); // Very Dark Red
circle(6, 10, 880, 390 - 100);  // Adjusted y-coordinate
circle(6, 10, 880, 370 - 100);  // Adjusted y-coordinate
circle(6, 10, 870, 380 - 100);  // Adjusted y-coordinate
circle(6, 10, 890, 380 - 100);  // Adjusted y-coordinate
glColor3ub(102, 86, 0); // Deep Dark Gold
circle(6, 10, 880, 380 - 100);  // Adjusted y-coordinate

glColor3ub(90, 0, 0); // Very Dark Red
circle(6, 10, 940, 390 - 100);  // Adjusted y-coordinate
circle(6, 10, 940, 370 - 100);  // Adjusted y-coordinate
circle(6, 10, 930, 380 - 100);  // Adjusted y-coordinate
circle(6, 10, 950, 380 - 100);  // Adjusted y-coordinate
glColor3ub(102, 86, 0); // Deep Dark Gold
circle(6, 10, 940, 380 - 100);  // Adjusted y-coordinate

// Left side flowers
glColor3ub(90, 0, 0); // Very Dark Red
circle(6, 10, 60, 410 - 100);   // Adjusted y-coordinate
circle(6, 10, 60, 390 - 100);   // Adjusted y-coordinate
circle(6, 10, 50, 400 - 100);   // Adjusted y-coordinate
circle(6, 10, 70, 400 - 100);   // Adjusted y-coordinate
glColor3ub(102, 86, 0); // Deep Dark Gold
circle(6, 10, 60, 400 - 100);   // Adjusted y-coordinate

glColor3ub(102, 86, 0); // Deep Dark Gold
circle(6, 10, 20, 430 - 100);   // Adjusted y-coordinate
circle(6, 10, 20, 410 - 100);   // Adjusted y-coordinate
circle(6, 10, 10, 420 - 100);   // Adjusted y-coordinate
circle(6, 10, 30, 420 - 100);   // Adjusted y-coordinate
glColor3ub(255, 0, 0);
circle(6, 10, 20, 420 - 100);
}





void stars()
{
    glPointSize(2.5);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);

    // Convert each vertex from (-1, 1) to (0, 1000)
    glVertex2f((0.8f + 1) * 500, (0.95f + 1) * 500);
    glVertex2f((0.9f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((0.95f + 1) * 500, (0.7f + 1) * 500);
    glVertex2f((0.8f + 1) * 500, (0.8f + 1) * 500);
    glVertex2f((0.7f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((0.6f + 1) * 500, (0.8f + 1) * 500);
    glVertex2f((0.5f + 1) * 500, (0.75f + 1) * 500);
    glVertex2f((0.4f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((0.3f + 1) * 500, (0.7f + 1) * 500);
    glVertex2f((0.25f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((0.25f + 1) * 500, (0.7f + 1) * 500);
    glVertex2f((0.1f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((0.15f + 1) * 500, (0.75f + 1) * 500);
    glVertex2f((0.0f + 1) * 500, (0.8f + 1) * 500);
    glVertex2f((-0.7f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((-0.8f + 1) * 500, (0.95f + 1) * 500);
    glVertex2f((-0.4f + 1) * 500, (0.8f + 1) * 500);
    glVertex2f((-0.8f + 1) * 500, (0.95f + 1) * 500);
    glVertex2f((-0.9f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((-0.95f + 1) * 500, (0.7f + 1) * 500);
    glVertex2f((-0.8f + 1) * 500, (0.8f + 1) * 500);
    glVertex2f((-0.7f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((-0.6f + 1) * 500, (0.8f + 1) * 500);
    glVertex2f((-0.5f + 1) * 500, (0.75f + 1) * 500);
    glVertex2f((-0.4f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((-0.3f + 1) * 500, (0.7f + 1) * 500);
    glVertex2f((-0.25f + 1) * 500, (0.9f + 1) * 500);
    glVertex2f((-0.25f + 1) * 500, (0.7f + 1) * 500);
    glVertex2f((-0.15f + 1) * 500, (0.75f + 1) * 500);
    glVertex2f((-0.1f + 1) * 500, (0.9f + 1) * 500);

    glEnd();
}


void moon()
{
    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (blue part)
    GLfloat xx = ((-0.5f + 1) / 2) * 1000; // x-coordinate mapped to (0, 1000)
    GLfloat yx = ((0.93f + 1) / 2) * 1000; // y-coordinate mapped to (0, 1000)
    GLfloat radiusx = 0.06f * 500;  // Radius scaled

    // Draw the first circle (blue part)
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 51, 204); // Blue color
    glVertex2f(xx, yx); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            xx + (radiusx * cos(i * twicePi / triangleAmount)),
            yx + (radiusx * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (white part)
    GLfloat x = ((-0.5f + 1) / 2) * 1000; // x-coordinate mapped to (0, 1000)
    GLfloat y = ((0.9f + 1) / 2) * 1000;  // y-coordinate mapped to (0, 1000)
    GLfloat radius = 0.06f * 500;  // Radius scaled

    // Draw the second circle (white part)
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242); // White color
    glVertex2f(x, y); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}







void grass3N()
{
    glLineWidth(4);
    glBegin(GL_LINES);
glColor3ub(0, 51, 0); // Darker Green Shadow

    // Convert coordinates for lines and adjust for movement
    glVertex2f((-0.05f + 1) * 500 + 370, (-0.35f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((0.05f + 1) * 500 + 370, (-0.35f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((0.027f + 1) * 500 + 370, (-0.33f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((-0.027f + 1) * 500 + 370, (-0.33f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((0.0f + 1) * 500 + 370, (-0.3f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((-0.075f + 1) * 500 + 370, (-0.37f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((0.0745f + 1) * 500 + 370, (-0.37f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (red) and adjust for movement
    GLfloat e = (-0.05f + 1) * 500 + 370;
    GLfloat f = (-0.35f + 1) * 500 + 50;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(90, 18, 0); // Muted Dark Red Shadow
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (purple) and adjust for movement
    GLfloat g = (0.05f + 1) * 500 + 370;
    GLfloat h = (-0.35f + 1) * 500 + 50;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(30, 20, 40); // Muted Dark Purple Shadow
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the third circle (yellow) and adjust for movement
    GLfloat a1 = (0.0f + 1) * 500 + 370;
    GLfloat b1 = (-0.3f + 1) * 500 + 50;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(150, 130, 0); // Muted Orange-Yellow Shadow
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void grass4N()
{
    glLineWidth(4);
    glBegin(GL_LINES);
glColor3ub(0, 51, 0); // Darker Green Shadow

    // Convert coordinates for lines and adjust for movement
    glVertex2f((-0.05f + 1) * 500 + 390, (-0.35f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((0.05f + 1) * 500 + 390, (-0.35f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((0.027f + 1) * 500 + 390, (-0.33f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((-0.027f + 1) * 500 + 390, (-0.33f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((0.0f + 1) * 500 + 390, (-0.3f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((-0.075f + 1) * 500 + 390, (-0.37f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((0.0745f + 1) * 500 + 390, (-0.37f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (red) and adjust for movement
    GLfloat e = (-0.05f + 1) * 500 + 390;
    GLfloat f = (-0.35f + 1) * 500 + 150;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(90, 18, 0); // Muted Dark Red Shadow
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (purple) and adjust for movement
    GLfloat g = (0.05f + 1) * 500 + 390;
    GLfloat h = (-0.35f + 1) * 500 + 150;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(30, 20, 40); // Muted Dark Purple Shadow
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the third circle (yellow) and adjust for movement
    GLfloat a1 = (0.0f + 1) * 500 + 390;
    GLfloat b1 = (-0.3f + 1) * 500 + 150;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(150, 130, 0); // Muted Orange-Yellow Shadow
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void grass5N()
{
    glLineWidth(4);
    glBegin(GL_LINES);
glColor3ub(0, 51, 0); // Darker Green Shadow

    // Convert coordinates for lines and adjust for movement
    glVertex2f((-0.05f + 1) * 500 + 420, (-0.35f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((0.05f + 1) * 500 + 420, (-0.35f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((0.027f + 1) * 500 + 420, (-0.33f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((-0.027f + 1) * 500 + 420, (-0.33f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((0.0f + 1) * 500 + 420, (-0.3f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((-0.075f + 1) * 500 + 420, (-0.37f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((0.0745f + 1) * 500 + 420, (-0.37f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (red) and adjust for movement
    GLfloat e = (-0.05f + 1) * 500 + 420;
    GLfloat f = (-0.35f + 1) * 500 + 30;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(90, 18, 0); // Muted Dark Red Shadow
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (purple) and adjust for movement
    GLfloat g = (0.05f + 1) * 500 + 420;
    GLfloat h = (-0.35f + 1) * 500 + 30;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(30, 20, 40); // Muted Dark Purple Shadow
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the third circle (yellow) and adjust for movement
    GLfloat a1 = (0.0f + 1) * 500 + 420;
    GLfloat b1 = (-0.3f + 1) * 500 + 30;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(150, 130, 0); // Muted Orange-Yellow Shadow
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void grass6N()
{
    glLineWidth(4);
    glBegin(GL_LINES);
glColor3ub(0, 51, 0); // Darker Green Shadow

    // Convert coordinates for lines and adjust for movement
    glVertex2f((-0.05f + 1) * 500 + 390 + 30, (-0.35f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((0.05f + 1) * 500 + 390 + 30, (-0.35f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((0.027f + 1) * 500 + 390 + 30, (-0.33f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((-0.027f + 1) * 500 + 390 + 30, (-0.33f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.3f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((-0.075f + 1) * 500 + 390 + 30, (-0.37f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((0.0745f + 1) * 500 + 390 + 30, (-0.37f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (red) and adjust for movement
    GLfloat e = (-0.05f + 1) * 500 + 390 + 30;
    GLfloat f = (-0.35f + 1) * 500 + 150 + 30;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(90, 18, 0); // Muted Dark Red Shadow
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (purple) and adjust for movement
    GLfloat g = (0.05f + 1) * 500 + 390 + 30;
    GLfloat h = (-0.35f + 1) * 500 + 150 + 30;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(30, 20, 40); // Muted Dark Purple Shadow
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the third circle (yellow) and adjust for movement
    GLfloat a1 = (0.0f + 1) * 500 + 390 + 30;
    GLfloat b1 = (-0.3f + 1) * 500 + 150 + 30;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(150, 130, 0); // Muted Orange-Yellow Shadow
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}




void grass8N()
{
    glLineWidth(4);
    glBegin(GL_LINES);
glColor3ub(0, 51, 0); // Darker Green Shadow

    // Adjust coordinates for movement: right by 40 (x-axis) and downward by 40 (y-axis)
    glVertex2f((-0.05f + 1) * 500 + 390 + 30 + 40, (-0.35f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((0.05f + 1) * 500 + 390 + 30 + 40, (-0.35f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((0.027f + 1) * 500 + 390 + 30 + 40, (-0.33f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((-0.027f + 1) * 500 + 390 + 30 + 40, (-0.33f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.3f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((-0.075f + 1) * 500 + 390 + 30 + 40, (-0.37f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((0.0745f + 1) * 500 + 390 + 30 + 40, (-0.37f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Adjust coordinates for the first circle (red)
    GLfloat e = (-0.05f + 1) * 500 + 390 + 30 + 40;
    GLfloat f = (-0.35f + 1) * 500 + 150 + 30 - 40;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(90, 18, 0); // Muted Dark Red Shadow
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

glColor3ub(30, 20, 40); // Muted Dark Purple Shadow
    GLfloat g = (0.05f + 1) * 500 + 390 + 30 + 40;
    GLfloat h = (-0.35f + 1) * 500 + 150 + 30 - 40;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(79, 58, 118); // Purple color
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Adjust coordinates for the third circle (yellow)
    GLfloat a1 = (0.0f + 1) * 500 + 390 + 30 + 40;
    GLfloat b1 = (-0.3f + 1) * 500 + 150 + 30 - 40;

    glBegin(GL_TRIANGLE_FAN);
glColor3ub(150, 130, 0); // Muted Orange-Yellow Shadow
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}















void grass3()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);

    // Convert coordinates for lines and adjust for movement
    glVertex2f((-0.05f + 1) * 500 + 370, (-0.35f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((0.05f + 1) * 500 + 370, (-0.35f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((0.027f + 1) * 500 + 370, (-0.33f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((-0.027f + 1) * 500 + 370, (-0.33f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((0.0f + 1) * 500 + 370, (-0.3f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((-0.075f + 1) * 500 + 370, (-0.37f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glVertex2f((0.0745f + 1) * 500 + 370, (-0.37f + 1) * 500 + 50);
    glVertex2f((0.0f + 1) * 500 + 370, (-0.4f + 1) * 500 + 50);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (red) and adjust for movement
    GLfloat e = (-0.05f + 1) * 500 + 370;
    GLfloat f = (-0.35f + 1) * 500 + 50;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0); // Red color
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (purple) and adjust for movement
    GLfloat g = (0.05f + 1) * 500 + 370;
    GLfloat h = (-0.35f + 1) * 500 + 50;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(79, 58, 118); // Purple color
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the third circle (yellow) and adjust for movement
    GLfloat a1 = (0.0f + 1) * 500 + 370;
    GLfloat b1 = (-0.3f + 1) * 500 + 50;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0); // Yellow color
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void grass4()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);

    // Convert coordinates for lines and adjust for movement
    glVertex2f((-0.05f + 1) * 500 + 390, (-0.35f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((0.05f + 1) * 500 + 390, (-0.35f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((0.027f + 1) * 500 + 390, (-0.33f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((-0.027f + 1) * 500 + 390, (-0.33f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((0.0f + 1) * 500 + 390, (-0.3f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((-0.075f + 1) * 500 + 390, (-0.37f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glVertex2f((0.0745f + 1) * 500 + 390, (-0.37f + 1) * 500 + 150);
    glVertex2f((0.0f + 1) * 500 + 390, (-0.4f + 1) * 500 + 150);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (red) and adjust for movement
    GLfloat e = (-0.05f + 1) * 500 + 390;
    GLfloat f = (-0.35f + 1) * 500 + 150;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0); // Red color
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (purple) and adjust for movement
    GLfloat g = (0.05f + 1) * 500 + 390;
    GLfloat h = (-0.35f + 1) * 500 + 150;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(79, 58, 118); // Purple color
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the third circle (yellow) and adjust for movement
    GLfloat a1 = (0.0f + 1) * 500 + 390;
    GLfloat b1 = (-0.3f + 1) * 500 + 150;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0); // Yellow color
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void grass5()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);

    // Convert coordinates for lines and adjust for movement
    glVertex2f((-0.05f + 1) * 500 + 420, (-0.35f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((0.05f + 1) * 500 + 420, (-0.35f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((0.027f + 1) * 500 + 420, (-0.33f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((-0.027f + 1) * 500 + 420, (-0.33f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((0.0f + 1) * 500 + 420, (-0.3f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((-0.075f + 1) * 500 + 420, (-0.37f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glVertex2f((0.0745f + 1) * 500 + 420, (-0.37f + 1) * 500 + 30);
    glVertex2f((0.0f + 1) * 500 + 420, (-0.4f + 1) * 500 + 30);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (red) and adjust for movement
    GLfloat e = (-0.05f + 1) * 500 + 420;
    GLfloat f = (-0.35f + 1) * 500 + 30;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0); // Red color
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (purple) and adjust for movement
    GLfloat g = (0.05f + 1) * 500 + 420;
    GLfloat h = (-0.35f + 1) * 500 + 30;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(79, 58, 118); // Purple color
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the third circle (yellow) and adjust for movement
    GLfloat a1 = (0.0f + 1) * 500 + 420;
    GLfloat b1 = (-0.3f + 1) * 500 + 30;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0); // Yellow color
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void grass6()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);

    // Convert coordinates for lines and adjust for movement
    glVertex2f((-0.05f + 1) * 500 + 390 + 30, (-0.35f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((0.05f + 1) * 500 + 390 + 30, (-0.35f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((0.027f + 1) * 500 + 390 + 30, (-0.33f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((-0.027f + 1) * 500 + 390 + 30, (-0.33f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.3f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((-0.075f + 1) * 500 + 390 + 30, (-0.37f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glVertex2f((0.0745f + 1) * 500 + 390 + 30, (-0.37f + 1) * 500 + 150 + 30);
    glVertex2f((0.0f + 1) * 500 + 390 + 30, (-0.4f + 1) * 500 + 150 + 30);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Convert coordinates and radius for the first circle (red) and adjust for movement
    GLfloat e = (-0.05f + 1) * 500 + 390 + 30;
    GLfloat f = (-0.35f + 1) * 500 + 150 + 30;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0); // Red color
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the second circle (purple) and adjust for movement
    GLfloat g = (0.05f + 1) * 500 + 390 + 30;
    GLfloat h = (-0.35f + 1) * 500 + 150 + 30;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(79, 58, 118); // Purple color
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Convert coordinates and radius for the third circle (yellow) and adjust for movement
    GLfloat a1 = (0.0f + 1) * 500 + 390 + 30;
    GLfloat b1 = (-0.3f + 1) * 500 + 150 + 30;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0); // Yellow color
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}




void grass8()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);

    // Adjust coordinates for movement: right by 40 (x-axis) and downward by 40 (y-axis)
    glVertex2f((-0.05f + 1) * 500 + 390 + 30 + 40, (-0.35f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((0.05f + 1) * 500 + 390 + 30 + 40, (-0.35f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((0.027f + 1) * 500 + 390 + 30 + 40, (-0.33f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((-0.027f + 1) * 500 + 390 + 30 + 40, (-0.33f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.3f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((-0.075f + 1) * 500 + 390 + 30 + 40, (-0.37f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glVertex2f((0.0745f + 1) * 500 + 390 + 30 + 40, (-0.37f + 1) * 500 + 150 + 30 - 40);
    glVertex2f((0.0f + 1) * 500 + 390 + 30 + 40, (-0.4f + 1) * 500 + 150 + 30 - 40);

    glEnd();

    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    // Adjust coordinates for the first circle (red)
    GLfloat e = (-0.05f + 1) * 500 + 390 + 30 + 40;
    GLfloat f = (-0.35f + 1) * 500 + 150 + 30 - 40;
    GLfloat radius11 = 0.02f * 500;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 51, 0); // Red color
    glVertex2f(e, f); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius11 * cos(i * twicePi / triangleAmount)),
            f + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Adjust coordinates for the second circle (purple)
    GLfloat g = (0.05f + 1) * 500 + 390 + 30 + 40;
    GLfloat h = (-0.35f + 1) * 500 + 150 + 30 - 40;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(79, 58, 118); // Purple color
    glVertex2f(g, h); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius11 * cos(i * twicePi / triangleAmount)),
            h + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    // Adjust coordinates for the third circle (yellow)
    GLfloat a1 = (0.0f + 1) * 500 + 390 + 30 + 40;
    GLfloat b1 = (-0.3f + 1) * 500 + 150 + 30 - 40;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 0); // Yellow color
    glVertex2f(a1, b1); // Center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a1 + (radius11 * cos(i * twicePi / triangleAmount)),
            b1 + (radius11 * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}













void roadLight()
{
    // Scale factor for increasing size by 15%
    float scale = 1.15;

    // Move upward by 120 units
    float moveUp = 120;

    // Black pole (scaled and moved upward)
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(80 * scale, (50 * scale) + moveUp);
    glVertex2d(85 * scale, (50 * scale) + moveUp);
    glVertex2d(85 * scale, (180 * scale) + moveUp);
    glVertex2d(80 * scale, (180 * scale) + moveUp);
    glEnd();

    // Black horizontal bar (scaled and moved upward)
    glBegin(GL_POLYGON);
    glVertex2d(65 * scale, (150 * scale) + moveUp);
    glVertex2d(100 * scale, (150 * scale) + moveUp);
    glVertex2d(100 * scale, (155 * scale) + moveUp);
    glVertex2d(65 * scale, (155 * scale) + moveUp);
    glEnd();

    // White light (scaled and moved upward)
    glColor3ub(255, 255, 255);
    circle(10 * scale, 15 * scale, 83 * scale, (180 * scale) + moveUp);
}



void roadLight3()
{
    // Scale factor for increasing size by 15%
    float scale = 1.15;

    // Move upward by 120 units
    float moveUp = 120;

    // Move right by 400 + 400 units (along x-axis)
    float moveRight = 400 + 400; // Now moving 800 units to the right

    // Black pole (scaled and moved upward)
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d((80 * scale) + moveRight, (50 * scale) + moveUp);
    glVertex2d((85 * scale) + moveRight, (50 * scale) + moveUp);
    glVertex2d((85 * scale) + moveRight, (180 * scale) + moveUp);
    glVertex2d((80 * scale) + moveRight, (180 * scale) + moveUp);
    glEnd();

    // Black horizontal bar (scaled and moved upward)
    glBegin(GL_POLYGON);
    glVertex2d((65 * scale) + moveRight, (150 * scale) + moveUp);
    glVertex2d((100 * scale) + moveRight, (150 * scale) + moveUp);
    glVertex2d((100 * scale) + moveRight, (155 * scale) + moveUp);
    glVertex2d((65 * scale) + moveRight, (155 * scale) + moveUp);
    glEnd();

    // White light (scaled and moved upward)
    glColor3ub(255, 255, 255);
    circle(10 * scale, 15 * scale, (83 * scale) + moveRight, (180 * scale) + moveUp);
}


void roadLightN()
{
    // Scale factor for increasing size by 15%
    float scale = 1.15;

    // Move upward by 120 units
    float moveUp = 120;

    // Black pole (scaled and moved upward)
glColor3ub(10, 10, 10); // Very dark gray shadow
    glBegin(GL_POLYGON);
    glVertex2d(80 * scale, (50 * scale) + moveUp);
    glVertex2d(85 * scale, (50 * scale) + moveUp);
    glVertex2d(85 * scale, (180 * scale) + moveUp);
    glVertex2d(80 * scale, (180 * scale) + moveUp);
    glEnd();

    // Black horizontal bar (scaled and moved upward)
    glBegin(GL_POLYGON);
    glVertex2d(65 * scale, (150 * scale) + moveUp);
    glVertex2d(100 * scale, (150 * scale) + moveUp);
    glVertex2d(100 * scale, (155 * scale) + moveUp);
    glVertex2d(65 * scale, (155 * scale) + moveUp);
    glEnd();

    // White light (scaled and moved upward)
glColor3f(0.8f, 0.7f, 0.2f); // Soft yellow light
    circle(10 * scale, 15 * scale, 83 * scale, (180 * scale) + moveUp);
}




void roadLight3N()
{
    // Scale factor for increasing size by 15%
    float scale = 1.15;

    // Move upward by 120 units
    float moveUp = 120;

    // Move right by 400 + 400 units (along x-axis)
    float moveRight = 400 + 400; // Now moving 800 units to the right

    // Black pole (scaled and moved upward)
glColor3ub(10, 10, 10); // Very dark gray shadow
    glBegin(GL_POLYGON);
    glVertex2d((80 * scale) + moveRight, (50 * scale) + moveUp);
    glVertex2d((85 * scale) + moveRight, (50 * scale) + moveUp);
    glVertex2d((85 * scale) + moveRight, (180 * scale) + moveUp);
    glVertex2d((80 * scale) + moveRight, (180 * scale) + moveUp);
    glEnd();

    // Black horizontal bar (scaled and moved upward)
    glBegin(GL_POLYGON);
    glVertex2d((65 * scale) + moveRight, (150 * scale) + moveUp);
    glVertex2d((100 * scale) + moveRight, (150 * scale) + moveUp);
    glVertex2d((100 * scale) + moveRight, (155 * scale) + moveUp);
    glVertex2d((65 * scale) + moveRight, (155 * scale) + moveUp);
    glEnd();

    // White light (scaled and moved upward)
glColor3f(0.8f, 0.7f, 0.2f); // Soft yellow light
    circle(10 * scale, 15 * scale, (83 * scale) + moveRight, (180 * scale) + moveUp);
}



void displayDay();
 void displayNight();


int currentMode = 0;

void mouse(int button, int state, int x, int y);
 int flag=0;
void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    if(flag==0)
    {
    cout << "Click Mouse left for Night Scenario" << endl<< endl;
    cout<<"Day Movement interaction:"<<endl<<endl;
    cout << "Click small letter s for stop sun movement " << endl;
    cout <<"Click Capital letter S for restart sun movement "<< endl<<endl;
    cout << "Click small letter x for stop Birds movement " << endl;
    cout <<"Click Capital letter X for restart Birds movement "<< endl<<endl;
    cout << "Click small letter m for stop BatMobile movement " << endl;
    cout <<"Click Capital letter M for restart BatMobile movement "<< endl<<endl;
    cout << "Click small letter u for up the  BatMobile speed " << endl;
    cout <<"Click small letter d for down BatMobile speed "<< endl<<endl;
    cout << "Click small letter b for stop Boat movement " << endl;
    cout << "Click Capital letter B for restart Boat movement "<< endl<<endl<<endl<<endl;

    cout<<"Night Movement interaction:"<<endl<<endl;
    cout << "Click small letter c for stop clouds movement "  << endl;
    cout << "Click Capital letter C for restart clouds movement "<< endl;


    }

     flag=1;

    if (currentMode == 0) {
        displayDay();
    } else {
        displayNight();
    }

    glutSwapBuffers(); // Render now
}



void displayDay() {
    //glClearColor(0.5f, 0.5f, 0.5f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)


     sky();
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////sun/circle/////////////////////////////
   glPushMatrix();
    glTranslatef(480.0f, sunPosition, 0.0f);
glColor3f(1.0f, 0.84f, 0.0f);  // Gold (#FFD700)

    drawSun1(0.0f, 0.0f, 35.0f); // last er ta radius
       // drawCircle(sunPosition, 850.0f, 50.0f);

    glutSolidSphere(50.0f, 50, 50); // Sun as a solid sphere
    glPopMatrix();

   // backgroundtree ();


  ////////////////////////////////////////////cloud///////////////////////////

      river1();
      hillsCropland();

       glPushMatrix();
    glTranslatef(boatPosition1, 0.0f, 0.0f); // Move the boat along the x-axis

    boat();

   glPopMatrix();


    //cropland
      cropland();
          backgroundtree2();//hills background -2
          hills2(); //hills front-1


   //  tree2(); //right side ittle tree
  //  tree(); //big tree with birds --left side
      grass3();
    grass4();
    grass5();
     grass6();
     grass8();
    treeDouble();
    treeDouble2();
             Bushes();
     flower();

//    road();






 //drawCycle(position, angle);

    // Set color for airplane
   glColor3f(0.0f, 0.0f, 1.0f);
    drawPlane();
    updateplane();



//??????????????????????????????????????????????????????????????????????//cyCle finish??????????????????????????????????????????
//      hut();
      //tree();

          // drawGrass();
    // grass1();

       // grass2();
              //  grass3();
                   // backgroundtree();




     hut();
     hut2();
    // house1();


        roadLight();
    roadLight3();
     road1();

    glPushMatrix();
    glTranslatef(batPosition,0.0f, 0.0f);
     batMobile();
     glPopMatrix();

          glPushMatrix();
    glTranslatef(birdPosition, 0.0f, 0.0f); // Move the boat along the x-axis
        bird();
       glPopMatrix();



   // glPushMatrix();
   // glTranslatef(cloudPosition1,0.0f, 0.0f);
    cloud1D();
    cloud2D();
    cloud3D();
   // glPopMatrix();
   // glutSwapBuffers();// Render now
}



void displayNight() {
    //glClearColor(0.5f, 0.5f, 0.5f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

       river1N();

            glPushMatrix();
    glTranslatef(boatPosition1, 0.0f, 0.0f); // Move the boat along the x-axis

    boatN();

   glPopMatrix();

     sky1();
     stars();
     moon();

     /* glPushMatrix();
    glTranslatef(480.0f, sunPosition, 0.0f);
glColor3f(1.0f, 0.84f, 0.0f);  // Gold (#FFD700)

    drawSun(0.0f, 0.0f, 35.0f); // last er ta radius
       // drawCircle(sunPosition, 850.0f, 50.0f);

    glutSolidSphere(50.0f, 50, 50); // Sun as a solid sphere
    glPopMatrix(); */

   // backgroundtree ();


  ////////////////////////////////////////////cloud///////////////////////////







     hillsCroplandN();

    //cropland
      croplandN();
          backgroundtree2N();//hills background -2
          hills2N(); //hills front-1


   //  tree2(); //right side ittle tree
  //  tree(); //big tree with birds --left side

   // grass1N();
  //  grass2N();
    grass3N();
    grass4N();
    grass5N();
     grass6N();
   //  grass7N();
   grass8N();
    treeDoubleN();
    treeDouble2N();
             BushesN();
     flowerN();

//    road();






 //drawCycle(position, angle);

    // Set color for airplane
  /* glColor3f(0.0f, 0.0f, 1.0f);
    drawPlane();
    updateplane();*/





          // drawGrass();
    // grass1();

       // grass2();
              //  grass3();
                   // backgroundtree();




     hutN();
     hut2N();
    // house1();
        roadLightN();
    roadLight3N();
     road1N();
    glPushMatrix();
    glTranslatef(batPosition,0.0f, 0.0f);
     batMobile();
     glPopMatrix();

     birdN();

         glPushMatrix();
    glTranslatef(cloudPosition1,0.0f, 0.0f);
    cloud1N();
    cloud2N();
    cloud3N();
    glPopMatrix();
  // grass1N();

}


//cycle.............................................
/*
void updateCycle(int value) {
    // Move the cycle to the left (decrease position)
    position -= 5.0f; // Change the position (speed)

    if (position < -400) {
        position = 1000.0f; // Reset position to the right side of the screen
    }

    angle += 5.0f; // Rotate wheels

    glutPostRedisplay();
    glutTimerFunc(25, updateCycle, 0); // Call update every 16ms (~60fps)
}
*/




//boat////////////////
void updateBoat1(int value) {
    if(boatMoving1){
    boatPosition1 -= 3.0f; // Move the boat 1 unit to the right
    if (boatPosition1 <-350.0f) {
        boatPosition1 = 1000.0f; // Reset position when out of bounds
    }
    }
    glutPostRedisplay(); // Redisplay with updated position
    glutTimerFunc(25, updateBoat1, 0); // Call `update` every ~16ms (~60fps)
}


void updateBat1(int value) {
        if(batMoving1){
        batPosition+=batSpeed;

        if( batPosition > 1235.0f)
        {
            batPosition=-235;
        }
        }
          glutPostRedisplay(); // Redisplay with updated position

    glutTimerFunc(25, updateBat1, 0); // Call `updateSun` every 25ms
}

void updateBird1(int value) {
        if(birdMoving1){
        birdPosition +=3.0f;
        if(birdPosition>1030)
        {
            birdPosition=80.0f;
        }

        glutPostRedisplay(); // Redisplay with updated position
    }

    glutTimerFunc(25, updateBird1, 0); // Call `updateSun` every 25ms
}
//sun//////////////////
void updateSun1(int value) {
    if (sunMoving) {
        sunPosition += 1.0f; // Move the sun
        if (sunPosition > 1050.0f) {
            sunPosition = 800.0f; // Reset position when out of bounds
        }
          glutPostRedisplay(); // Redisplay with updated position
    }


    glutTimerFunc(25, updateSun1, 0); // Call `updateSun` every 25ms
}


void handleKeyboard1(unsigned char key, int x, int y) {
    switch (key) {
    case 'S': // Start moving the sun
        sunMoving = true;
        break;
    case 's': // Stop moving the sun
        sunMoving = false;
        break;

    case 'C': // Start moving the CLOUDS
        cloudMoving1 = true;
        break;
    case 'c': // Stop moving the CLOUDS
        cloudMoving1 = false;
        break;

    case 'B': // Start moving the boat
        boatMoving1 = true;
        break;
    case 'b': // Stop moving the boat
        boatMoving1 = false;
        break;

    case 'M': // Start moving the batMobile
        batMoving1 = true;
        break;
    case 'm': // Stop moving the boat
        batMoving1 = false;
        break;
    case 'X': // Start moving the bird
        birdMoving1 = true;
        break;
    case 'x': // Stop moving the bird
        birdMoving1 = false;
        break;

    case 'u': // Increase batMobile speed
        batSpeed += 1.0f;
        break;
    case 'd': // Decrease batMobile speed
        if (batSpeed > 1.0f) {
            batSpeed -= 1.0f;
        }
        break;
    }

}

void mouse1(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        // Toggle between modes on left mouse click
        currentMode = 1 - currentMode;
        glutPostRedisplay(); // Trigger a redraw to update the display
    }
}

void init() {
   glClearColor(0.4f, 0.7f, 1.0f, 1.0f); // Light blue background for the sky
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0); // Set coordinate system
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("SCENARIO");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(16, updateBoat1, 0); // Start the timer for boat

//    glutTimerFunc(25, updateCycle, 0); //cycle

    glutKeyboardFunc(handleKeyboard1); // Register keyboard interaction
  //  glutKeyboardFunc(handleKeyboardCloud); // Register keyboard interaction


    glutTimerFunc(25, updateSun1, 0); //sun
    glutTimerFunc(25, updateBat1, 0); //sun
    glutTimerFunc(25, updateBird1, 0); //sun



    glutTimerFunc(25, updateClouds1, 0); //clouds

    glutMouseFunc(mouse1); // Register mouse callback function

    glutMainLoop();
    return 0;
}

//boat,cloud,sun,bat mobile keyboard
