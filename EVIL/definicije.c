void writePoints(char *string,float x,float y,float z) 
{  
    char *c;

    glLineWidth(3);
     //sprintf(string, "%d!", points);
    
     asprintf (&string, "%i !",points);

     
     
    glPushMatrix();
    


    glScalef(0.0015,0.0015,0.001);
    
    glLineWidth(2);

    for (c=string; *c != '!'; c++)
      {
          //ovde mi bas odgovara ovaj materijal pa ga opet koristim
         // setMaterial("special roof");
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN , *c);
      }
  glPopMatrix();
}


void writeMessage(char *string,float x,float y,float z) 
{  
    char *c;

    glLineWidth(3);
     //sprintf(string, "%d!", points);
     asprintf (&string, "%s !",poruka);
    

     
     
    glPushMatrix();
    


    glScalef(0.0015,0.0015,0.001);
    
    glLineWidth(2);

    for (c=string; *c != '!'; c++)
      {
          //ovde mi bas odgovara ovaj materijal pa ga opet koristim
         // setMaterial("special roof");
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN , *c);
      }
  glPopMatrix();
}



void writeMessage1(char *string,float x,float y,float z){
    
     char *c;

    glLineWidth(3);
     //sprintf(string, "%d!", points);
     asprintf (&string, "%s !",porukaa);
    

     
     
    glPushMatrix();
    


    glScalef(0.0015,0.0015,0.001);
    
    glLineWidth(2);

    for (c=string; *c != '!'; c++)
      {
          //ovde mi bas odgovara ovaj materijal pa ga opet koristim
         // setMaterial("special roof");
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN , *c);
      }
  glPopMatrix();
    
}


void writeMessage2(char *string,float x,float y,float z){
    
     char *c;

    glLineWidth(3);
     //sprintf(string, "%d!", points);
     asprintf (&string, "%s !",kraj);
    

     
     
    glPushMatrix();
    


    glScalef(0.0015,0.0015,0.001);
    
    glLineWidth(2);

    for (c=string; *c != '!'; c++)
      {
          //ovde mi bas odgovara ovaj materijal pa ga opet koristim
         // setMaterial("special roof");
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN , *c);
      }
  glPopMatrix();
    
}

void writeName(char *string,float x,float y,float z){
    
     char *c;

    glLineWidth(0.01);
     //sprintf(string, "%d!", points);
     asprintf (&string, "%s !",name);
    

     
     
    glPushMatrix();
    


    glScalef(0.0015,0.0019,0.01);
    
    glLineWidth(0.2);

    for (c=string; *c != '!'; c++)
      {
          //ovde mi bas odgovara ovaj materijal pa ga opet koristim
         // setMaterial("special roof");
          glutStrokeCharacter(GLUT_STROKE_ROMAN , *c);
      }
  glPopMatrix();
    
}












static void Enemy_kill_you(float XBE,float YBE){
   
   // printf("%d\n",bullet);
     float a=0;
     float b=0;
     
     b=xr-XBE;
  
     //Imamo ova oba uslova za a i b da bi sto pribliznije bilo kada nas pokogodi metak
     
    if(b>=-0.000001){
        if(b<=0.00000001){
        
        
        
        a=Y_coor_of_Player-YBE;
        if(a>=-0.050000){
            if(a<=0.1){
                
                ind_Kill_player=1;
                animation_ongoing=0;
                indkiator_za_kraj=1;
               // printf("%d \n",ind_Kill_player);
                
            }
            }
        }
    }
    
    
   
}



static void Add_Points(float XG,float YG){

float tmp=xr-XG ;
float tmp1 = Y_coor_of_Player-YG;

		  if(tmp>0){
		  
		  	if(tmp<=0.05000){
		  		
		  		if(tmp1>=-0.1 && tmp1<=0.3){
		  		
		  			points+=5;
		  		}
		  		
		  	}
		  }
		    
	      if(tmp<0){
	      	
		  	if(tmp>=-0.05000){
		  		
		  		if(tmp1>=-0.1 && tmp1<=0.3){
		  			
		  			points+=5;
		  		}
		  		
		  	}
		  }
    
}
static int check_x_coor(float x){
  double tmp=(double)X_coor_of_Bullet;
  double tmp1=(double)x;
  
  if((tmp-tmp1)>=-0.000001){
        if((tmp-tmp1)<=0.00001){
            return 1;
        }

  }
  else{
   return 0;

  }
 
   
}

static int check_y_coor(float y){
  
  
   if((Y_coor_of_Bullet-y)>=-0.000001){
       if((Y_coor_of_Bullet-y)<=0.000001){
            return 1;
       }
   }
   
   else{
    return 0;
   }  
}



int Win(){
	int count=0;
	for (int i = 0; i < 36; ++i)
	{
		if(Ind_Draw_Enemy[i]==0){
			count++;
		}
	}
	return count;
}



int Kill_the_boos(){
    

   if(bullet!=0){
       rezultat=rezultat+1;
      
}
if(rezultat>=1008.000000){
    indikator_za_kraj=1;    
}

}
