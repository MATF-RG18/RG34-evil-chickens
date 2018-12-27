
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

