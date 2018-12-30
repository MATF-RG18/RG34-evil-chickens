    GLfloat light_position[] = { 1, 1,1, 0 };
    GLfloat light_ambient[] = { 0.0, 0.01, 0.0, 1 };
    GLfloat light_diffuse[] = { 1, 1, 1, 1 };
    GLfloat light_specular[] = { 0.9, 0.9, 0.9, 1 };
      
    GLfloat ambient_coeffs[] = { 0, 1, 1, 1 };
    GLfloat diffuse_coeffs[] = { 0, 0.5, 0.5, 1 };
    GLfloat specular_coeffs[] = { 1, 1, 1, 1 };





static void initialize_bullet_arry(int id){

	 int i=0;
	
	 // kada se poziva nakon unistenja svuda stavljka nulu
	 if(id==1){
		
  		for (i;i<37;i++){
  			Ind_Bullet_isNot_Empty[i]=0;
  	

  		}

	 }else if(id==0){// kada se pozove pritiskom na dugme svuda stavlja 1 osim na sacuavanom mestu

	  	for (i=0;i<37;i++){
	  		
	  		if(Ind_save_index[i]==1){
	  			Ind_Bullet_isNot_Empty[i]=0;
	  		}
  			//else if (Ind_Bullet_isNot_Empty[i]==0){
  				//Ind_Bullet_isNot_Empty[i]=0;
  			//}
  			else{
  				Ind_Bullet_isNot_Empty[i]=1;
  			}

    	
		 }

  	 }
}






static void initEnemy(){
  
	    
	      light_diffuse[0]=0;
	      light_diffuse[1]=0;
	      light_diffuse[2]=0.9;
	      
	      glLightfv(GL_LIGHT0,GL_DIFFUSE,light_diffuse);
	      
	      diffuse_coeffs[0]=0;
	      diffuse_coeffs[1]=0;
	      diffuse_coeffs[2]=0.5;
	      
	      glMaterialfv(GL_FRONT,GL_DIFFUSE,diffuse_coeffs);
	      
	      int test0=0;
	  	  int test1=0;
	    
	      test0=check_x_coor(x_coor);
	      test1=check_y_coor(0.0);
	 	  
	    
	    
	      //poklopile su se koordinate treba da proverim da li je metak vec nekog pogodio ako jeste ovaj test preskacemo
	      if(Ind_Bullet_isNot_Empty[0]==1){
		    	unisten=0;
		      if(test0==1 && test1==1){//metak je pogodio neprijatelja
				Ind_Draw_Enemy[0]=0; // menjamo ovo da ga ne bi iscrtavao
				Ind_save_index[0]=1;//cuvamo indeks da sledeci put Ind_Bullet_isNot_Empty[0]=0;
				unisten=1; // da bi mogli da radimo potrebu inicijalizaciju u main-u
						
				initialize_bullet_arry(1);//ovo u zagadi je id da bi zlani sta treba da radimo sa tim u fji
			
			

		  }
		 }	
		
		
	      
				      //ako ga nije pogodio metak onda ga scrtavamo	
				    if(Ind_Draw_Enemy[0]==1){
					  glPushMatrix();
				        glTranslatef(x_coor,0.0,0);
						glutSolidCube(0.05);
				      glPopMatrix();
				     
				    }

				    test0=test1=0;
				   
				    
				    test0=check_x_coor(x_coor);
				    test1=check_y_coor(0.2);
					
				    if(Ind_Bullet_isNot_Empty[1]==1){
				    	unisten=0;
				    	if(test0==1 && test1==1){
							Ind_Draw_Enemy[1]=0;
							Ind_save_index[1]=1;
							unisten=1;
							
							initialize_bullet_arry(1);

						}
					}
				    
				     
				    
				    if(Ind_Draw_Enemy[1]==1){
				      
					  glPushMatrix(); 
					    glTranslatef(x_coor,0.2,0);
					    glutSolidCube(0.05);
					  glPopMatrix();
				      
				    }

				    
				    
				    
				    test0=test1=0;
				  	
				    test0=check_x_coor(x_coor);
				    test1=check_y_coor(0.4);
				    
				    if(Ind_Bullet_isNot_Empty[2]==1){
				    	unisten=0;
				    	if(test0==1 && test1==1){
							Ind_Draw_Enemy[2]=0;
							Ind_save_index[2]=1;
							unisten=1;
							
							initialize_bullet_arry(1);
						}
					}
					
				      
				      
				  
				    if(Ind_Draw_Enemy[2]==1){
						glPushMatrix();
					  		glTranslatef(x_coor,0.4,0);
					  		glutSolidCube(0.05);
						glPopMatrix();
				  	}
				  
				  
				  	test0=test1=0;
				   
				    test0=check_x_coor(x_coor);
				    test1=check_y_coor(0.6);
				    
				      
				    if(Ind_Bullet_isNot_Empty[3]==1){
				    	unisten=0;
				    	if(test0==1 && test1==1){
							Ind_Draw_Enemy[3]=0;
							Ind_save_index[3]=1;
							unisten=1;
							
							initialize_bullet_arry(1);
						}	
					}
				      
				  
				    if(Ind_Draw_Enemy[3]==1){
						glPushMatrix();
				        	glTranslatef(x_coor,0.6,0);
					  		glutSolidCube(0.05);
				      	glPopMatrix();
				    
				    }
					
					 test0=test1=0;
					
				    test0=check_x_coor(x_coor+0.2);
				    test1=check_y_coor(0);

				    if(Ind_Bullet_isNot_Empty[4]==1){
				    	unisten=0;
				    	if(test0==1 && test1==1){
							Ind_Draw_Enemy[4]=0;
							Ind_save_index[4]=1;
							unisten=1;
							
							initialize_bullet_arry(1);
						}
					}
				      
				 

				    if(Ind_Draw_Enemy[4]==1){
						glPushMatrix();
					    	glTranslatef(x_coor+0.2,0.0,0);
					    	glutSolidCube(0.05); 
						glPopMatrix();
				    }
				     
				    test0=test1=0;
				    
					test0=check_x_coor(x_coor+0.2);
				    test1=check_y_coor(0.2);
				    
				    if(Ind_Bullet_isNot_Empty[5]==1){
				    	unisten=0;
				    if(test0==1 && test1==1){
						Ind_Draw_Enemy[5]=0;
						Ind_save_index[5]=1;
						unisten=1;
						
						initialize_bullet_arry(1);
					}
				}

				    if(Ind_Draw_Enemy[5]==1){
						glPushMatrix();
				        	glTranslatef(x_coor+0.2,0.2,0);
					  		glutSolidCube(0.05);
						glPopMatrix();
				      } 

				    test0=test1=0;
				    
					test0=check_x_coor(x_coor+0.2);
				    test1=check_y_coor(0.4);
				    
				    
				    if(Ind_Bullet_isNot_Empty[6]==1){
				    	unisten=0;
				    
				    if(test0==1 && test1==1){
				      Ind_Draw_Enemy[6]=0;
				      Ind_save_index[6]=1;
					  unisten=1;
					  
					  initialize_bullet_arry(1);
					
				    }
				}

				    if(Ind_Draw_Enemy[6]==1){
				      
				     glPushMatrix();
				        glTranslatef(x_coor+0.2,0.4,0);
				        glutSolidCube(0.05);
				     glPopMatrix();
				      
				    }


				    test0=test1=0;
				    
					test0=check_x_coor(x_coor+0.2);
				    test1=check_y_coor(0.6);



				   if(Ind_Bullet_isNot_Empty[7]==1){
				    	unisten=0;
				  
				    
				    if(test1==1 && test0==1){
				      Ind_Draw_Enemy[7]=0;
				      Ind_save_index[7]=1;
					  unisten=1;
					  
					  initialize_bullet_arry(1);
					
				    }
				   }
				   
				   
				    if(Ind_Draw_Enemy[7]==1){  
				      glPushMatrix();
				      
				        glTranslatef(x_coor+0.2,0.6,0);
				        glutSolidCube(0.05);
				      
				      glPopMatrix();
				    
				      
				    }

				    test0=test1=0;
				  
					test0=check_x_coor(x_coor+0.4);
				    test1=check_y_coor(0.0);

				  if(Ind_Bullet_isNot_Empty[8]==1){
				    	unisten=0;
				  

				    if(test1==1 && test0==1){
				      
				      Ind_Draw_Enemy[8]=0;
				      Ind_save_index[8]=1;
					  unisten=1;
					  	  initialize_bullet_arry(1);
				    }
				    
				   }
				    if(Ind_Draw_Enemy[8]==1){
				      
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+0.4,0.0,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				    }

				    test0=test1=0;

					test0=check_x_coor(x_coor+0.4);
				    test1=check_y_coor(0.2);


				      if(Ind_Bullet_isNot_Empty[9]==1){
					    unisten=0;
					  

					    if(test1==1 && test0==1){
					      
					      Ind_Draw_Enemy[9]=0;
					      Ind_save_index[9]=1;
						  unisten=1;
						  
						  initialize_bullet_arry(1);
					    }
				   }
				 
				    
				    if(Ind_Draw_Enemy[9]==1){
				    	
				       	glPushMatrix();
				    
							glTranslatef(x_coor+0.4,0.2,0);
							glutSolidCube(0.05);
				    	glPopMatrix();
				    
				    }

				    test0=test1=0;
				  
					test0=check_x_coor(x_coor+0.4);
				    test1=check_y_coor(0.4);


				       if(Ind_Bullet_isNot_Empty[10]==1){
				    	unisten=0;
				  
				    if(test1==1 && test0==1){
				     
				      Ind_Draw_Enemy[10]=0;
				      Ind_save_index[10]=1;
					  unisten=1;
					  
					  initialize_bullet_arry(1);
				    }
				 
				 }
				 
				   if(Ind_Draw_Enemy[10]==1){
				        glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+0.4,0.4,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				    
				  } 

				  	test0=test1=0;
				    
					test0=check_x_coor(x_coor+0.4);
				    test1=check_y_coor(0.6);
				 
				   if(Ind_Bullet_isNot_Empty[11]==1){
				    	unisten=0;
				  
				  
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[11]=0;
				      Ind_save_index[11]=1;
					  unisten=1;
					  
					  initialize_bullet_arry(1);
				    }
				 }
				  
				 
				   if(Ind_Draw_Enemy[11]==1){
				        
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+0.4,0.6,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				  }  
				  
				  test1=test0=0;
				  test0=check_x_coor(x_coor+0.6);
				  test1=check_y_coor(0.0);
				  
				  if(Ind_Bullet_isNot_Empty[12]==1){
				    	unisten=0;
				  
				    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[12]=0;
				      Ind_save_index[12]=1;
				      unisten=1;
				            initialize_bullet_arry(1);
				    }
				 }
				  
				  
				 
				   if(Ind_Draw_Enemy[12]==1){
				  
				    
				       glPushMatrix();
				       
				        	glTranslatef(x_coor+0.6,0.0,0);
				        	glutSolidCube(0.05);
				    	glPopMatrix();
				    
				  	} 

				  	test1=test0;
				  	test0=check_x_coor(x_coor+0.6);
				  	test1=check_y_coor(0.2);
				   
				  
					if(Ind_Bullet_isNot_Empty[13]==1){
					    unisten=0;
					    if(test0==1 && test1==1){
					      
					      Ind_Draw_Enemy[13]=0;
					      Ind_save_index[13]=0;

					      unisten=1;
					      
					      initialize_bullet_arry(1);
					    }
				}
				 
				  
				  
				  
				 
				   if(Ind_Draw_Enemy[13]==1){
				    
				    
				       glPushMatrix();
				      		glTranslatef(x_coor+0.6,0.2,0);
				        	glutSolidCube(0.05);
				    	glPopMatrix();
				       
				    
				  	}  

				  	test1=test0;
				  	test0=check_x_coor(x_coor+0.6);
				  	test1=check_y_coor(0.4);
				   
				  

				    if(Ind_Bullet_isNot_Empty[14]==1){
				    	unisten=0;
					    if(test0==1 && test1==1){
					      
					      Ind_Draw_Enemy[14]=0;
					      Ind_save_index[14]=1;

					      unisten=1;
					      
					      initialize_bullet_arry(1);
				    }
				}
				 
				  
				  

				  
				  
				   if(Ind_Draw_Enemy[14]==1){
				       glPopMatrix();
				    
				       glPushMatrix();
				      
				        glTranslatef(x_coor+0.6,0.4,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				    
				    
				  }  

				   	test1=test0=0;
				  	test0=check_x_coor(x_coor+0.6);
				  	test1=check_y_coor(0.6);
				   
				  

					if(Ind_Bullet_isNot_Empty[15]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[15]=0;
				      Ind_save_index[15]=1;

				      unisten=1;
				            initialize_bullet_arry(1);
				    }
				}
				 
				  


				 
				  
				  
				  
				   if(Ind_Draw_Enemy[15]==1){
				     
				   
				    
				       	glPushMatrix();
				       
				        	glTranslatef(x_coor+0.6,0.6,0);
				        	glutSolidCube(0.05);
				    	glPopMatrix();
				       
				    
				  	} 


					test1=test0=0;
				  	test0=check_x_coor(x_coor+0.8);
				  	test1=check_y_coor(0.0);
				   
				  

					if(Ind_Bullet_isNot_Empty[16]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[16]=0;
				      Ind_save_index[16]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				  



				 	
				  
				  
				  
				  
				   if(Ind_Draw_Enemy[16]==1){
				    
				       glPushMatrix();
				        
				        glTranslatef(x_coor+0.8,0.0,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  }  
				  
				  	test1=test0=0;
				  	test0=check_x_coor(x_coor+0.8);
				  	test1=check_y_coor(0.2);
				   

				  
					if(Ind_Bullet_isNot_Empty[17]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[17]=0;
				      Ind_save_index[17]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				  


				 
				  
				  
				  
				   if(Ind_Draw_Enemy[17]==1){
				    
				       glPushMatrix();
				        
				        glTranslatef(x_coor+0.8,0.2,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 
				  
				  	test1=test0=0;
				  	test0=check_x_coor(x_coor+0.8);
				  	test1=check_y_coor(0.4);
				   
				  

				    
				    	if(Ind_Bullet_isNot_Empty[18]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[18]=0;
				      Ind_save_index[18]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				   if(Ind_Draw_Enemy[18]==1){
				    
				       glPushMatrix();
				        
				        glTranslatef(x_coor+0.8,0.4,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 


				  	test1=test0=0;
				  	test0=check_x_coor(x_coor+0.8);
				  	test1=check_y_coor(0.6);
				   
				  

				   	if(Ind_Bullet_isNot_Empty[19]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[19]=0;
				      Ind_save_index[19]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				  


				  
				   if(Ind_Draw_Enemy[19]==1){
				    
				       glPushMatrix();
				        
				        glTranslatef(x_coor+0.8,0.6,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 


				  	test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1);
				  	test1=check_y_coor(0.0);
				   }
				  

				    	if(Ind_Bullet_isNot_Empty[20]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[20]=0;
				      Ind_save_index[20]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 

				    
				   if(Ind_Draw_Enemy[20]==1){
				    
				       glPushMatrix();
				        
				        glTranslatef(x_coor+1,0.0,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 


				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1);
				  	test1=check_y_coor(0.2);
				   }
				  

				  	if(Ind_Bullet_isNot_Empty[21]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[21]=0;
				      Ind_save_index[21]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				  
				  
				   if(Ind_Draw_Enemy[21]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1,0.2,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 


				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1);
				  	test1=check_y_coor(0.4);
				   }
				  

				    
				  	if(Ind_Bullet_isNot_Empty[22]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[22]=0;
				      Ind_save_index[22]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				  
				   if(Ind_Draw_Enemy[22]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1,0.4,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 

				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1);
				  	test1=check_y_coor(0.6);
				   }
				  

					if(Ind_Bullet_isNot_Empty[23]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[23]=0;
				      Ind_save_index[23]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 

				   if(Ind_Draw_Enemy[23]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1,0.6,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 


				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.2);
				  	test1=check_y_coor(0.0);
				   }
				  

				    
				    	if(Ind_Bullet_isNot_Empty[24]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[24]=0;
				      Ind_save_index[24]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				  
				   if(Ind_Draw_Enemy[24]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.2,0.0,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 

				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.2);
				  	test1=check_y_coor(0.2);
				   }
				  

				 	if(Ind_Bullet_isNot_Empty[25]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[25]=0;
				      Ind_save_index[25]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				  
				 if(Ind_Draw_Enemy[25]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.2,0.2,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 

				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.2);
				  	test1=check_y_coor(0.4);
				   }
				  

				  	if(Ind_Bullet_isNot_Empty[26]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[26]=0;
				      Ind_save_index[26]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				   if(Ind_Draw_Enemy[26]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.2,0.4,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 

				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.2);
				  	test1=check_y_coor(0.6);
				   }
				  

				    	if(Ind_Bullet_isNot_Empty[27]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[27]=0;
				      Ind_save_index[27]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				  
				   if(Ind_Draw_Enemy[27]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.2,0.6,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  }

				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.4);
				  	test1=check_y_coor(0.0);
				   }
				  
					if(Ind_Bullet_isNot_Empty[28]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[28]=0;
				      Ind_save_index[28]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				 
				 
				  
				   if(Ind_Draw_Enemy[28]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.4,0.0,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				     } 

				     test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.4);
				  	test1=check_y_coor(0.2);
				   }
				  

				    
				   	if(Ind_Bullet_isNot_Empty[29]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[29]=0;
				      Ind_save_index[29]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				  
				   if(Ind_Draw_Enemy[29]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.4,0.2,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 

				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.4);
				  	test1=check_y_coor(0.4);
				   }
				  

				    
				   	if(Ind_Bullet_isNot_Empty[30]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[30]=0;
				      Ind_save_index[30]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				  
				   if(Ind_Draw_Enemy[30]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.4,0.4,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       }
				    

				    test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.4);
				  	test1=check_y_coor(0.6);
				   }
				  

				 	if(Ind_Bullet_isNot_Empty[31]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[31]=0;
				      Ind_save_index[31]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				  
				  
				   if(Ind_Draw_Enemy[31]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.4,0.6,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 
				  
				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.6);
				  	test1=check_y_coor(0.0);
				   }
				  

				 	if(Ind_Bullet_isNot_Empty[32]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[32]=0;
				      Ind_save_index[32]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 

				  
				  
				   if(Ind_Draw_Enemy[32]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.6,0.0,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  }

				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.6);
				  	test1=check_y_coor(0.2);
				   }
				  

				   	if(Ind_Bullet_isNot_Empty[33]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[33]=0;
				      Ind_save_index[33]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				  
				   if(Ind_Draw_Enemy[33]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.6,0.2,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 

				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.6);
				  	test1=check_y_coor(0.4);
				   }
				  

				    
				  	if(Ind_Bullet_isNot_Empty[34]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[34]=0;
				      Ind_save_index[34]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				  
				   if(Ind_Draw_Enemy[34]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.6,0.4,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  } 
				  test1=test0=0;
				  	if(bullet==1){
				  	test0=check_x_coor(x_coor+1.6);
				  	test1=check_y_coor(0.6);
				   }
				  

				    
				   	if(Ind_Bullet_isNot_Empty[35]==1){
					unisten=0;    
				    if(test0==1 && test1==1){
				      
				      Ind_Draw_Enemy[35]=0;
				      Ind_save_index[35]=1;

				      unisten=1;
				      
				      initialize_bullet_arry(1);
				    }
				}
				 
				 
				  
				   if(Ind_Draw_Enemy[35]==1){
				    
				       glPushMatrix();
				        glColor3f(1,1,1);
				        glTranslatef(x_coor+1.6,0.6,0);
				        glutSolidCube(0.05);
				    glPopMatrix();
				       
				    
				  }


  //if(36==Win()){
  	//printf("you win\n");
  //}

   
 
}

void initLight(){
  
    

    
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

  
}

static void Init_Inidkator_For_Draw_Enemy(){
  
  if(not_init==1){
    
  int i=0;
  for (i;i<37;i++){
    Ind_Draw_Enemy[i]=1;
    not_init=0;
  }
}
}

static void Init_Indikator_For_Bullet(){
  
  if(not_init1==1){
    
  int i=0;
  for (i;i<37;i++){
    Ind_Bullet_isNot_Empty[i]=1;
    not_init1=0;
}
}

}


    
static void initBullet(){
  

  //TODO kada pogode igraca izgubili smo :'( 
	if(bullet==1){
	  
	  
	  X_coor_of_Bullet=0+xr;
	  Y_coor_of_Bullet=-0.8+yr;
	
	  glPushMatrix();
	  glTranslatef(X_coor_of_Bullet,Y_coor_of_Bullet,0);
	
	  glutSolidSphere(0.020, 40, 40);
    
	glPopMatrix();

	}
 
}

static void initGifts(){


 


			
		   
		    //trebaju nam oba uslova da bi mogli da pokupimo gift i kada dodjemo sa leve i kada dodjemo sa desne strane
		   
              Add_Points(0.0,1+gifts1);//prosledjuem x koordinatu gifta 1 i y koordinatu gifta 1


  

	      glPushMatrix();
	      glTranslatef(0,1+gifts1,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();
	      
		     

	      
	       Add_Points(-0.8,1+gifts2);
	      
	      glPushMatrix();
	      glTranslatef(-0.8,1+gifts2,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();

	       Add_Points(-0.8,1+gifts3);
	      
	      
	      glPushMatrix();
	      glTranslatef(-0.6,1+gifts3,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();
	      
	      Add_Points(-0.4,1+gifts4);
	      
	      glPushMatrix();
	      glTranslatef(-0.4,1+gifts4,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();
	      	 
	      Add_Points(-0.2,1+gifts5);

	      glPushMatrix();
	      glTranslatef(-0.2,1+gifts5,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();
	      	
	       Add_Points(0.2,1+gifts6);
	      
	      
	      glPushMatrix();
	      glTranslatef(0.2,1+gifts6,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();
	      	
	       Add_Points(0.4,1+gifts7);
	      
	      glPushMatrix();
	      glTranslatef(0.4,1+gifts7,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();
	      
	       Add_Points(0.6,1+gifts8);
	      
	      glPushMatrix();
	      glTranslatef(0.6,1+gifts8,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();
	      	
	       Add_Points(0.8,1+gifts9);
	      
	      glPushMatrix();
	      glTranslatef(0.8,1+gifts9,0);
	      glColor3f(1,0,1);
	      glScaled(0.05,0.05,0.05);
	      glutWireIcosahedron();
	      glPopMatrix();
      
     
     
     		//printf(" points: %d\n", points);
  


      
}

static void initObject(){
      
      light_diffuse[0]=0.9;
      light_diffuse[1]=0.9;
      light_diffuse[2]=0;
      
      glLightfv(GL_LIGHT0,GL_DIFFUSE,light_diffuse);
      
      diffuse_coeffs[0]=0.5;
      diffuse_coeffs[1]=0.5;
      diffuse_coeffs[2]=0;
      
      glMaterialfv(GL_FRONT,GL_DIFFUSE,diffuse_coeffs);
  
      glPushMatrix();
    
    
      glTranslatef(-0.8,0.8,0);//objekat u gornjem levom uglu to ce verovatno biti sunce ili tako neko telo
      glRotatef(animation_parametars,0,1,0);		  
      glColor3f(0, 1, 1);
      glutSolidSphere(0.1, 40, 40);
   
      glPopMatrix();
 
}
static void initPlayer(){
  
  
      light_diffuse[0]=0.9;
      light_diffuse[1]=0;
      light_diffuse[2]=0;
      
      glLightfv(GL_LIGHT0,GL_DIFFUSE,light_diffuse);
      
      diffuse_coeffs[0]=0.4;
      diffuse_coeffs[1]=0;
      diffuse_coeffs[2]=0;
      
      glMaterialfv(GL_FRONT,GL_DIFFUSE,diffuse_coeffs);
  

      //TODO kada ga pogodi paketic  dodaj mu points ^_^
  
      if(ind_Kill_player==0){
     	  glPushMatrix();
        	glTranslatef(xr,-0.9,0);
  			  glutSolidCube(0.1);
        glPopMatrix();
      }
      else{
          glPushMatrix();
        	glTranslatef(xr,-0.9,0);
                glutSolidCube(5);
        glPopMatrix();
          
    }
        
}
static void initEnemyBullets(){

  
    
  
      
    

   if(Ind_Draw_Enemy[3]==1){
       Enemy_kill_you(x_coor,0.6+y_t1);
    glPushMatrix();
       
        glTranslatef(x_coor,0.6+y_t1,0);
        glutSolidSphere(0.05,40,40);
    glPopMatrix();
   }
    
  
    
    

   if(Ind_Draw_Enemy[5]==1){
       Enemy_kill_you(x_coor+0.2,0.2+y_t2);
    glPushMatrix();
       
        glTranslatef(x_coor+0.2,0.2+y_t2,0);
        glutSolidSphere(0.05,40,40);
    glPopMatrix();
   }
    
      

   
      if(Ind_Draw_Enemy[10]==1){
          Enemy_kill_you(x_coor+0.4,0.4+y_t3);
        glPushMatrix();
        
            glTranslatef(x_coor+0.4,0.4+y_t3,0);
            glutSolidSphere(0.05,40,40);
        glPopMatrix();
      }
    
    
    if(Ind_Draw_Enemy[12]==1){
    Enemy_kill_you(x_coor+0.6,0+y_t4);

   
    glPushMatrix();
       
        glTranslatef(x_coor+0.6,0+y_t4,0);
        glutSolidSphere(0.05,40,40);
    glPopMatrix();
    }
    
    if(Ind_Draw_Enemy[17]==1){
     Enemy_kill_you(x_coor+0.8,0.2+y_t5);
    
   
    glPushMatrix();
       
        glTranslatef(x_coor+0.8,0.2+y_t5,0);
        glutSolidSphere(0.05,40,40);
    glPopMatrix();
    }
    
    
    if(Ind_Draw_Enemy[23]==1){
     Enemy_kill_you(x_coor+1,0.6+y_t6);

   
    glPushMatrix();
       
        glTranslatef(x_coor+1,0.6+y_t6,0);
        glutSolidSphere(0.05,40,40);
    glPopMatrix();
    }
    
    if(Ind_Draw_Enemy[27]==1){
     Enemy_kill_you(x_coor+1.2,0.6+y_t7);

   
    glPushMatrix();
       
        glTranslatef(x_coor+1.2,0.6+y_t7,0);
        glutSolidSphere(0.05,40,40);
    glPopMatrix();
    }
    
    
    if(Ind_Draw_Enemy[29]==0){
    Enemy_kill_you(x_coor+1.4,0.2+y_t8);
     glPushMatrix();
       
        glTranslatef(x_coor+1.4,0.2+y_t8,0);
        glutSolidSphere(0.05,40,40);
    glPopMatrix();
    
    }
    
    
    if(Ind_Draw_Enemy[35]==1){
     Enemy_kill_you(x_coor+1.6,0.6+y_t9);

   
    glPushMatrix();
       
        glTranslatef(x_coor+1.6,0.6+y_t9,0);
        glutSolidSphere(0.05,40,40);
    glPopMatrix();
    
    }
    
    
    
   
      
     
}
