#include<GL/glut.h>
       #include <stdio.h>

float xr=0,yr=0;

//globalna promenljiva koje ce mi pomoci da pomeram objekat gore dole levo desno
static void on_keyboard(unsigned char key, int x, int y);
static void on_reshape(int width, int height);
static void on_display(void);
  int width=400;
    int height=400;
int main(int argc,char ** argv){
    
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE|GLUT_DEPTH);    
  
    glutInitWindowSize(width,height);
    glutInitWindowPosition(100,100);
    glutCreateWindow("evil chicken");
    
    
    glutDisplayFunc(on_display);
    
    glutKeyboardFunc(on_keyboard);
    
    
    
    glClearColor(0, 0, 0, 0);
    
    
    
    
    gluOrtho2D(0.2,400,0.1,400);
   
    
    glutMainLoop();
    
    
}



static void on_reshape(int width, int height)
{
   
}
static void on_display(void){
   
    
    
   
  
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(0,0,1);
    
    //napravila sam mali objekat koji ce kasnije biti 
    //igrac
    
    //TODO    //PITATI: Kako u isto vreme da se npr krece i gore i levo? 
    //TODO Napraviti osvetljenje ubaciti kameru
    glBegin(GL_QUADS);
       glVertex2i((20+5*xr),20+5*yr);//mnozila sam sa 5*xr i 5* yr da bi se brze pomerao objekat
       glVertex2i((30+5*xr),20+5*yr);
       glVertex2i((30+5*xr),30+5*yr);
       glVertex2i((20+5*xr),30+5*yr);
    
    glEnd();
    
    
    glFlush();
    glutPostRedisplay();
        glutSwapBuffers();
    
}



static void on_keyboard(unsigned char key, int x, int y)
{
    
    /*
     provere ovog tipa 20+5*xr==0 su da proverim da li mi ne izlazi kockica iz okvira prozara
     */
    switch (key) {
    case 27:
        /* Zavrsava se program. */
        exit(0);
        break;

    case 'a':
    case 'A':
        if(20+5*xr==0){
            xr=xr;
        }
        else{
        xr--;}
                glutPostRedisplay();//levo se pomeramo
        break;
        
    case 'd':
    case 'D':
        if(20+5*xr==width-15){
            xr=xr;
        }
        else{
        
        xr++;}
        glutPostRedisplay();//desno se pomeramo
        break;
    case 'w':
    case 'W'://pomera se gore
        
        if(20+5*yr==height-15){
            yr=yr;
        }else{
        yr++;
        }
        glutPostRedisplay();
        break;
    case 's':
    case 'S'://pomera se dole 
        if(20+5*yr==0){
            yr=yr;
        }else{
        yr--;
        }
        glutPostRedisplay();
        break;
      
        
        
 
}
}