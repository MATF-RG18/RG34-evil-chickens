



static void on_timer_move_bullet(int value){
 
  
  if(bullet==1){
    
    if(yr>=1.5)
    {
      bullet=0;
      yr=0;
      
      
    }
    else{
    yr=yr+0.05;}
  }
 
  
  
   glutPostRedisplay();
  glutTimerFunc(10,on_timer_move_bullet,0);
}



static void on_timer_move_enemy(int value){
 //printf("%f\n",x_coor);
  if (animation_ongoing==1)
  {
  	if(x_coor<=(-0.9)){
      x_coor=x_coor+0.1;
      indikator=1;
      //printf("FROM IF");
    }
    else if(indikator==1){
    x_coor=x_coor+0.1;
    indikator=0;
      //printf("from else %f\n",x_coor);
    }
    else{
      x_coor=x_coor-0.1;
      
    }
    glutPostRedisplay();
  }
    
    glutTimerFunc(1000,on_timer_move_enemy,0);
  
}
static void on_timer_show_gifts(int value){
  if (animation_ongoing==1)
  {
  	if((-4.599998)>=gifts1){gifts1=5;} 
  	else if((-4.599998)>=gifts2){gifts2=10;}
  	else if((-4.599998)>=gifts3){gifts3=12;}
  	else if((-4.599998)>=gifts4){gifts4=17;}
 	 else if((-4.599998)>=gifts5){gifts5=25;}
  	else if((-4.599998)>=gifts6){gifts6=29;}
  	else if((-4.599998)>=gifts7){gifts7=30;}
  	else if((-4.599998)>=gifts8){gifts8=40;}
  	else if((-4.599998)>=gifts9){gifts9=50;}

  
  	else{
  
  		gifts1-=0.12;
  		gifts2-=0.2;
  		gifts3-=0.1;
  		gifts4-=0.16;
  		gifts5-=0.3;
  		gifts6-=0.1;
  		gifts7-=0.11;
  		gifts8-=0.22;
  		gifts9-=0.15;
  
 } 

  glutPostRedisplay();
  
  }
  glutTimerFunc(500,on_timer_show_gifts,0);
}
  

static void on_timer_rotate_object_in_left_corner(int value){
	if (animation_ongoing==1)
	{
			animation_parametars+=2;
			
			  
			
			  
			  glutPostRedisplay();
	}

  glutTimerFunc(100,on_timer_rotate_object_in_left_corner,0);
}


static void on_timer_enemy_fire(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        
           
                if(y_t1<=(-4.599998)){
                    y_t1=0;
                }
                else{
                    y_t1=y_t1-0.1;
                }
    }
    
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire,1);
  
}


static void on_timer_enemy_fire1(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        if(wait>=5){
            
                if(y_t2<=(-4.599998)){
                    y_t2=0;
                    wait=0;
                }
                else{
                    y_t2=y_t2-0.1;
                }
            
    }
    }
    wait+=0.5;
   // printf("wait %f\n",wait);
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire1,0);
  
}




static void on_timer_enemy_fire2(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        if(wait1>=9){
            
                if(y_t3<=(-4.599998)){
                    y_t3=0;
                    wait1=0;
                }
                else{
                    y_t3=y_t3-0.1;
                }
            
    }
    }
    wait1+=0.1;
   // printf("wait %f\n",wait1);
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire2,0);
  
}


static void on_timer_enemy_fire3(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        if(wait2>=6){
            
                if(y_t4<=(-4.599998)){
                    y_t4=0;
                    wait2=0;
                }
                else{
                    y_t4=y_t4-0.1;
                }
            
    }
    }
    wait2+=0.1;
    //printf("wait %f\n",wait1);
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire3,0);
  
}


static void on_timer_enemy_fire4(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        if(wait3>=11){
            
                if(y_t5<=(-4.599998)){
                    y_t5=0;
                    wait3=0;
                }
                else{
                    y_t5=y_t5-0.1;
                }
            
    }
    }
    wait3+=0.1;
    //printf("wait %f\n",wait1);
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire4,0);
  
}



static void on_timer_enemy_fire5(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        if(wait4>=10){
            
                if(y_t5<=(-4.599998)){
                    y_t5=0;
                    wait4=0;
                }
                else{
                    y_t5=y_t5-0.1;
                }
            
    }
    }
    wait4+=0.1;
    //printf("wait %f\n",wait1);
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire5,0);
  
}



static void on_timer_enemy_fire6(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        if(wait5>=5){
            
                if(y_t6<=(-4.599998)){
                    y_t6=0;
                    wait5=0;
                }
                else{
                    y_t6=y_t6-0.1;
                }
            
    }
    }
    wait5+=0.1;
    //printf("wait %f\n",wait1);
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire6,0);
  
}



static void on_timer_enemy_fire7(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        if(wait6>=3){
            
                if(y_t7<=(-4.599998)){
                    y_t7=0;
                    wait2=0;
                }
                else{
                    y_t7=y_t7-0.1;
                }
            
    }
    }
    wait6+=0.1;
    //printf("wait %f\n",wait1);
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire7,0);
  
}



static void on_timer_enemy_fire8(int value){
    //printf("aa  ");
    if(animation_ongoing==1){
        
        if(wait7>=10){
            
                if(y_t8<=(-4.599998)){
                    y_t8=0;
                    wait2=0;
                }
                else{
                    y_t8=y_t8-0.1;
                }
            
    }
    }
    wait7+=0.1;
    //printf("wait %f\n",wait1);
    glutPostRedisplay();
    glutTimerFunc(150,on_timer_enemy_fire8,0);
  
}


