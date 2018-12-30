
static void Enemy_kill_you(float XBE,float YBE){
   
     float a=0;
  
  
    if(xr-XBE<=0.000001){
        //TODO poboljsati da me ne ubije svaki put kad se nadjem levo od njega
        a=Y_coor_of_Player-YBE;
        if(a>=-0.10000){
            if(a<=0.1){
                
                ind_Kill_player=1;
                animation_ongoing=0;
                //printf("%d \n",ind_Kill_player);
                
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
  
  if((tmp-tmp1)<=0.00000000001){
    return 1;

  }
  else{
   return 0;

  }
 
   
}

static int check_y_coor(float y){
  
  
   if((Y_coor_of_Bullet-y)<0.00000001){
      return 1;
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

