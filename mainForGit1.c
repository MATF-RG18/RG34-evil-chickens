#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

#define TIMER_ID 0
#define TIMER_INTERVAL 20

float xr=0,yr=0;

int animation_ongoing;
int window_width=400;
int window_height=400;
static void on_display(void);
static void on_keyboard(unsigned char key, int x, int y);
static void on_reshape(int width, int height);
static void on_timer(int value);

int main(int argc, char **argv)
{
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE|GLUT_DEPTH);

    
    glutInitWindowSize(window_width, window_height);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);

    //glutFullScreen();
    
    glutDisplayFunc(on_display);
    glutKeyboardFunc(on_keyboard);
    glutReshapeFunc(on_reshape);
    glEnable(GL_DEPTH_TEST);
    
    glClearColor(0, 0, 0, 0);

   
    glutMainLoop();

    return 0;
}
static void on_reshape(int width, int height)
{
    /* Podesava se viewport. */
    glViewport(0, 0, width, height);

    /* Podesava se projekcija. */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(0, (float) width / height, 1, 10);
}


static void on_display(void)
{
    GLfloat light_position[] = { 1, -1,-1, 1 };

    
    GLfloat light_ambient[] = { 0.0, 0.01, 0.0, 1 };

    
    GLfloat light_diffuse[] = { 0.7, 0.7, 0.7, 1 };

    
    GLfloat light_specular[] = { 0.9, 0.9, 0.9, 1 };

    GLfloat ambient_coeffs[] = { 0, 0.88, 0, 1 };

    
    GLfloat diffuse_coeffs[] = { 0, 0.44, 0.8, 1 };

    
    GLfloat specular_coeffs[] = { 1, 1, 1, 1 };

    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //glMatrixMode(GL_MODELVIEW);
    //glLoadIdentity();
    //gluLookAt(0, 0, -5, 0, 0, 0, 0, 1, 0);
    int shininess=20;
    
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    
    
    glMaterialfv(GL_FRONT, GL_AMBIENT, ambient_coeffs);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse_coeffs);
    glMaterialfv(GL_FRONT, GL_SPECULAR, specular_coeffs);
    glMaterialf(GL_FRONT, GL_SHININESS, shininess);


     glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.8,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.8,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.8,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.8,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
      
    glPopMatrix();
    //....//
    
    
    glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.6,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.6,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.6,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.6,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
      
    glPopMatrix();
    //....//
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.4,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.4,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.4,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.4,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    //....//
    
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.2,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.2,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.2,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.2,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
    
    
    //-------///
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
    //--//
      glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.2,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.2,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.2,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.2,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
    //.../
    
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.4,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.4,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.4,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.4,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
    //..//
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.6,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.6,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.6,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
     glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.6,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
    //--//
     glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.8,0.6,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.8,0.4,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.8,0.2,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
    glPopMatrix();
    
       glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.8,0,0);
        glBegin(GL_POLYGON);
   
	  glVertex3f(0.03, -0.03, 0);
	  glVertex3f(-0.03, -0.03, 0);
	  glVertex3f(-0.03, 0.03, 0);
	  glVertex3f(0.03, 0.03, 0);
      glEnd();
      
    glPopMatrix();
    //--------------------------------------------------//
  
      glPushMatrix();
      
      glTranslatef(0,-0.2,0);
      glColor3f(1, 0, 1);
      glTranslatef(0,-0.7,0);
      glBegin(GL_POLYGON);
   
	  glVertex3f(0.03+xr, -0.03+yr, 0);
	  glVertex3f(-0.03+xr, -0.03+yr, 0);
	  glVertex3f(-0.03+xr, 0.03+yr, 0);
	  glVertex3f(0.03+xr, 0.03+yr, 0);
      glEnd();
      
      glPopMatrix();
      

   
     
      glPushMatrix();
    
    
      glTranslatef(-0.8,0.8,0);//objekat u gornjem levom uglu to ce verovatno biti sunce ili tako neko telo
      glColor3f(1, 1, 0);
      glutSolidSphere(0.1, 40, 40);
   
      glPopMatrix();
      
        
        glutSwapBuffers();
}



static void on_keyboard(unsigned char key, int x, int y)
{
  switch (key) {
    case 27:
        
        exit(0);
        break;
   
     case 'd':
     case 'D':
      
       //printf("%f\n",xr);
       if(xr>=0.9){
	 xr=xr;
	 
      }
      else{
       xr=xr+0.05;
       glutPostRedisplay();}
       
             break;
    case 'a':
     case 'A':
       
     
       //printf("%f\n",xr);
       if(xr<=-0.9){
	 xr=xr;
      }else{
       xr=xr-0.05;
	glutPostRedisplay();}
       break;
        
   
}
}


