#include <GL\glut.h>

void myInit (void)

{

     glClearColor(0.0,0.0,0.0,0.0);

     glMatrixMode(GL_PROJECTION);

     glLoadIdentity();

     gluOrtho2D(0.0, 500.0, 0.0, 400.0);

}


void myDisplay(void)

{

     glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5f,0.5f,0.5f) ;
     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (20, 20);
          glVertex2i (320, 20);

          glVertex2i (20, 200);
          glVertex2i (320, 200);
          glVertex2i (20, 200);
          glVertex2i (20, 20);
          glVertex2i (320, 200);
          glVertex2i (320, 20);


    glEnd();


 glColor3f(1.0f,0.0f,0.0f) ;
glPointSize(4.0);
 glRectf(30,30,100,100);

 glColor3f(1.0f,0.0f,0.0f) ;
glBegin(GL_POLYGON);
        glVertex2i (200,30);
          glVertex2i (200, 100);

          glVertex2i (200, 100);
          glVertex2i (320, 100);

          glVertex2i (320, 100);
          glVertex2i (320, 30);
         glVertex2i (320, 30);
          glVertex2i (200, 30);



    glEnd();


glColor3f(0.0f,0.0f,1.0f) ;
glBegin(GL_POLYGON);

        glVertex2i (120,30);
          glVertex2i (120, 100);

          glVertex2i (120, 100);
          glVertex2i (170, 100);

          glVertex2i (170, 100);
          glVertex2i (170, 30);

         glVertex2i (120, 30);
          glVertex2i (170, 30);


    glEnd();

    glColor3f(0.0f,1.0f,0.0f) ;
    glBegin(GL_POLYGON);

          glVertex2i (20, 200);
          glVertex2i (320, 200);

          glVertex2i (200, 310);
          glVertex2i (320, 200);

          glVertex2i (20, 200);
          glVertex2i (200, 310);



glEnd();




     glFlush();

}
int main (int argc, char **argv)
{

     glutInit (&argc, argv);

     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

     glutInitWindowSize (640, 680);

     glutInitWindowPosition (10, 10);

     glutCreateWindow ("My Sweet Home!");

     glutDisplayFunc (myDisplay);
     myInit();
     glutMainLoop();
     return 0;
}
