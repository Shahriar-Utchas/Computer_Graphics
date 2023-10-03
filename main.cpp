#include <windows.h>
#include <GL/glut.h>

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(-5,5,-5,5,-5,5);
glLineWidth(1);


glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-4.9f, 0.0f);    // x, y
glVertex2f(4.9f, 0.0f);    // x, y
glEnd();



glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.0f, 4.9f);    // x, y
glVertex2f(0.0f, -4.9f);    // x, y
glEnd();



glBegin(GL_TRIANGLES);
glColor3f(1.0f,1.0f,0.0f); //Yellow
glVertex2f(1.0f,-2.5f);
glVertex2f(2.0f,-1.0f);
glVertex2f(3.0f,-2.5f);
glEnd();



glBegin(GL_QUADS);
glColor3f(1.0f,0.0f,0.0f); //Red
glVertex2f(-3.0f,1.0f);
glVertex2f(-3.0f,3.0f);
glVertex2f(-1.0f,3.0f);
glVertex2f(-1.0f,1.0f);
glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f,1.0f,0.0f); //Green
glVertex2f(1.0f,1.0f);
glVertex2f(1.0f,1.8f);
glVertex2f(3.0f,1.8f);
glVertex2f(3.0f,1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3f(0.0f,1.0f,0.0f); //Green
glVertex2f(3.0f,0.6f);
glVertex2f(3.0f,2.2f);
glVertex2f(4.0f,1.4f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3f(0.5f,0.0f,1.0f); //Violet
glVertex2f(-3.0f,-2.0f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(-1.0f,-3.0f);
glEnd();


glFlush();
}


int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(520, 520);
glutCreateWindow("OpenGL Setup");
glutDisplayFunc(display);
glutMainLoop();
return 0;

}
