
#include<GL/glut.h>
#include <iostream>
using namespace std;
bool updateEnabled = true; // Status update

static int m=0,M=0,v=0,V=0,E=0,r=0,R=0,j=0,J=0,s=0,S=0,U=0,u=0,N=0,X=0,z=0,B=0,b=0,c=0; 
static GLint axis=2;
GLfloat diffuseMaterial[4]={0.5,0.5,0.5,1.0};
/*initialize material property,light soure,lighting model,and depth buffer*/
float scale = 1.0f;

GLfloat cameraX = 0.0; // Initial camera position along the x-axis

void myinit(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glShadeModel(GL_SMOOTH);
glEnable(GL_DEPTH_TEST);
GLfloat mat_specular[]={1.0,1.0,1.0,1.0};
GLfloat light_position[]={1.0,1.0,1.0,0.0};
glMaterialfv(GL_FRONT,GL_DIFFUSE,diffuseMaterial);
glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
glMaterialf(GL_FRONT,GL_SHININESS,25.0);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
//glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
glColorMaterial(GL_FRONT,GL_DIFFUSE);
glEnable(GL_COLOR_MATERIAL);


}


void display(void)
{

glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
          
    //gluLookAt(2.0, 10.0, 1.0, 0.0, 1.25, 0.0, 0.0, 1.0, 0.0);
	gluLookAt(0.3, 5.3, 12.0, 0.0, 1.25, 0.0, 0.0, 1.0, 0.0);    
 
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glColor3f(1.0,0.5,0.0);
glPushMatrix();
glRotatef((GLfloat)-120,1.0,1.0,1.0);
//glLightfv(GL_LIGHT0,GL_POSITION,position);
//glDisable(GL_LIGHTING);
 
    // Create the main cylinder (body of the can)
    GLUquadric* quadric = gluNewQuadric();
    glTranslatef(0.0f, 0.0f, -2.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glScalef(scale, scale, scale);
    gluCylinder(quadric, 5.0, 5.0, 0.5, 1000, 1000);  // Base radius, top radius, height, slices, stacks

	
    // Move to the bottom of the can
    glTranslatef(0.0f, 0.0f, 0.0f);
	glTranslatef(0.0f, 0.0f, 0.3f);
	
    // Create the bottom disk (bottom of the can)
    glColor3f(0.05f,0.2f,10.0f);
    glScalef(scale, scale, scale);
    gluDisk(quadric, 0.0, 5.0, 1000, 1000);  // Inner radius, outer radius, slices, loops

    // Clean up
    gluDeleteQuadric(quadric);

    glFlush();

glPopMatrix(); 


glPushMatrix();
glRotatef((GLfloat)E,0.0,1.0,0.0);
glTranslatef(1.5,1.0,0.0);
//Rotatef((GLfloat)e,0.0,1.0,0.0);
glColor3f(0.7,0.7,0.7);
    glScalef(scale, scale, scale);
glutSolidSphere(0.2,20,8);    //bulan
glPopMatrix();

glPushMatrix();
glRotatef((GLfloat)E,0.0,1.0,0.0);
glTranslatef(-1.5,0.0,1.0);
//Rotatef((GLfloat)e,0.0,1.0,0.0);
glColor3f(1.0,0.8,0.0);
    glScalef(scale, scale, scale);
glutSolidSphere(0.2,20,8); //matahari
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,-2.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,2.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,-4.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,4.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,-6.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,6.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();


glPushMatrix();
glTranslatef(0.0,-8.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();




glPushMatrix();
glTranslatef(0.0,8.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();


glPushMatrix();
glTranslatef(8.0,0.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();
glPushMatrix();
glTranslatef(-8.0,-2.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(6.0,4.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-6.0,4.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(5.0,-4.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-7.0,3.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

 glPushMatrix();
glTranslatef(-7.0,2.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(7.0,-2.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(7.0,-3.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-7.0,-3.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(7.0,2.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(1.0,-7.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(2.0,-5.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,3.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(5.0,-1.0,0.0);
gluLookAt(0.0,10.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.07,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-6.0,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.07,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-0.5,3.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.07,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-1.5,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.07,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-9.0,3.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.07,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(9.0,-5.9,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(6.5,8.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(5.0,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-9.0,6.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.1,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-10.5,9.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.07,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-11.0,-7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.07,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-11.0,5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-7.0,-5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-10.0,3.7,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-7.0,-2.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-8.0,5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.03,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-8.0,-5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();
glPushMatrix();
glTranslatef(-11.0,-4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(6.0,-5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-6.9,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(5.0,-4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(6.0,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(3.0,-4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(4.0,-7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat) b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-4.0,-3.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

  glPushMatrix();
glTranslatef(4.0,-7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
     glTranslatef(11.0,-4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
  glTranslatef(9.0,-9.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
  glTranslatef(8.0,-4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
  glTranslatef(9.0,5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef (7.0,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.9,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(1.0,6.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.8,-5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(3.0,-7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(1.0,5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(2.0,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-9.0,0.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-10.0,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(9.0,3.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-10.0,-6.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(10.0,0.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-9.0,-7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-3.0,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-9.9,-7.5,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(1.0,5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(3.0,6.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-2.0,-5.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-3.0,-2.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-4.0,-8.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(8.3,-7.1,0.0);
gluLookAt (0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-10.0,7.6,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-3.0,7.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-1.4,7.5,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(3.0,6.5,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-6.0,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(-6.0,-6.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.05,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.7,4.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(2.0,2.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,0.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,-1.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
 glTranslatef(0.0,1.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
 glTranslatef(0.0,2.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,0.0,0.0,0.0);
glScalef(200.0,0.0,0.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();

glPushMatrix();
glTranslatef(8.7,9.0,0.0);
gluLookAt(0.0,10.0,2.0,1.0,0.0,0.0,0.0,0.0,1.0);
glRotatef((GLfloat)b,1.0,7.0,5.0);
glColor3f(4.3,3.5,1.0);
glutSolidSphere(0.04,20,8);
glPopMatrix();
glutSwapBuffers();
}

void reshape(int w,int h)
{
glViewport(0,0,(GLsizei)w,(GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(60.0,(GLfloat)w/(GLfloat)h,1.0,20.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt(0.0,0.0,5.0,0.0,0.0,0.0,0.0,1.0,0.0);
}
void keyboard(unsigned char key,int x,int y)
{
	    if (key == 't' || key == 'T') {
        // Tombol 'T' ditekan: toggle status update
        updateEnabled = !updateEnabled;
        if (updateEnabled) {
            cout << "Update diaktifkan." << endl;
        } else {
            cout << "Update dinonaktifkan." << endl;
        }
    }
    
switch(key)
{

    	case 'G':
        case 'g':
            updateEnabled = !updateEnabled; // Mengaktifkan / menonaktifkan pembaruan
            if (updateEnabled) {
                cout << "Animasi diaktifkan." << endl;
            } else {
                cout << "Animasi dinonaktifkan." << endl;
            }
            break;
        case 'k':
        case 'K':
            scale += 1.0f;  // Zoom in

            break;
		case 'L':
        case 'l':
            scale -= 1.0f;  // Zoom out

            break;
        


case 27:exit(0);
   break;
default:break;

}


}




void mouse(int btn, int state, int x, int y) {
    if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        E = (E + 8) % 360;
    }
    else if (btn == GLUT_MIDDLE_BUTTON && state == GLUT_DOWN) {
        if (state == GLUT_UP) return;
        int delta = 0;
        #ifdef __linux__
        delta = x;
        #elif _WIN32
        delta = y;
        #endif

        if (delta > 0) {
            // Scroll mouse ke atas (zoom in)
            scale += 0.1f;
        } else {
            // Scroll mouse ke bawah (zoom out)
            scale -= 0.1f;
        }
    }
    else if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
        E = (E - 8) % 360;
    }
}


void idle() {
    if (!updateEnabled) return; // Jika update tidak diaktifkan, tidak melakukan apa-apa

    E += 1.0f; // Kecepatan rotasi matahari
    glutPostRedisplay();
}


int main(int argc,char **argv)
{

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500,500);
glutInitWindowPosition(100,100);
glutCreateWindow("Dena Kamal D. 2206090- C | UAS GRAFIKOM 2024  ");
myinit();
glutDisplayFunc(display);
glutIdleFunc(idle);
glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
glutMouseFunc(mouse);
glEnable(GL_DEPTH_TEST);
glutMainLoop();
return 0;
		
}