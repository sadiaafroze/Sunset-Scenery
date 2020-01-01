#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

static float	ta	=  0.0;//translation along x axis
static float	tb	=  0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;
static GLfloat spin = 0.0;
float q= 120.0;

int f=0,g=0;


void circle(float radius_x, float radius_y)
{
    int i = 0;
    float angle = 0.0;

    glBegin(GL_POLYGON);

    for(i = 0; i < 1000; i++)
    {
        angle =  PI * i / 1000;
        glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
    }
    glEnd();
}

void roundcircle(float radius_x, float radius_y)
{
    int i = 0;
    float angle = 0.0;

    glBegin(GL_POLYGON);

    for(i = 0; i < 1000; i++)
    {
        angle =  2 * PI * i / 1000;
        glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
    }
    glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    if(q>=-100.0)
        q=q-0.8;

    else
        q=200;
    glutPostRedisplay();
    glClear(GL_COLOR_BUFFER_BIT);

    //orangesky
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.4,0.0);
    glVertex2d(100,80);
    glColor3f(1.0,0.4,0.0);
    glVertex2d(-100,80);
    glColor3f(1.0,0.2,0.0);
    glVertex2d(-100,0);
    glColor3f(0.99,0.5,0.0);
    glVertex2d(100,0);
    glEnd();
    glPopMatrix();



    //sun

    glPushMatrix();//Circle
    glTranslatef(0,20,0);
    glColor3f(1.0, 1.0, 0.4);
    circle(12,8);
    glPopMatrix();

//Bird start


    glPushMatrix();

    glRotatef(spin,0.0,0.0,1.0);
    glPushMatrix();

    glTranslatef(20.5,30,0);
    glColor3f(0.0, 0.0, 0.0);
    circle(3,2);
    glPopMatrix();

    glPushMatrix();

    glTranslatef(25,33,0);
    glRotatef(60,0,0,1);
    glColor3f(0.0, 0.0, 0.0);
    circle(3,2);
    glPopMatrix();

    glPopMatrix();


//2bird

    glPushMatrix();

    glRotatef(spin,0.0,0.0,1.0);
    glTranslatef(-60,40,0);
    glPushMatrix();

    glTranslatef(20.5,30,0);
    glColor3f(0.0, 0.0, 0.0);
    circle(3,2);
    glPopMatrix();

    glPushMatrix();
    //glRotatef(spin,0.0,1.0,0.0);
    glTranslatef(25,33,0);
    glRotatef(60,0,0,1);
    glColor3f(0.0, 0.0, 0.0);
    circle(3,2);
    glPopMatrix();

    glPopMatrix();


//3bird


    glPushMatrix();

    glRotatef(spin,0.0,0.0,1.0);
    glTranslatef(-30,45,0);
    glPushMatrix();

    glTranslatef(20.5,30,0);
    glColor3f(0.0, 0.0, 0.0);
    circle(3,2);
    glPopMatrix();

    glPushMatrix();
    //glRotatef(spin,0.0,1.0,0.0);
    glTranslatef(25,33,0);
    glRotatef(60,0,0,1);
    glColor3f(0.0, 0.0, 0.0);
    circle(3,2);
    glPopMatrix();

    glPopMatrix();



    glPushMatrix();

    glRotatef(spin,0.0,0.0,1.0);
    glTranslatef(40,17,0);
    glPushMatrix();

    glTranslatef(20.5,30,0);
    glColor3f(0.0, 0.0, 0.0);
    circle(3,2);
    glPopMatrix();

    glPushMatrix();
    //glRotatef(spin,0.0,1.0,0.0);
    glTranslatef(25,33,0);
    glRotatef(60,0,0,1);
    glColor3f(0.0, 0.0, 0.0);
    circle(3,2);
    glPopMatrix();

    glPopMatrix();





//end bird

// Mountain Start
    glPushMatrix();//
    glTranslatef(35,0,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.2,0.0);
    glVertex2d(10,10);
    glColor3f(0.8,0.6,0.0);
    glVertex2d(25,40);
    glColor3f(0.8,0.6,0.0);
    glVertex2d(40,10);

    glEnd();

    glPopMatrix();

    glPushMatrix();//
    glTranslatef(50,0,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.6,0.0);
    glVertex2d(10,10);
    glColor3f(0.8,0.6,0.0);
    glVertex2d(25,50);
    glColor3f(0.4,0.2,0.0);
    glVertex2d(40,10);

    glEnd();

    glPopMatrix();


    glPushMatrix();//
    glTranslatef(-98,0,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.2,0.0);
    glVertex2d(10,10);
    glColor3f(0.8,0.6,0.0);
    glVertex2d(30,45);
    glColor3f(0.8,0.2,0.0);
    glVertex2d(50,10);
    glEnd();
    glPopMatrix();

glPushMatrix();//
    glTranslatef(-80,0,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.2,0.0);
    glVertex2d(10,10);
    glColor3f(0.8,0.6,0.0);
    glVertex2d(30,35);
    glColor3f(0.8,0.2,0.0);
    glVertex2d(50,10);
    glEnd();
    glPopMatrix();




//Mountain End

    //Light House Start
    glPushMatrix();
    glTranslatef(30,-20,0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(35,40);
    glColor3f(0.39,0.14,0.0);
    glVertex2d(38,40);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(38,65);
    glColor3f(0.39,0.14,0.0);
    glVertex2d(35,65);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(30,-20,0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.8,0.4);
    glVertex2d(35,65);
    glColor3f(1.0,0.8,0.4);
    glVertex2d(38,65);
    glColor3f(1.0,0.8,0.4);
    glVertex2d(38,70);
    glColor3f(1.0,0.8,0.4);
    glVertex2d(35,70);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(53,40,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(10,10);
    glColor3f(0.39,0.14,0.0);
    glVertex2d(13,25);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(17,10);

    glEnd();
    glPopMatrix();

    //Light House End



     glPushMatrix();//left of sun
    glTranslatef(-35,20,0);
    glColor3f(0.0, 0.8, 0.0);
    circle(4,4);


      glTranslatef(-5,0,0);
    glColor3f(0.0, 0.4, 0.0);
    circle(4,5);


   glTranslatef(-6,0,0);
glColor3f(0.0, 0.8, 0.0);
    circle(4,6);

      glTranslatef(-7,0,0);
glColor3f(0.0, 1.0, 0.0);
    circle(4,6);

   glTranslatef(-7,0,0);
glColor3f(0.4, 1.0, 0.2);
    circle(4,7);

    glTranslatef(-6,0,0);
glColor3f(0.6, 1.0, 0.2);
    circle(4,5);


    glTranslatef(-6,0,0);
glColor3f(0.0, 0.4, 0.0);
    circle(4,4);

  glTranslatef(-7,0,0);
glColor3f(0.0, 0.2, 0.0);
    circle(4,6);

    glPopMatrix();

 glPushMatrix();//right grass  of the sun
 glRotatef(180,0,1,0);
    glTranslatef(-35,20,0);
    glColor3f(0.0, 0.8, 0.0);
    circle(4,4);


      glTranslatef(-5,0,0);
    glColor3f(0.0, 0.4, 0.0);
    circle(4,5);


   glTranslatef(-6,0,0);
glColor3f(0.0, 0.8, 0.0);
    circle(4,6);

      glTranslatef(-7,0,0);
glColor3f(0.0, 1.0, 0.0);
    circle(4,6);

   glTranslatef(-7,0,0);
glColor3f(0.4, 1.0, 0.2);
    circle(4,7);

    glTranslatef(-6,0,0);
glColor3f(0.6, 1.0, 0.2);
    circle(4,5);


    glTranslatef(-6,0,0);
glColor3f(0.0, 0.4, 0.0);
    circle(4,4);

  glTranslatef(-7,0,0);
glColor3f(0.0, 0.2, 0.0);
    circle(4,6);

    glPopMatrix();

//end of beside sun grass



    //river
   glPushMatrix();
    glTranslatef(0,-60,0);
    glBegin(GL_QUADS);
   glColor3f(0.0,0.4,0.4);//lightcolor
    glVertex2d(100,80);
      glColor3f(0.6,0.8,1.0);
    glVertex2d(-100,80);

     glColor3f(0.4,0.8,0.1);
    glVertex2d(-100,0);
   //glColor3f(0.2,0.6,0.4);
    glColor3f(0.4,0.8,0.1);
    glVertex2d(100,0);

    glEnd();
    glPopMatrix();


    /*glPushMatrix();
    glTranslatef(0,-60,0);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.4,0.4);
    glVertex2d(100,80);
    glColor3f(0.8,1.0,1.0);
    glVertex2d(-100,80);
    glColor3f(0.4,0.8,0.1);
    glVertex2d(-100,0);
    glColor3f(0.0,0.4,0.4);
    glVertex2d(100,0);

    glEnd();
    glPopMatrix();*/
    //end river

//ground
    glPushMatrix();
    glTranslatef(0,-110,0);
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.0);
    glVertex2d(100,80);
    glColor3f(0.6,0.4,0.2);
    glVertex2d(-100,80);
    glColor3f(0.4,0.6,0.0);
    glVertex2d(-100,0);
    glColor3f(0.8,0.6,0.0);
    glVertex2d(100,0);
    glEnd();
    glPopMatrix();

//ground end
    //Boat with wave Start
    glPushMatrix();
    glTranslatef(q-100,0,0);
    glTranslatef(ta,tb,0);

    glPushMatrix();
    glTranslatef(-55,-45,0);
    glBegin(GL_QUADS);
    glColor3f(0.6,0.4,0.2);
    glVertex2d(25,35);
    glColor3f(0.6,0.4,0.2);
    glVertex2d(45,35);
    glColor3f(0.6,0.4,0.2);
    glVertex2d(50,40);
    glColor3f(0.6,0.4,0.2);
    glVertex2d(20,40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(35,40);
    glColor3f(0.39,0.14,0.0);
    glVertex2d(36,40);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(36,90);
    glColor3f(0.39,0.14,0.0);
    glVertex2d(35,90);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.0,0.4);
    glVertex2d(27,42);
    glColor3f(0.4,0.0,0.0);
    glVertex2d(35,42);
    glColor3f(1.0,0.6,0.4);
    glVertex2d(35,90);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.0,0.4);
    glVertex2d(36,42);
    glColor3f(0.4,0.0,0.0);
    glVertex2d(43,42);
    glColor3f(1.0,0.5,0.5);
    glVertex2d(36,75);
    glEnd();
    //Boat End
//waves below boat
    glPopMatrix();
    glPushMatrix();//wave1
    glTranslatef(-10,-11,0);
    glColor3f(0.8, 0.93, 1.0);
    circle(4,3);
    glPopMatrix();
    // glPopMatrix();
    glPushMatrix();//wave2
    glTranslatef(-18,-11,0);
    glColor3f(0.6, 1.0, 0.8);
    circle(4,3);
    glPopMatrix();

    glPushMatrix();//wave3
    glTranslatef(-25,-11,0);
    glColor3f(0.8, 0.93, 1.0);
    circle(4,3);
    glPopMatrix();
    glPushMatrix();//wave4
    glTranslatef(-30,-11,0);
    glColor3f(0.6,1.0,0.8);
    circle(4,3);
    glPopMatrix();

    glPopMatrix();
//boat with wave end



    //swan start
    glPushMatrix();
    glTranslatef(tx,ty,0);
    glPushMatrix();
    //glTranslatef(tx,ty,0);
    glTranslatef(-65,-35,0);


    //beak

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    // glRotatef(90,0,0,1);
    glColor3f(1.0,0.4,0.0);
    glVertex2d(82,25);
    glColor3f(1.0,0.4,0.0);
    glVertex2f(86,25);
    glColor3f(1.0,0.4,0.0);
    glVertex2d(80,22);
    glEnd();

    glPopMatrix();


    glPushMatrix();//Circle face
    glTranslatef(85,25,0);
    glColor3f(1.0, 1.0, 1.0);
    roundcircle(3,2);
    glPopMatrix();


    glPushMatrix();//eye
    glTranslatef(84,25,0);
    glColor3f(0.0, 0.0, 0.0);
    roundcircle(0.5,0.5);
    glPopMatrix();



    glPushMatrix();

    glBegin(GL_QUADS);

// glTranslatef(5,0,0,1);
    glColor3f(1.0,1.0,1.0);
    glVertex2d(86,25);

    glColor3f(1.0,1.0,1.0);
    glVertex2f(88,25);
    glColor3f(1.0,1.0,0.4);
    glVertex2d(90,15);

    glColor3f(1.0,1.0,1.0);
    glVertex2d(86,15);
    glEnd();
    glPopMatrix();




    glPushMatrix();//Circle body
    glTranslatef(93.5,15,0);
    glColor3f(1.0, 1.0, 1.0);
    roundcircle(8,4);
    glPopMatrix();



    glPushMatrix();//wing
    glTranslatef(95,20,0);
    glRotatef(10,0,0,1);
    glRotatef(180,1,0,0);
    glColor3f(1.0, 1.0, 0.4);
    circle(6,4);
    glPopMatrix();

//tail
    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(1.0,1.0,1.0);
    glVertex2d(99,18);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(103,18);
    glColor3f(1.0,1.0,1.0);
    glVertex2d(99,14);
    glEnd();
    glPopMatrix();

    glPopMatrix();

//swan end

//2swan

 glPushMatrix();

 glScalef(0.5,0.5,0);
 //   glTranslatef(tx,ty,0);
    glTranslatef(-69,-35,0);


    //beak

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    // glRotatef(90,0,0,1);
    glColor3f(1.0,0.4,0.0);
    glVertex2d(82,25);
    glColor3f(1.0,0.4,0.0);
    glVertex2f(86,25);
    glColor3f(1.0,0.4,0.0);
    glVertex2d(80,22);
    glEnd();

    glPopMatrix();


    glPushMatrix();//Circle face
    glTranslatef(85,25,0);
    glColor3f(1.0, 1.0, 1.0);
    roundcircle(3,2);
    glPopMatrix();


    glPushMatrix();//eye
    glTranslatef(84,25,0);
    glColor3f(0.0, 0.0, 0.0);
    roundcircle(0.5,0.5);
    glPopMatrix();



    glPushMatrix();

    glBegin(GL_QUADS);

// glTranslatef(5,0,0,1);
    glColor3f(1.0,1.0,1.0);
    glVertex2d(86,25);

    glColor3f(1.0,1.0,1.0);
    glVertex2f(88,25);
    glColor3f(1.0,1.0,0.4);
    glVertex2d(90,15);

    glColor3f(1.0,1.0,1.0);
    glVertex2d(86,15);
    glEnd();
    glPopMatrix();




    glPushMatrix();//Circle body
    glTranslatef(93.5,15,0);
    glColor3f(1.0, 1.0, 1.0);
    roundcircle(8,4);
    glPopMatrix();



    glPushMatrix();//wing
    glTranslatef(95,20,0);
    glRotatef(10,0,0,1);
    glRotatef(180,1,0,0);
    glColor3f(1.0, 1.0, 0.4);
    circle(6,4);
    glPopMatrix();

//tail
    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(1.0,1.0,1.0);
    glVertex2d(99,18);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(103,18);
    glColor3f(1.0,1.0,1.0);
    glVertex2d(99,14);
    glEnd();
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();

//swan end



//First Tree
//1
    glPushMatrix();//start tree
    // glRotatef(180,0,1,0);
    glTranslatef(-85,-44,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(10,10);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(12,25);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(17,10);

    glEnd();

    //2

    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(20,35);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(23,30);
    glColor3f(0.6,0.2,0.0);
    glVertex2f(15,16.5);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(12,25);
    glEnd();


//3

    glTranslatef(7,10,0);
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(20,35);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(23,30);
    glColor3f(0.6,0.2,0.0);
    glVertex2f(15,16.5);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(12,25);


    glEnd();



//leaf1
    glPushMatrix();//Circle
    glTranslatef(12,35,0);
    glColor3f(0.0, 0.6, 0.0);
    circle(8,5);
    glPopMatrix();

//leaf2
    glPushMatrix();//Circle
    glTranslatef(17,40,0);
    glRotatef(-60,0,0,1);
    glColor3f(0.0, 0.5, 0.0);
    circle(10,5);
    glPopMatrix();



//leaf3
    glPushMatrix();//Circle
    glTranslatef(20,45,0);
    glRotatef(-80,0,0,1);
    glColor3f(0.0, 0.6, 0.0);
    circle(10,5);
    glPopMatrix();


//leaf4
    glPushMatrix();//Circle
    glTranslatef(30,43,0);
    glRotatef(60,0,0,1);
    glColor3f(0.0, 0.5, 0.0);
    circle(12,5);
    glPopMatrix();

//leaf5
    glPushMatrix();//Circle
    glTranslatef(35,40,0);
    glRotatef(35,0,0,1);
    glColor3f(0.0, 0.6, 0.0);
    circle(12,5);
    glPopMatrix();


//leaf6
    glPushMatrix();//Circle
    glTranslatef(35,35,0);
    glRotatef(10,0,0,1);
    glColor3f(0.0, 0.5, 0.0);
    circle(12,5);
    glPopMatrix();

    //leaf7
    glPushMatrix();//Circle
    glTranslatef(35,30,0);
    glRotatef(-10,0,0,1);
    glColor3f(0.0, 0.6, 0.0);
    circle(12,5);
    glPopMatrix();

//leaf8
    glPushMatrix();//Circle
    glTranslatef(32,26,0);
    glRotatef(-30,0,0,1);
    glColor3f(0.0, 0.5, 0.0);
    circle(12,5);
    glPopMatrix();

    //leaf9
    glPushMatrix();//Circle
    glTranslatef(22,27,0);
    glRotatef(-70,0,0,1);
    glColor3f(0.0, 0.6, 0.0);
    circle(10,5);
    glPopMatrix();

    glPopMatrix();//end tree

//Second Tree


    glPushMatrix();//start tree
    glRotatef(180,0,1,0);
    glTranslatef(-85,-44,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(10,10);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(12,25);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(17,10);

    glEnd();

    //2

    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(20,35);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(23,30);
    glColor3f(0.6,0.2,0.0);
    glVertex2f(15,16.5);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(12,25);
    glEnd();


//3

    glTranslatef(7,10,0);
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(20,35);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(23,30);
    glColor3f(0.6,0.2,0.0);
    glVertex2f(15,16.5);
    glColor3f(0.6,0.2,0.0);
    glVertex2d(12,25);


    glEnd();



//leaf1
    glPushMatrix();//Circle
    glTranslatef(12,35,0);
    glColor3f(0.0, 0.5, 0.0);
    circle(8,5);
    glPopMatrix();

//leaf2
    glPushMatrix();//Circle
    glTranslatef(17,40,0);
    glRotatef(-60,0,0,1);
    glColor3f(0.0, 0.6, 0.0);
    circle(10,5);
    glPopMatrix();



//leaf3
    glPushMatrix();//Circle
    glTranslatef(20,45,0);
    glRotatef(-80,0,0,1);
    glColor3f(0.0, 0.5, 0.0);
    circle(10,5);
    glPopMatrix();


//leaf4
    glPushMatrix();//Circle
    glTranslatef(30,43,0);
    glRotatef(60,0,0,1);
    glColor3f(0.0, 0.6, 0.0);
    circle(12,5);
    glPopMatrix();

//leaf5
    glPushMatrix();//Circle
    glTranslatef(35,40,0);
    glRotatef(35,0,0,1);
    glColor3f(0.0, 0.5, 0.0);
    circle(12,5);
    glPopMatrix();


//leaf6
    glPushMatrix();//Circle
    glTranslatef(35,35,0);
    glRotatef(10,0,0,1);
    glColor3f(0.0, 0.6, 0.0);
    circle(12,5);
    glPopMatrix();

    //leaf7
    glPushMatrix();//Circle
    glTranslatef(35,30,0);
    glRotatef(-10,0,0,1);
    glColor3f(0.0, 0.5, 0.0);
    circle(12,5);
    glPopMatrix();

//leaf8
    glPushMatrix();//Circle
    glTranslatef(32,26,0);
    glRotatef(-30,0,0,1);
    glColor3f(0.0, 0.6, 0.0);
    circle(12,5);
    glPopMatrix();

    //leaf9
    glPushMatrix();//Circle
    glTranslatef(22,26,0);
    glRotatef(-70,0,0,1);
    glColor3f(0.0, 0.5, 0.0);
    circle(10,5);
    glPopMatrix();

    glPopMatrix();

    //Second end tree


    // Left Rock Start
    //1
    glPushMatrix();
    glTranslatef(0,5,0);
    glPushMatrix();//Circle
    glTranslatef(-70,-50,0);
    glColor3f(0.5, 0.5, 0.5);
    circle(8,8);
    glPopMatrix();

    //2
    glPushMatrix();//Circle
    glTranslatef(-60,-50,0);
    glColor3f(0.5, 0.5, 0.5);
    circle(8,8);
    glPopMatrix();

    //3
    glPushMatrix();//Circle
    glTranslatef(-65,-55,0);
    glColor3f(0.5, 0.4, 0.5);
    circle(8,8);
    glPopMatrix();
    glPopMatrix();

    //Left Rock End

    // Right Rock Start
    //1
    glPushMatrix();
    glRotatef(180,0,1,0);
    glPushMatrix();//Circle
    glTranslatef(-70,-50,0);
    glColor3f(0.5, 0.5, 0.5);
    circle(8,8);
    glPopMatrix();

    //2
    glPushMatrix();//Circle
    glTranslatef(-60,-50,0);
    glColor3f(0.5, 0.5, 0.5);
    circle(8,8);
    glPopMatrix();

    //3
    glPushMatrix();//Circle
    glTranslatef(-65,-55,0);
    glColor3f(0.5, 0.4, 0.5);
    circle(8,8);
    glPopMatrix();
    glPopMatrix();

    //Right Rock End

    // Left Side Grass Start

    //1
    glPushMatrix();
    glPushMatrix();
    glTranslatef(-90,-45,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(10,10);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(11,20);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //2
    glPushMatrix();
    glTranslatef(-87,-45,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.4);
    glVertex2d(10,10);
    glColor3f(0.0,0.8,0.4);
    glVertex2d(11,20);
    glColor3f(0.0,0.8,0.4);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //3
    glPushMatrix();
    glTranslatef(-83,-45,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(9,10);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(13,20);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //3
    glPushMatrix();
    glTranslatef(-80,-45,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.2,0.0);
    glVertex2d(9,10);
    glColor3f(0.0,0.2,0.0);
    glVertex2d(15,20);
    glColor3f(0.0,0.2,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();
    glPopMatrix();
    //Left Side Grass End

    // Right Side Grass Start

    //1
    glPushMatrix();
    glRotatef(180,0,1,0);
    glPushMatrix();
    glTranslatef(-90,-45,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(10,10);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(11,20);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //2
    glPushMatrix();
    glTranslatef(-87,-45,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.4);
    glVertex2d(10,10);
    glColor3f(0.0,0.8,0.4);
    glVertex2d(11,20);
    glColor3f(0.0,0.8,0.4);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //3
    glPushMatrix();
    glTranslatef(-83,-45,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(9,10);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(13,20);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //4
    glPushMatrix();
    glTranslatef(-80,-45,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.2,0.0);
    glVertex2d(9,10);
    glColor3f(0.0,0.2,0.0);
    glVertex2d(15,20);
    glColor3f(0.0,0.2,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();
    glPopMatrix();
    //Right Side Grass End

    // Middle Field Grass Start


    //1st Grass in the middle
    glPushMatrix();

    //1
    glPushMatrix();
    glTranslatef(-35,-55,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.6,0.2);
    glVertex2d(9,10);
    glColor3f(0.2,0.6,0.2);;
    glVertex2d(15,20);
    glColor3f(0.2,0.6,0.2);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //2
    glPushMatrix();
    glTranslatef(-35,-56,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(9,10);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(8,20);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //3
    glPushMatrix();
    glTranslatef(-33,-57,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(9,10);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(15,20);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    glPopMatrix();
    //1st Grass in the middle End

    //2nd Grass in the middle Start
    glPushMatrix();
    glTranslatef(40,-10,0);
    //1
    glPushMatrix();
    glTranslatef(-35,-55,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.2,0.6,0.2);
    glVertex2d(9,10);
    glColor3f(0.2,0.6,0.2);;
    glVertex2d(15,20);
    glColor3f(0.2,0.6,0.2);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //2
    glPushMatrix();
    glTranslatef(-35,-56,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(9,10);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(8,20);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    //3
    glPushMatrix();
    glTranslatef(-33,-57,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(9,10);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(15,20);
    glColor3f(0.6,0.8,0.0);
    glVertex2d(14,10);

    glEnd();

    glPopMatrix();

    glPopMatrix();

    //// Middle Field Grass End

    //Girl Start
    glPushMatrix();
    glTranslatef(tx,ty,0);
    glTranslatef(0,-5,0);

    glPushMatrix();//Face
    glTranslatef(0,-30,0);
    glColor3f(0.0, 0.0, 0.0);
    roundcircle(3,3);
    glPopMatrix();

    glPushMatrix();//hair
    glTranslatef(-3,-29,0);
    glColor3f(0.0, 0.0, 0.0);
    roundcircle(1.8,1.8);
    glPopMatrix();



    glPushMatrix(); //Left Hand part1
    glTranslatef(-9,-44,0);
    glBegin(GL_QUADS);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(10,10);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(12,8);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2f(16,13);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2d(14,13);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //Right Hand part1
    glRotatef(180,0,1,0);
    glTranslatef(-9,-44,0);

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(10,10);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(12,8);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2f(16,13);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2d(14,13);
    glEnd();
    glPopMatrix();

     glPushMatrix(); //Right Hand part2
    //glRotatef(90,1,1,0);
    glTranslatef(-9,-45,0);

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(14,14);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(16,14);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2f(14,22);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2d(12,22);
    glEnd();
    glPopMatrix();


     glPushMatrix(); //Right Hand part2
    glRotatef(180,0,1,0);
    glTranslatef(-9,-45,0);

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(14,14);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(16,14);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2f(14,22);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2d(12,22);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //Right Leg part1
    //glRotatef(180,0,1,0);
    glTranslatef(-9,-59,0);

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(10,8);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(9,8);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2f(10,14);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2d(12,14);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //Left Leg part1
    //glRotatef(180,0,1,0);
    glTranslatef(-12,-58,0);

    glBegin(GL_QUADS);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(10,7);
        glColor3f(1.0, 0.8, 0.6);
        glVertex2d(9,7);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2f(10,14);
       glColor3f(1.0, 0.8, 0.6);
        glVertex2d(12,14);
    glEnd();
    glPopMatrix();

     glPushMatrix(); //Body 1
    glTranslatef(-14,-55,0);
    glBegin(GL_TRIANGLES);
    glColor3f(0.8,0.0,0.4);
    glVertex2d(10,22);
    glColor3f(0.8,0.0,0.4);
    glVertex2d(14,15);
      glColor3f(0.8,0.0,0.4);
    glVertex2d(18,22);

    glEnd();

    glPopMatrix();

    glPushMatrix(); //Body 2
    glTranslatef(-14,-53,0);
    glBegin(GL_TRIANGLES);
     glColor3f(0.8,0.0,0.4);
    glVertex2d(14,15);
    glColor3f(0.8,0.0,0.4);
    glVertex2d(10,8);
     glColor3f(0.8,0.0,0.4);
    glVertex2d(18,8);

    glEnd();

    glPopMatrix();

    glPushMatrix();//Foot1
    glTranslatef(0.5,-52,0);
    glColor3f(1.0, 0.8, 0.6);
    roundcircle(1.2,1.2);
    glPopMatrix();

     glPushMatrix();//Foot2
    glTranslatef(-2.5,-52,0);
    glColor3f(1.0, 0.8, 0.6);
    roundcircle(1.2,1.2);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,-30,0);
    glBegin(GL_POLYGON);
        glColor3f(0.8,0.6,0.0);
        glVertex2d(4,10);
         glColor3f(0.8,0.6,0.0);
        glVertex2d(9,4);
        glColor3f(0.8,0.6,0.0);
        glVertex2d(11,4);
         glColor3f(0.8,0.6,0.0);
        glVertex2d(16,10);
         glColor3f(0.8,0.6,0.0);
        glVertex2d(12,14);
        glColor3f(0.8,0.6,0.0);
        glVertex2d(8,14);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-7,-25,0);
    glBegin(GL_QUADS);
        glColor3f(0.87,0.87,0.87);
        glVertex2d(4,10);
         glColor3f(0.87,0.87,0.87);
        glVertex2d(4,8);
         glColor3f(0.87,0.87,0.87);
        glVertex2d(10,8);
         glColor3f(0.87,0.87,0.87);
        glVertex2d(10,10);

    glEnd();
    glPopMatrix();
     glPopMatrix();
    //Girl End


    //Ground Forest Start

    //left
    glPushMatrix();
    glPushMatrix();
    glTranslatef(-78,-68,0);
    glColor3f(0.0, 0.5, 0.0);
    roundcircle(8,12);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-70,-77,0);
    glColor3f(0.6, .8, 0.0);
    roundcircle(8,12);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-65,-70,0);
    glColor3f(0.0, 0.5, 0.0);
    roundcircle(8,12);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-60,-77,0);
    glColor3f(0.6, .8, 0.0);
    roundcircle(8,12);
    glPopMatrix();

     glPopMatrix();

     //Right

      glPushMatrix();
      glRotatef(180,0,1,0);
    glPushMatrix();
    glTranslatef(-78,-68,0);
    glColor3f(0.0, 0.5, 0.0);
    roundcircle(8,12);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-70,-77,0);
    glColor3f(0.6, .8, 0.0);
    roundcircle(8,12);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-65,-70,0);
    glColor3f(0.0, 0.5, 0.0);
    roundcircle(8,12);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-60,-77,0);
    glColor3f(0.6, .8, 0.0);
    roundcircle(8,12);
    glPopMatrix();

     glPopMatrix();


    //Ground Forest End
    glPopMatrix();
    glFlush();
}

void init(void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glOrtho(-80.0, 80.0, -80.0,80.0, -1.0, 1.0);
    //glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}



void spinDisplay_left(void)
{
    spin = spin + 0.6;
    if (spin > 40.0)
        spin = spin - 40.0;
    glutPostRedisplay();
}

void spinDisplay_right(void)
{
    spin = spin - 0.6;
    if (spin < 0.0)
        spin = spin +40.0;
    glutPostRedisplay();
}



void my_keyboard(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'l':
        spinDisplay_left();

        break;

    case 'r':
        spinDisplay_right();
        break;

    case 't':
        glutIdleFunc(NULL);
        break;
    case 'g':
        tx+=5;
        break;

    default:
        break;
    }
}
void my_mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
//            spinDisplay_left();
            glutIdleFunc(spinDisplay_left);
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
//            spinDisplay_right();
            glutIdleFunc(spinDisplay_right);
        break;
    default:
        break;
    }
}

void spe_key(int key, int x, int y)
{
    switch (key)
    {

    case GLUT_KEY_LEFT:


        if(tx>=-100 && tx>-20 )
        {
            tx -=2;
        }

        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:

        if(tx>=-100 && tx<=40)
        {
            tx +=2;
        }
        glutPostRedisplay();
        break;

    case GLUT_KEY_DOWN:
        if (ty>=-70 && ty!=0)
            ty -=2;
        glutPostRedisplay();
        break;

    case GLUT_KEY_UP:
        if(ty<=20)
            ty +=2;
        glutPostRedisplay();
        break;
    default:
        break;
    }

}








int main()
{
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 700);
    glutInitWindowPosition (0,0);
    glutCreateWindow ("Push Pop Matrix");
    init();
    glutDisplayFunc(display);
    glutSpecialFunc(spe_key);
    glutKeyboardFunc(my_keyboard);
    glutMouseFunc(my_mouse);
    glutMainLoop();
    return 0;   /* ANSI C requires main to return int. */
}


