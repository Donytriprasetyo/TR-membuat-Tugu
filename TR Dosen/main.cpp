#include<windows.h>
#include<gl/glut.h>
#include<math.h>
#define M_PI 3.14

float a = 0;
float b = 0;
float c = 0;
float d = 0;
float e = 0;
float f = 0;

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void init(void){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    is_depth=1;
    glEnable(GL_DEPTH_TEST);
    glLineWidth(7);
    glMatrixMode(GL_MODELVIEW);
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y) {
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void idle() {
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case '1':
        f +=3;
        if (f > 360) f = 0;
        glutPostRedisplay();
        break;
    case '3':
        f = f - 3;
        if (f > 360) f = 0;
        glutPostRedisplay();
        break;
    case '2':
        d = d + 3;
        if (d > 360) d = 0;
        glutPostRedisplay();
        break;
    case '8':
        d = d - 3;
        if (d > 360) d = 0;
        glutPostRedisplay();
        break;
    case '4':
        e = e + 3;
        if (e > 360) e = 0;
        glutPostRedisplay();
        break;
    case '6':
        e = e - 3;
        if (e > 360) e = 0;
        glutPostRedisplay();
        break;
    case 'w':
        c = c + 3;
        glutPostRedisplay();
        break;
    case 's':
        c = c - 3;
        glutPostRedisplay();
        break;
    case '7':
        b = b + 3;
        glutPostRedisplay();
        break;
    case '9':
        b = b - 3;
        glutPostRedisplay();
        break;
    case 'a':
        a = a - 3;
        glutPostRedisplay();
        break;
    case 'd':
        a = a + 3;
        glutPostRedisplay();
        break;
    }
}

void tugu(){

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,-2,0);
    glScalef(9,0.3,9);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,0,0);
    glScalef(7,1,7);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,3,0);
    glScalef(6,1,6);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,6,0);
    glScalef(5,1,5);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,10,0);
    glScalef(4,2,4);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,16,0);
    glScalef(3.7,2,3.7);
    glutSolidCube(3);
    glPopMatrix();

    //miring 1
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-5.54, 19.0, 5.54);
    glVertex3f(-5.0, 19.5, 5.0);
    glVertex3f(5.0, 19.5, 5.0);
    glVertex3f(5.54, 19.0, 5.54);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-5.54, 19.0, -5.54);
    glVertex3f(-5.0, 19.5, -5.0);
    glVertex3f(5.0, 19.5, -5.0);
    glVertex3f(5.54, 19.0, -5.54);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(5.54, 19.0, 5.54);
    glVertex3f(5.0, 19.5, 5.0);
    glVertex3f(5.0, 19.5, -5.0);
    glVertex3f(5.54, 19.0, -5.54);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-5.54, 19.0, 5.54);
    glVertex3f(-5.0, 19.5, 5.0);
    glVertex3f(-5.0, 19.5, -5.0);
    glVertex3f(-5.54, 19.0, -5.54);
    glEnd();

    //miring 2
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-5.0, 19.5, 5.0);
    glVertex3f(-5.54, 20.5, 5.54);
    glVertex3f(5.54, 20.5, 5.54);
    glVertex3f(5.0, 19.5, 5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-5.0, 19.5, -5.0);
    glVertex3f(-5.54, 20.5, -5.54);
    glVertex3f(5.54, 20.5, -5.54);
    glVertex3f(5.0, 19.5, -5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(5.0, 19.5, 5.0);
    glVertex3f(5.54, 20.5, 5.54);
    glVertex3f(5.54, 20.5, -5.54);
    glVertex3f(5.0, 19.5, -5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-5.0, 19.5, 5.0);
    glVertex3f(-5.54, 20.5, 5.54);
    glVertex3f(-5.54, 20.5, -5.54);
    glVertex3f(-5.0, 19.5, -5.0);
    glEnd();

    //miring 3
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-5.54, 20.5, 5.54);
    glVertex3f(-4.0, 22.0, 4.0);
    glVertex3f(4.0, 22.0, 4.0);
    glVertex3f(5.54, 20.5, 5.54);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-5.54, 20.5, -5.54);
    glVertex3f(-4.0, 22.0, -4.0);
    glVertex3f(4.0, 22.0, -4.0);
    glVertex3f(5.54, 20.5, -5.54);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(5.54, 20.5, -5.54);
    glVertex3f(4.0, 22.0, -4.0);
    glVertex3f(4.0, 22.0, 4.0);
    glVertex3f(5.54, 20.5, 5.54);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-5.54, 20.5, -5.54);
    glVertex3f(-4.0, 22.0, -4.0);
    glVertex3f(-4.0, 22.0, 4.0);
    glVertex3f(-5.54, 20.5, 5.54);
    glEnd();

    glPushMatrix();
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glTranslatef(0,22.3,0);
    glScalef(2.7,0.5,2.7);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,30.5,0);
    glScalef(2.5,5,2.5);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glTranslatef(0,34,0);
    glScalef(2.7,0.5,2.7);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,37.3,0);
    glScalef(3,0.5,3);
    glutSolidCube(3);
    glPopMatrix();

    //atas tinggi
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-2.74, 38, 2.74);
    glVertex3f(-1.74, 75.0, 1.74);
    glVertex3f(1.74, 75.0, 1.74);
    glVertex3f(2.74, 38, 2.74);
    glEnd();

    //garis
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-0.20, 31, 2.90);
    glVertex3f(-0.15, 72.0, 1.90);
    glVertex3f(0.15, 72.0, 1.90);
    glVertex3f(0.20, 31, 2.90);
    glEnd();

    //garis tengah
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-1.10, 55.3, 2.30);
    glVertex3f(-1.0, 57.8, 2.30);
    glVertex3f(1.0, 57.8, 2.30);
    glVertex3f(1.10, 55.3, 2.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-0.50, 48.0, 2.50);
    glVertex3f(-0.50, 48.8, 2.50);
    glVertex3f(0.50, 48.8, 2.50);
    glVertex3f(0.50, 48.0, 2.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-0.50, 70.0, 1.9);
    glVertex3f(-0.50, 71.0, 1.9);
    glVertex3f(0.50, 71.0, 1.9);
    glVertex3f(0.50, 70.0, 1.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-0.50, 43.0, 2.6);
    glVertex3f(-0.50, 44.0, 2.6);
    glVertex3f(0.50, 44.0, 2.6);
    glVertex3f(0.50, 43.0, 2.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-2.74, 38, -2.74);
    glVertex3f(-1.74, 75.0, -1.74);
    glVertex3f(1.74, 75.0, -1.74);
    glVertex3f(2.74, 38, -2.74);
    glEnd();

    //garis
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-0.20, 31, -2.90);
    glVertex3f(-0.15, 72.0, -1.90);
    glVertex3f(0.15, 72.0, -1.90);
    glVertex3f(0.20, 31, -2.90);
    glEnd();

    //garis tengah
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-1.10, 55.3, -2.30);
    glVertex3f(-1.0, 57.8, -2.30);
    glVertex3f(1.0, 57.8, -2.30);
    glVertex3f(1.10, 55.3, -2.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-0.50, 48.0, -2.50);
    glVertex3f(-0.50, 48.8, -2.50);
    glVertex3f(0.50, 48.8, -2.50);
    glVertex3f(0.50, 48.0, -2.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-0.50, 70.0, -1.9);
    glVertex3f(-0.50, 71.0, -1.9);
    glVertex3f(0.50, 71.0, -1.9);
    glVertex3f(0.50, 70.0, -1.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-0.50, 43.0, -2.6);
    glVertex3f(-0.50, 44.0, -2.6);
    glVertex3f(0.50, 44.0, -2.6);
    glVertex3f(0.50, 43.0, -2.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(2.74, 38, -2.74);
    glVertex3f(1.74, 75.0, -1.74);
    glVertex3f(1.74, 75.0, 1.74);
    glVertex3f(2.74, 38, 2.74);
    glEnd();

    //garis
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(3, 24.5, -0.20);
    glVertex3f(2, 72.0, -0.15);
    glVertex3f(2, 72.0, 0.15);
    glVertex3f(3, 24.5, 0.20);
    glEnd();

    //garis tengah
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(2.3, 55.3, 1.0);
    glVertex3f(2.3, 55.3, -1.10);
    glVertex3f(2.3, 57.8, -1.10);
    glVertex3f(2.3, 57.8, 1.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(2.5, 48.0, 0.50);
    glVertex3f(2.5, 48.0, -0.50);
    glVertex3f(2.5, 48.8, -0.50);
    glVertex3f(2.5, 48.8, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(1.9, 70.0, 0.50);
    glVertex3f(1.9, 70.0, -0.50);
    glVertex3f(1.9, 71.0, -0.50);
    glVertex3f(1.9, 71.0, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(2.6, 43.0, 0.50);
    glVertex3f(2.6, 43.0, -0.50);
    glVertex3f(2.6, 44.0, -0.50);
    glVertex3f(2.6, 44.0, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-2.74, 38, -2.74);
    glVertex3f(-1.74, 75.0, -1.74);
    glVertex3f(-1.74, 75.0, 1.74);
    glVertex3f(-2.74, 38, 2.74);
    glEnd();

    //garis
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3, 24.5, -0.20);
    glVertex3f(-2, 72.0, -0.15);
    glVertex3f(-2, 72.0, 0.15);
    glVertex3f(-3, 24.5, 0.20);
    glEnd();

    //garis tengah
    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-2.3, 55.3, 1.0);
    glVertex3f(-2.3, 55.3, -1.10);
    glVertex3f(-2.3, 57.8, -1.10);
    glVertex3f(-2.3, 57.8, 1.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-2.5, 48.0, 0.50);
    glVertex3f(-2.5, 48.0, -0.50);
    glVertex3f(-2.5, 48.8, -0.50);
    glVertex3f(-2.5, 48.8, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-1.9, 70.0, 0.50);
    glVertex3f(-1.9, 70.0, -0.50);
    glVertex3f(-1.9, 71.0, -0.50);
    glVertex3f(-1.9, 71.0, 0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-2.6, 43.0, 0.50);
    glVertex3f(-2.6, 43.0, -0.50);
    glVertex3f(-2.6, 44.0, -0.50);
    glVertex3f(-2.6, 44.0, 0.50);
    glEnd();

    //pucuk kotak
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-1.5, 75.0, -2.74);
    glVertex3f(1.5, 75.0, -2.74);
    glVertex3f(2.74, 75.0, -1.5);
    glVertex3f(2.74, 75.0, 1.5);
    glVertex3f(1.5, 75.0, 2.74);
    glVertex3f(-1.5, 75.0, 2.74);
    glVertex3f(-2.74, 75.0, 1.5);
    glVertex3f(-2.74, 75.0, -1.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-1.5, 75.0, -2.74);
    glVertex3f(-1.5, 76.5, -2.74);
    glVertex3f(1.5, 76.5, -2.74);
    glVertex3f(1.5, 75.0, -2.74);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(1.5, 76.5, -2.74);
    glVertex3f(1.5, 75.0, -2.74);
    glVertex3f(2.74, 75.0, -1.5);
    glVertex3f(2.74, 76.5, -1.5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(2.74, 75.0, -1.5);
    glVertex3f(2.74, 76.5, -1.5);
    glVertex3f(2.74, 76.5, 1.5);
    glVertex3f(2.74, 75, 1.5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-1.5, 76.5, -2.74);
    glVertex3f(-1.5, 75.0, -2.74);
    glVertex3f(-2.74, 75.0, -1.5);
    glVertex3f(-2.74, 76.5, -1.5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-2.74, 75.0, -1.5);
    glVertex3f(-2.74, 76.5, -1.5);
    glVertex3f(-2.74, 76.5, 1.5);
    glVertex3f(-2.74, 75, 1.5);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-2.74, 76.5, 1.5);
    glVertex3f(-2.74, 75, 1.5);
    glVertex3f(-1.5, 75, 2.74);
    glVertex3f(-1.5, 76.5, 2.74);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-1.5, 75, 2.74);
    glVertex3f(-1.5, 76.5, 2.74);
    glVertex3f(1.5, 76.5, 2.74);
    glVertex3f(1.5, 75, 2.74);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(2.74, 76.5, 1.5);
    glVertex3f(2.74, 75, 1.5);
    glVertex3f(1.5, 75, 2.74);
    glVertex3f(1.5, 76.5, 2.74);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8,0.4,0.1);
    glVertex3f(-1.7, 76.5, -2.94);
    glVertex3f(1.7, 76.5, -2.94);
    glVertex3f(2.94, 76.5, -1.7);
    glVertex3f(2.94, 76.5, 1.7);
    glVertex3f(1.7, 76.5, 2.94);
    glVertex3f(-1.7, 76.5, 2.94);
    glVertex3f(-2.94, 76.5, 1.7);
    glVertex3f(-2.94, 76.5, -1.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-1.7, 77.5, -2.94);
    glVertex3f(-1.7, 76.5, -2.94);
    glVertex3f(1.7, 76.5, -2.94);
    glVertex3f(1.7, 77.5, -2.94);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(1.7, 76.5, -2.94);
    glVertex3f(1.7, 77.5, -2.94);
    glVertex3f(2.94, 77.5, -1.7);
    glVertex3f(2.94, 76.5, -1.7);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(2.94, 77.5, -1.7);
    glVertex3f(2.94, 76.5, -1.7);
    glVertex3f(2.94, 76.5, 1.7);
    glVertex3f(2.94, 77.5, 1.7);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-1.7, 76.5, -2.94);
    glVertex3f(-1.7, 77.5, -2.94);
    glVertex3f(-2.94, 77.5, -1.7);
    glVertex3f(-2.94, 76.5, -1.7);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-2.94, 77.5, -1.7);
    glVertex3f(-2.94, 76.5, -1.7);
    glVertex3f(-2.94, 76.5, 1.7);
    glVertex3f(-2.94, 77.5, 1.7);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-2.94, 76.5, 1.7);
    glVertex3f(-2.94, 77.5, 1.7);
    glVertex3f(-1.7, 77.5, 2.94);
    glVertex3f(-1.7, 76.5, 2.94);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-1.7, 77.5, 2.94);
    glVertex3f(-1.7, 76.5, 2.94);
    glVertex3f(1.7, 76.5, 2.94);
    glVertex3f(1.7, 77.5, 2.94);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(2.94, 76.5, 1.7);
    glVertex3f(2.94, 77.5, 1.7);
    glVertex3f(1.7, 77.5, 2.94);
    glVertex3f(1.7, 76.5, 2.94);
    glEnd();

    //pucuk kotak
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-1.7, 77.5, -2.94);
    glVertex3f(1.7, 77.5, -2.94);
    glVertex3f(2.94, 77.5, -1.7);
    glVertex3f(2.94, 77.5, 1.7);
    glVertex3f(1.7, 77.5, 2.94);
    glVertex3f(-1.7, 77.5, 2.94);
    glVertex3f(-2.94, 77.5, 1.7);
    glVertex3f(-2.94, 77.5, -1.7);
    glEnd();


    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,79,0);
    glScalef(1,1,1);
    glutSolidCube(3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glTranslatef(0,80,0);
    glScalef(1,1,1);
    glRotatef(270,1,0,0);
    glutSolidCone(1.5,15,40,40);
    glPopMatrix();

}

void alas(){
    //ALAS FULL
    glPushMatrix();
    glColor3f(105/255.f, 105/255.f, 105/255.f);
    glTranslatef(0, -10, 0);
    glScalef(40, 0.25, 40);
    glutSolidCube(5);
    glPopMatrix();
    //Rumput
    glPushMatrix();
    glColor3f(34/255.f, 139/255.f, 35/255.f);
    glTranslatef(0, -3, 0);
    glScalef(10, 0.25, 10);
    glutSolidCube(5);
    glPopMatrix();
    //Alas Trotoar
    glPushMatrix();
    glColor3f(211/255.f, 211/255.f, 211/255.f);
    glTranslatef(0, -6, 0);
    glScalef(12.5, 1, 12.5);
    glutSolidCube(5);
    glPopMatrix();
    //Tiang-Tiang
    //Kanan
    //1
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(25, 1.75, 20);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //2
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(25, 1.75, 5);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //3
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(25, 1.75, -5);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //4
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(25, 1.75, -20);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //Depan
    //1
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(20, 1.75, 25);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //2
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(5, 1.75, 25);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //3
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-5, 1.75, 25);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //4
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-20, 1.75, 25);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //Kiri
    //1
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-25, 1.75, 20);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //2
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-25, 1.75, 5);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //3
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-25, 1.75, -5);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //4
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-25, 1.75, -20);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //Belakang
    //1
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-20, 1.75, -25);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //2
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-5, 1.75, -25);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //3
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(5, 1.75, -25);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //4
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(20, 1.75, -25);
    glScalef(0.15, 4, 0.15);
    glutSolidCube(3);
    glPopMatrix();
    //Tiang-Penyambung
    //1
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(20, 7.5, 25);
    glVertex3f(22.5, 2, 22.5);
    glVertex3f(25, 7.5, 20);
    glEnd();
    //2
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(25, 7.5, 20);
    glVertex3f(25, 0.25, 12.5);
    glVertex3f(25, 7.5, 5);
    glEnd();
    //3
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(25, 7.5, 5);
    glVertex3f(25, 0.25, 0);
    glVertex3f(25, 7.5, -5);
    glEnd();
    //4
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(25, 7.5, -5);
    glVertex3f(25, 0.25, -12.5);
    glVertex3f(25, 7.5, -20);
    glEnd();
    //5
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(25, 7.5, -20);
    glVertex3f(22.5, 2, -22.5);
    glVertex3f(20, 7.5, -25);
    glEnd();
    //6
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(20, 7.5, -25);
    glVertex3f(12.5, 0.25, -25);
    glVertex3f(5, 7.5, -25);
    glEnd();
    //7
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(5, 7.5, -25);
    glVertex3f(0.5, 0.25, -25);
    glVertex3f(-5, 7.5, -25);
    glEnd();
    //8
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(-5, 7.5, -25);
    glVertex3f(-12.5, 0.25, -25);
    glVertex3f(-20, 7.5, -25);
    glEnd();
    //9
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(-20, 7.5, -25);
    glVertex3f(-22.5, 0.25, -22.5);
    glVertex3f(-25, 7.5, -20);
    glEnd();
    //10
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(-25, 7.5, -20);
    glVertex3f(-25, 0.25, -12.5);
    glVertex3f(-25, 7.5, -5);
    glEnd();
    //11
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(-25, 7.5, -5);
    glVertex3f(-25, 0.25, 0);
    glVertex3f(-25, 7.5, 5);
    glEnd();
    //12
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(-25, 7.5, 5);
    glVertex3f(-25, 0.25, 12.5);
    glVertex3f(-25, 7.5, 20);
    glEnd();
    //13
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(-25, 7.5, 20);
    glVertex3f(-22.5, 0.25, 22.5);
    glVertex3f(-20, 7.5, 25);
    glEnd();
    //14
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(-20, 7.5, 25);
    glVertex3f(-12.5, 0.25, 25);
    glVertex3f(-5, 7.5, 25);
    glEnd();
    //15
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(-5, 7.5, 25);
    glVertex3f(0, 0.25, 25);
    glVertex3f(5, 7.5, 25);
    glEnd();
    //16
    glBegin(GL_LINE_STRIP);
    glColor3f(0, 0, 0);
    glVertex3f(5, 7.5, 25);
    glVertex3f(12.5, 0.25, 25);
    glVertex3f(20, 7.5, 25);
    glEnd();
}

void hias(){
    //Depan
    //1
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3, 23.5, 3.8);
    glVertex3f(-3, 32.25, 3.8);
    glVertex3f(-2, 32.25, 3.8);
    glVertex3f(-2, 23.5, 3.8);
    glEnd();
    //2
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(3, 23.5, 3.8);
    glVertex3f(3, 32.25, 3.8);
    glVertex3f(2, 32.25, 3.8);
    glVertex3f(2, 23.5, 3.8);
    glEnd();
    //3
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3, 24.5, 3.8);
    glVertex3f(-3, 26.5, 3.8);
    glVertex3f(3, 26.5, 3.8);
    glVertex3f(3, 24.5, 3.8);
    glEnd();
    //4
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-2, 29, 3.8);
    glVertex3f(-3, 31, 3.8);
    glVertex3f(0, 32.5, 3.8);
    glVertex3f(1, 30.5, 3.8);
    glEnd();
    //5
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(2, 29, 3.8);
    glVertex3f(3, 31, 3.8);
    glVertex3f(0, 32.5, 3.8);
    glVertex3f(-1, 30.5, 3.8);
    glEnd();
    //KANAN
    //1
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(3.8, 23.5, -3);
    glVertex3f(3.8, 32.25, -3);
    glVertex3f(3.8, 32.25, -2);
    glVertex3f(3.8, 23.5, -2);
    glEnd();
    //2
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(3.8, 23.5, 3);
    glVertex3f(3.8, 32.25, 3);
    glVertex3f(3.8, 32.25, 2);
    glVertex3f(3.8, 23.5, 2);
    glEnd();
    //3
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(3.8, 24.5, -3);
    glVertex3f(3.8, 26.5, -3);
    glVertex3f(3.8, 26.5, 3);
    glVertex3f(3.8, 24.5, 3);
    glEnd();
    //4
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(3.8, 29, -2);
    glVertex3f(3.8, 31, -3);
    glVertex3f(3.8, 32.5, 0);
    glVertex3f(3.8, 30.5, 1);
    glEnd();
    //5
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(3.8, 29, 2);
    glVertex3f(3.8, 31, 3);
    glVertex3f(3.8, 32.5, 0);
    glVertex3f(3.8, 30.5, -1);
    glEnd();
    //Belakang
    //1
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3, 23.5, -3.8);
    glVertex3f(-3, 32.25, -3.8);
    glVertex3f(-2, 32.25, -3.8);
    glVertex3f(-2, 23.5, -3.8);
    glEnd();
    //2
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(3, 23.5, -3.8);
    glVertex3f(3, 32.25, -3.8);
    glVertex3f(2, 32.25, -3.8);
    glVertex3f(2, 23.5, -3.8);
    glEnd();
    //3
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3, 24.5, -3.8);
    glVertex3f(-3, 26.5, -3.8);
    glVertex3f(3, 26.5, -3.8);
    glVertex3f(3, 24.5, -3.8);
    glEnd();
    //4
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-2, 29, -3.8);
    glVertex3f(-3, 31, -3.8);
    glVertex3f(0, 32.5, -3.8);
    glVertex3f(1, 30.5, -3.8);
    glEnd();
    //5
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(2, 29, -3.8);
    glVertex3f(3, 31, -3.8);
    glVertex3f(0, 32.5, -3.8);
    glVertex3f(-1, 30.5, -3.8);
    glEnd();
    //Kiri
    //1
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3.8, 23.5, -3);
    glVertex3f(-3.8, 32.25, -3);
    glVertex3f(-3.8, 32.25, -2);
    glVertex3f(-3.8, 23.5, -2);
    glEnd();
    //2
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3.8, 23.5, 3);
    glVertex3f(-3.8, 32.25, 3);
    glVertex3f(-3.8, 32.25, 2);
    glVertex3f(-3.8, 23.5, 2);
    glEnd();
    //3
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3.8, 24.5, -3);
    glVertex3f(-3.8, 26.5, -3);
    glVertex3f(-3.8, 26.5, 3);
    glVertex3f(-3.8, 24.5, 3);
    glEnd();
    //4
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3.8, 29, -2);
    glVertex3f(-3.8, 31, -3);
    glVertex3f(-3.8, 32.5, 0);
    glVertex3f(-3.8, 30.5, 1);
    glEnd();
    //5
    glBegin(GL_POLYGON);
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glVertex3f(-3.8, 29, 2);
    glVertex3f(-3.8, 31, 3);
    glVertex3f(-3.8, 32.5, 0);
    glVertex3f(-3.8, 30.5, -1);
    glEnd();

    glPushMatrix();
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glTranslatef(0,74.5,1.9);
    glScalef(0.7,3.5,1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glTranslatef(0,74.5,-1.9);
    glScalef(0.7,3.5,1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glTranslatef(1.9,74.5,0);
    glScalef(0.7,3.5,1);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(218/255.f, 165/255.f, 32/255.f);
    glTranslatef(-1.9,74.5,0);
    glScalef(0.7,3.5,1);
    glutSolidCube(1);
    glPopMatrix();
}

void Display(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 200.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glTranslatef(a, b, c);
    glRotatef(d, 1, 0, 0);
    glRotatef(e, 0, 1, 0);
    glRotatef(f, 0, 0, 1);

    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);

    glPushMatrix();
    glTranslatef(0,-30,0);
    glScalef(1.5,1,1.5);
    tugu();
    alas();
    hias();
    glPopMatrix();
    glutSwapBuffers();
}

void ukuran(int lebar, int tinggi){
    if(tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50, lebar / tinggi, 1, 5000);
    glViewport(-280,-200,1920,1080);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int value) {
    glutPostRedisplay();
    glutTimerFunc(50, timer, 0);
}

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH|GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowSize(1920, 1080);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Tugu Jogja");
    glutDisplayFunc(Display);
    glutReshapeFunc(ukuran);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);

    glutIdleFunc(Display);

    glutTimerFunc(1, timer, 0);
    init();
    glutMainLoop();
}
