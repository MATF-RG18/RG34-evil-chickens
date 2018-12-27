#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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

    

    glutTimerFunc(1500,on_timer_enemy_fire1,0);
    glutTimerFunc(1800,on_timer_enemy_fire2,0);
    glutTimerFunc(1900,on_timer_enemy_fire3,0);
    glutTimerFunc(600,on_timer_enemy_fire4,0);
    glutTimerFunc(800,on_timer_enemy_fire5,0);
    glutTimerFunc(550,on_timer_enemy_fire6,0);

    glLightModelf(GL_LIGHT_MODEL_TWO_SIDE,1);
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
    
      
      Init_Inidkator_For_Draw_Enemy();
      Init_Indikator_For_Bullet();
      initLight();
      initEnemy();
      initPlayer();
      initObject();
      initGifts();
      initEnemyBullets();
      initBullet();
   
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
        animation_ongoing=0;
        animation_parametars=0;
        unisten=0;
        not_init=1;
        not_init1=1;
        bullet=0;
        X_coor_of_Bullet=0;
        Y_coor_of_Bullet=0;
        x_coor=-0.8;

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
	    	unisten=0;
	    }	    	
	    
	    }
	    glutPostRedisplay();
	    

	    
	    
	
       break;
   
}
}


