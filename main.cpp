#include <GL/gl.h>
#include<stdio.h>
#include<math.h>
#include <GL/glut.h>

void Fullcircle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
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
    glFlush();
}

void Halfcircle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 180; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
    glFlush();
}


void display(void){

   glColor3f(0.0f, 1.0f, 0.0f);//Green//face
     Fullcircle(12, 7, 40, 40);

     glColor3f(0.0f, 1.0f, 0.0f);//Green//head
        Fullcircle(5, 4, 40, 47.5);

         glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white//eye
        Fullcircle(2.3, 3, 37.5, 48);

         glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white//eye
        Fullcircle(2.3, 3, 43.5, 48);

          glColor4f(1.0f, 0.5f, 0.0f, 0.0f);//orange//eye
        Fullcircle(1.7, 2.3, 43.5, 48);

          glColor4f(1.0f, 0.5f, 0.0f, 0.0f);//orange//eye
     Fullcircle(1.7, 2.3, 37.5, 48);

glColor3f(0.0f, 0.0f, 0.0f);//Black/eye
        Fullcircle(0.8, 1, 43.5, 47);

   glColor3f(0.0f, 0.0f, 0.0f);//Black//eye
     Fullcircle(0.8, 1, 37.5, 47);


    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white/eye
        Fullcircle(0.3, 0.3, 43.5, 47);

glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white//eye
     Fullcircle(0.3, 0.3, 37.5, 47);


     glColor3f(0.0f, 1.0f, 0.0f);//Green//body
        Fullcircle(15, 10, 20, 35);


         glColor4f(1.0f, 0.5f, 0.0f, 0.0f);//orange/brown//body
        Fullcircle(13, 6, 20, 39);

         glColor3f(0.0f, 1.0f, 0.0f);//Green//feet
        Fullcircle(3, 7, 10, 26.5);

         glColor3f(0.0f, 1.0f, 0.0f);//Green//feet
        Fullcircle(2, 5, 30, 30);

         glColor3f(0.0f, 1.0f, 0.0f);//Green//feet
        Fullcircle(2, 5, 34, 33);

         glColor3f(0.0f, 1.0f, 0.0f);//Green//feet
        Fullcircle(3, 5, 20, 25);

           glColor3f(0.0f, 1.0f, 0.0f);//Green//feet
        Fullcircle(3, 2, 5, 35);

          glColor3f(0.0f, 0.0f, 0.0f);//Black//eye
     Fullcircle(0.5, 1, 39.8, 40);

       glColor3f(0.0f, 0.0f, 0.0f);//Black//eye
     Fullcircle(0.5, 1, 40.8, 40);


          glColor3f(0.0f, 1.0f, 0.0f);//Green//ear
          glBegin(GL_TRIANGLES);
          glVertex3f(37.0f,51.0f,0.0f);
           glVertex3f(39.0f,51.0f,0.0f);
            glVertex3f(38.0f,54.0f,0.0f);
            glEnd();


          glColor3f(0.0f, 1.0f, 0.0f);//Green//ear
          glBegin(GL_TRIANGLES);
          glVertex3f(39.0f,51.0f,0.0f);
           glVertex3f(41.0f,51.0f,0.0f);
            glVertex3f(40.0f,54.0f,0.0f);
            glEnd();

              glColor3f(0.0f, 0.0f, 0.0f);//Black//eye
          glBegin(GL_POLYGON);
          glVertex3f(35.0f,38.0f,0.0f);
           glVertex3f(40.0f,36.0f,0.0f);
            glVertex3f(45.0f,39.0f,0.0f);
            glVertex3f(45.0f,40.0f,0.0f);
            glVertex3f(40.0f,37.0f,0.0f);
             glVertex3f(35.0f,39.0f,0.0f);
            glEnd();



    glFlush();
}


void init(void){
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 100, 0, 100);
}

int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Lab final");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
