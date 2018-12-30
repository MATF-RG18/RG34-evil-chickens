#define _GNU_SOURCE        
#include <GL/glut.h>     
#include <stdio.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>



   
#include "image.h"
#include "deklaracije.h"
#include "definicije.c"    
#include "initFunction.c"
      
       
#include "on_timer.c"    
    

int main(int argc, char **argv)
 { 
     
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE|GLUT_DEPTH);
   
    
    glutInitWindowSize(window_width, window_height);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]); 
  

      
    glutDisplayFunc(on_display);
    glutKeyboardFunc(on_keyboard);
    glutReshapeFunc(on_reshape);
     glutTimerFunc(1,on_timer_move_bullet,0);
    glutTimerFunc(1000,on_timer_move_enemy,0);      
    glutTimerFunc(500,on_timer_show_gifts,0);
    glutTimerFunc(20,on_timer_rotate_object_in_left_corner,0);
         
    glutTimerFunc(150,on_timer_enemy_fire,1);
    glutTimerFunc(150,on_timer_enemy_fire1,0);
    glutTimerFunc(150,on_timer_enemy_fire2,0);
     
    glutTimerFunc(150,on_timer_enemy_fire3,0);
    glutTimerFunc(150,on_timer_enemy_fire4,0);
    glutTimerFunc(150,on_timer_enemy_fire5,0);
    glutTimerFunc(150,on_timer_enemy_fire6,0);
    glutTimerFunc(150,on_timer_enemy_fire7,0);
    
    initialize(); // za TEksturu
    
    
  
    glLightModelf(GL_LIGHT_MODEL_TWO_SIDE,1);
    glEnable(GL_DEPTH_TEST);
     
    glClearColor(0, 0, 0, 0);
    
    
   
    glutMainLoop(); 

    
    return 0;
}     
 
 


   /*KOD PREUZET SA SAJTA ASISTENTA BOZIDARA ANTICA OVAJ DEO initialize i image.h i image.c*/
static void initialize(void)
{
    /* Objekat koji predstavlja teskturu ucitanu iz fajla. */
    Image * image;

    /* Postavlja se boja pozadine. */
    glClearColor(0, 0, 0, 0);

    /* Ukljucuje se testiranje z-koordinate piksela. */
    glEnable(GL_DEPTH_TEST);

          /* Ukljucuju se teksture. */ 
    glEnable(GL_TEXTURE_2D);
 
    glTexEnvf(GL_TEXTURE_ENV,
              GL_TEXTURE_ENV_MODE,
              GL_REPLACE);

    /*
     * Inicijalizuje se objekat koji ce sadrzati teksture ucitane iz
     * fajla.
     */
    image = image_init(0, 0);

    /* Kreira se prva tekstura. */
    image_read(image, FILENAME0);

    /* Generisu se identifikatori tekstura. */
    glGenTextures(2, names);

    glBindTexture(GL_TEXTURE_2D, names[0]);
    glTexParameteri(GL_TEXTURE_2D,
                    GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, 
                    GL_TEXTURE_WRAP_T, GL_CLAMP); 
    glTexParameteri(GL_TEXTURE_2D,
                    GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, 
                    GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB,
                 image->width, image->height, 0,
                 GL_RGB, GL_UNSIGNED_BYTE, image->pixels);

    /* Kreira se druga tekstura. */
        
    /* Iskljucujemo aktivnu teksturu */
    glBindTexture(GL_TEXTURE_2D, 0); 

    /* Unistava se objekat za citanje tekstura iz fajla. */
    image_done(image);  

    /* Inicijalizujemo matricu rotacije. */  
    glMatrixMode(GL_MODELVIEW);                 
    glLoadIdentity();
    glGetFloatv(GL_MODELVIEW_MATRIX, matrix);
}  
static void on_reshape(int width, int height)   
{
    /* Podesava se viewport. */
    glViewport(0, 0, width, height);

    /* Podesava se projekcija. */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(0, (float) width  / height, 1, 10);
}

  
     
static void on_display(void)
{
       
   
      Init_Inidkator_For_Draw_Enemy();
      Init_Indikator_For_Bullet();
      initLight();
      initEnemy();
      initPlayer();
      initObject();
      initGifts();
      initEnemyBullets();
      initBullet();
      
     initPlanets();     
      
      
   
      glutSwapBuffers();

}

static void initPlanets(){
    
    
     light_diffuse[0]=0.9;
      light_diffuse[1]=0.9;
      light_diffuse[2]=0.9; 
      
      glLightfv(GL_LIGHT0,GL_DIFFUSE,light_diffuse);
      
      diffuse_coeffs[0]=0.5;      diffuse_coeffs[1]=0.5;
      diffuse_coeffs[2]=0.5;
      
      glPushMatrix();
        glTranslatef(0.6,0.8,1);
        glRotatef(animation_parametars,1,1,0);
        
        glutWireSphere(0.1,10,10);
      glPopMatrix();
 
}


static void on_keyboard(unsigned char key, int x, int y)
{
  switch (key) {
    case 27:
	
        exit(0);
        break;
     
     case 'd':
     case 'D':
	if(animation_ongoing==1){
       //printf("%f\n",xr);
       if(xr>=0.9){
	 xr=xr;
	 
      }
      else{
       xr=xr+0.05;
       glutPostRedisplay();}
	}
       
             break;
    case 'a':
     case 'A':     
       
     if(animation_ongoing==1){
       //printf("%f\n",xr); 
       if(xr<=-0.9){
	 xr=xr;
      }else{
       xr=xr-0.05;
	glutPostRedisplay();}}
       break;
     case 'g': 
     case 'G'://start game
       animation_ongoing=1; 
       glutPostRedisplay();
       break; 
     case 'p':         
     case 'P': //pause game
       animation_ongoing=0;
       glutPostRedisplay();
       break;  
       case 'r':  
        case 'R'://restart game
            indikator_za_kraj=0; 
            //indikator_za_kraj=0; 
            indkiator_za_kraj=0;
            rezultat=0;
        xr=0;
        ind_Kill_player=0;  
        animation_ongoing=0;
        animation_parametars=0;
        unisten=0;
        not_init=1;
        not_init1=1;
      Init_Inidkator_For_Draw_Enemy();
      Init_Indikator_For_Bullet();
        initEnemyBullets();
        bullet=0;    
         X_coor_of_Bullet=0;
        Y_coor_of_Bullet=0;
        x_coor=-0.8;
        wait=0;wait1=0; wait2=0;wait3=0;wait4=0;wait5=0;wait6=0;wait7=0;wait8=0;
        y_t=0; y_t1=0;y_t2=0;y_t3=0;y_t4=0;y_t5=0;y_t6=0;y_t7=0;
        gifts1=5;gifts2=10;gifts3=12;gifts4=17;gifts5=25;gifts6=29;gifts7=30;gifts8=40;gifts9=50;
      
       break;
     case 32:
       if(animation_ongoing==1){
        
	    bullet=1; 
	   	if(unisten==1){  
	    initialize_bullet_arry(0);

        }
	    else{
	    	unisten=1;
	    }	    	
	        
	    }
	    glutPostRedisplay();
	    

	    
	    
	
       break;
   
}
}

    
