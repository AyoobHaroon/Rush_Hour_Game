//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
#include<cstdlib>
using namespace std;
	
// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
  
 /**/
 
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


int xI = 35, yI = 750 , xj = 150 , yj = 65, xz = 200 , yz = 780 ,  choice = 0 , choice2 = 0 , choice3 = 0 , score = 0 , space = 0 , space1 = 0 ; 
int space2 = 0 , space3 = 0 , pass = 34 , a = 0 , b = 0 , c = 0 , d = 0 , e = 0 , f = 0  , g = 0 , h = 0 ;
int enter = 0 , enter1 = 0 , enter2 = 0 , enter3 = 0 , w = 0 , m = 0 , p = 0 , r = 0 , s = 0;

bool color;
// function to draw red car
void drawCarR() {
         
        
	DrawSquare(xI, yI, 40, colors[RED]);
	DrawSquare(xI+35, yI, 40, colors[RED]);
	DrawCircle(xI+15,yI-15,15,colors[RED]);
	DrawCircle(xI+50,yI-15,15,colors[RED]);
	glutPostRedisplay();
}
// function to draw yellow car
void drawCarY() {
       
	DrawSquare(xI, yI, 40, colors[YELLOW]);
	DrawSquare(xI+35, yI, 40, colors[YELLOW]);
	DrawCircle(xI+15,yI-15,15,colors[YELLOW]);
	DrawCircle(xI+50,yI-15,15,colors[YELLOW]);
	
	s = 1;
	
	glutPostRedisplay();
}

         


      


bool flag = true;

// function to move cars 
void moveCar() {
	
	if (xj > 10 && flag) {
		xj -= 1;
		
		if(xj < 100)
			
			flag = false;

	}
	else if (xj < 1010 && !flag) {
		
		xj += 1;
		if (xj > 900)
			flag = true;
	}
	
	if (xz > 10 && flag) {
		xz -= 1;
	
		if(xz < 100)
			
			flag = false;

	}
	else if (xz < 1010 && !flag) {
		
		xz += 1;
		if (xz > 900)
			flag = true;
	}
	
	
	if (xj > 10 && flag && p >=2 ) {
		xj -= 2;
		
		if(xj < 100)
			
			flag = false;

	}
	else if (xj < 1010 && !flag && p >=2 ) {
		
		xj += 2;
		if (xj > 900)
			flag = true;
	}
	
	if (xz > 10 && flag && p >=2 ) {
		xz -= 2;
	
		if(xz < 100)
			
			flag = false;

	}
	else if (xz < 1010 && !flag && p >=2) {
		
		xz += 2;
		if (xz > 900)
			flag = true;
	}
	
	
}



 // function to draw a car with a randum color
void drawCar()
{
 int rand_color=rand();
 if(rand_color % 2 == 0)
   color=1;
   else
   color=0;

if(color)
{
	DrawSquare(xI, yI, 40, colors[RED]);
	DrawSquare(xI+35, yI, 40, colors[RED]);
	DrawCircle(xI+15,yI-15,15,colors[RED]);
	DrawCircle(xI+50,yI-15,15,colors[RED]);
	glutPostRedisplay();
}
else
{
	DrawSquare(xI, yI, 40, colors[YELLOW]);
	DrawSquare(xI+35, yI, 40, colors[YELLOW]);
	DrawCircle(xI+15,yI-15,15,colors[YELLOW]);
	DrawCircle(xI+50,yI-15,15,colors[YELLOW]);
	glutPostRedisplay();
}

}
// function to disply menu
void menu(){

             DrawSquare(0, 0, 4000, colors[WHITE]);
	
	     DrawString( 400, 800, "Rush Hour Game ", colors[BLACK]);
	
     	     DrawString( 400, 500, "1-Start The Game ", colors[BLACK]);
	
      	    DrawString( 400, 400, "2-Leader Bord ", colors[BLACK]);



            }
// function to deply second menu
void menu2(){

             DrawSquare(0, 0, 4000, colors[WHITE]);
	     DrawString( 400, 800, "Rush Hour Game ", colors[BLACK]);
	     DrawString( 400, 500, "3-Set car color randomly ", colors[BLACK]);
	     DrawString( 400, 400, "4-Select car color ", colors[BLACK]);
	   
	    }
	    
// function to desply third menu
void menu3(){

          DrawSquare(0, 0, 4000, colors[WHITE]);
          DrawString( 400, 800, "Rush Hour Game ", colors[BLACK]);
      	  DrawString( 400, 500, "5-Red Car ", colors[BLACK]);
          DrawString( 400, 400, "6-Yellow Car ", colors[BLACK]);
	   
	    }
//function to desply leader bord
void L_Bord(){

               DrawString( 400, 800, "Leader Bord ", colors[BLACK]);
	     
	        DrawString( 400, 700, "1- ", colors[BLACK]);
	
	        DrawString( 400, 650, "2- ", colors[BLACK]);
	
	        DrawString( 400, 600, "3- ", colors[BLACK]);
	        
	        DrawString( 400, 550, "4- ", colors[BLACK]);
	        
	        DrawString( 400, 500, "5- ", colors[BLACK]);
	        
	        DrawString( 400, 450, "6- ", colors[BLACK]);
	        
	        DrawString( 400, 400, "7- ", colors[BLACK]);
	        
	        DrawString( 400, 350, "8- ", colors[BLACK]);
	        
	        DrawString( 400, 300, "9- ", colors[BLACK]);
	        
	        DrawString( 400, 250, "10- ", colors[BLACK]);
               }
               
// function to draw passenger figures
void pssengers(){

                                       DrawString( 650 , 400 , "    *", colors[BLACK] );
					DrawString( 650 , 380 , " * * *", colors[BLACK] );
					DrawString( 650 , 360 , "    *", colors[BLACK] );
					DrawString( 650 , 340 , "   * *", colors[BLACK] );
					
					DrawString( 350 , 460 , "    *", colors[BLACK] );
					DrawString( 350 , 440 , " * * *", colors[BLACK] );
					DrawString( 350 , 420 , "    *", colors[BLACK] );
					DrawString( 350 , 400 , "   * *", colors[BLACK] );
					
					DrawString( 490 , 200 , "    *", colors[BLACK] );
					DrawString( 490 , 180 , " * * *", colors[BLACK] );
					DrawString( 490 , 160 , "    *", colors[BLACK] );
					DrawString( 490 , 140 , "   * *", colors[BLACK] );
					
					DrawString( 250 , 600 , "    *", colors[BLACK] );
					DrawString( 250 , 580 , " * * *", colors[BLACK] );
					DrawString( 250 , 560 , "    *", colors[BLACK] );
					DrawString( 250 , 540 , "   * *", colors[BLACK] );
	        }
	        
//function to draw trees
void trees(){
                       DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[GREEN] ); 
			DrawSquare(308, 429, 25, colors[BROWN]);
			
			DrawTriangle( 500, 650 , 540, 650 , 520 , 690, colors[GREEN] ); 
			DrawSquare(508, 629, 25, colors[BROWN]);
			
			DrawTriangle( 100, 250 , 140, 250 , 120 , 290, colors[GREEN] ); 
			DrawSquare(108, 229, 25, colors[BROWN]);
			
			DrawTriangle( 700, 250 , 740, 250 , 720 , 290, colors[GREEN] ); 
			DrawSquare(708, 229, 25, colors[BROWN]);
                   }


// function to disply score
void Dis_score(){
                 DrawString( 50, 800, "Score = 0 " , colors[BLACK]);
                 cout << "score is = " << score << endl;
                }


//function to desply obstacels
void obstacle(){
                               DrawSquare(200, 650, 40, colors[BLACK]);

				DrawSquare( 200 , 615 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 580 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 545 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 510 ,40,colors[BLACK]);
				
				DrawSquare( 235 , 510 ,40,colors[BLACK]);
				
				
				
				DrawSquare( 800, 300, 40, colors[BLACK]);
				
				DrawSquare( 800 , 265 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 230 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 195 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 160 ,40,colors[BLACK]);
				
				DrawSquare( 765 , 160 ,40,colors[BLACK]); 
				
				
				DrawSquare( 450 , 450, 40, colors[BLACK]);
				
				DrawSquare( 450 , 415 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 380 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 345 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 310 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 275 ,40,colors[BLACK]);
				
				
				DrawSquare( 320 , 700 , 40, colors[BLACK]);
				
				DrawSquare( 355 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 390 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 425 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 460 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 495 , 700 ,40,colors[BLACK]);
				}
				
				
// function to the whole game
void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1/*Blue Component*/, 1 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	
	
	menu();
      
	
	
	if ( choice == 1 )
	  {
	  
	   
	   menu2();
	 
	   
	  }
	   if ( choice2 == 1 )
	     {
	      			
	      	           
			       DrawSquare(0, 0, 4000, colors[WHITE]);
              	
              
	
			        
				
				obstacle();
	
				
				if  (xI >= 160 && xI <= 285  && yI >= 470 && yI <= 590 && m == 0 ){
				
			
				score -= 2;
				  m = 1;
		
				
				}
				
				if  (xI >= 160 && xI <= 285  && yI >= 470 && yI <= 590 ){
				
			
				DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
		
				
				}
				
				
				  
				if (xI >= 725 && xI <= 850 && yI >= 120 && yI <= 350 && m == 0 ){
				
				score -= 2;
				m =1;
				 }
				 
				 if (xI >= 725 && xI <= 850 && yI >= 120 && yI <= 350){
				DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				 }
				 
				 
				 if (xI >= 415 && xI <= 485 && yI >= 225  && yI <= 485 && m == 0 ){
				 
				 score -= 2;
				 m=1;
				  }
				  
				  if (xI >= 415 && xI <= 485 && yI >= 225  && yI <= 485 ){
				 
				   DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				  }
				  
				  
				   if (xI >= 295  && xI <= 515 && yI >= 645  && yI <= 750 && m == 0 ){
				   DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				   score -= 2;
				   m=1;
				     }
				     
				     if (xI >= 295  && xI <= 515 && yI >= 645  && yI <= 750 ){
				     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				     }
	     
	     
                       
                       
                       
                       
                       
					DrawSquare( 650 , 700 , 40, colors[BLACK]);
					
					DrawSquare( 685 , 700 ,40,colors[BLACK]);
					
					DrawSquare( 720 , 700 ,40,colors[BLACK]);
					
					DrawSquare( 755 , 700 ,40,colors[BLACK]);
					
					
					DrawSquare( 50 , 250 , 40, colors[BLACK]);
					
					DrawSquare( 50 , 180 , 40, colors[BLACK]);
					
					DrawSquare( 50 , 145 ,40,colors[BLACK]);
					
					DrawSquare( 50 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 50 , 75 ,40,colors[BLACK]);
					
					DrawSquare( 85 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 120 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 155 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 190 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 225 , 110 ,40,colors[BLACK]);
					
					
					
					DrawSquare( 350 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 385 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 420 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 455 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 490 , 110 ,40,colors[BLACK]);
					
					
					DrawSquare( 155 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 190 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 225 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 260 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 295 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 330 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 365 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 400 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 435 , 0 ,40,colors[BLACK]);
					
					
					if (xI >= 625 && xI <= 770 && yI >= 670  && yI <= 730 && m == 0 ){
					     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					     score -= 2;
					     m = 1;
					      }
					      
					      if (xI >= 625 && xI <= 770 && yI >= 670  && yI <= 730 ){
					     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					      }
					     
					       if (xI >= 450 && xI <= 510 && yI >= 70  && yI <= 140 && m == 0 ){
					       DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					       score -= 2;
					       m = 1;
					       }
					       
					       if (xI >= 450 && xI <= 510 && yI >= 70  && yI <= 140 ){
					       DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					       }
					       
					       
						if (xI >= 130 && xI <= 235 && yI >= 0 && yI <= 65 && m == 0 ){ 
						DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						score -= 2;
						m = 1;
						 }
						 
						 if (xI >= 130 && xI <= 235 && yI >= 0 && yI <= 65 ){ 
						DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						 }
						 
						 
					
					
					
					DrawSquare( 1000 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 965 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 930 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 895 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 860 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 565 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 530 ,40,colors[BLACK]);
					
					if (xI >= 800 && xI <= 1050 && yI >= 500 && yI <= 620 && m == 0 ){
						     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						     score -= 2;
						     m = 1;
						     }
					
					//Display Score
				DrawString( 50, 800, "Score = 0 ", colors[BLACK]);
                               cout << "score is = " << score << endl;
					
					// passenger figure
					
					pssengers();
					
	  
					if ( xI >= 600 && xI <= 700 && yI >= 300 && yI <= 450 && a == 0 )
					  {
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					   
					  }
					     
					      if ( space == 1 )
						    {
					      DrawSquare( 650 , 330 , 100, colors[WHITE]);
					      a = 1;
					      e = 1;
						    }
						
					if ( e == 1 )
					  {
					   DrawSquare( 390 , 230 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 370 && xI <= 410 && yI >= 210 && yI <= 250 && e == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 1;
					   
					  }
					  
					  
					if ( xI >= 370 && xI <= 410 && yI >= 210 && yI <= 250 && e == 1 && r == 1 )
					  {
					   
					   p += 1;
					   r = 0;
					  }
					  
					  
					if ( enter == 1 )  
					  {
					   DrawSquare( 390 , 230 ,60,colors[WHITE]);
					   e = 0;
					   
					  }
					  
					  
					if ( xI >= 300 && xI <= 400 && yI >= 360 && yI <= 500 && b == 0 )
					{
					   DrawString( 350, 400, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					   
					   }
					   if ( space1 == 1 )
					     {
					      DrawSquare( 350 , 390 , 100, colors[WHITE]);
					      b = 1;
					      f = 1;
					     }
					     
					 if ( f == 1 )
					  {
					   DrawSquare( 690 , 130 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 670 && xI <= 710 && yI >= 110 && yI <= 150 && f == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   
					  }
					  
					  
					
					  
					if ( enter1 == 1 )  
					  {
					   DrawSquare( 690 , 130 ,60,colors[WHITE]);
					   f = 0;
					  
					  }
					  
					if ( xI >= 450 && xI <= 550 && yI >= 100 && yI <= 250 && c == 0 )
					{
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					  
					   }
					   if ( space2 == 1 )
					     {
					      DrawSquare( 490 , 150 , 80, colors[WHITE]);
					      c = 1 ;
					      g = 1 ;
					     }
					  
					 if ( g == 1 )
					  {
					   DrawSquare( 60 , 730 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 40 && xI <= 80 && yI >= 710 && yI <= 750 && g == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 3;
					  }
					   
					  
					if ( xI >= 40 && xI <= 80 && yI >= 710 && yI <= 750 && g == 1 && r == 3 )
					  {
					   
					   p += 1;
					   r = 0 ;
					  }  
					  
					if ( enter2 == 1 )  
					  {
					   DrawSquare( 60 , 730 ,60,colors[WHITE]);
					   g = 0;
					   w = 1 ;
					   if ( w == 1 )
					   
					   
					   w = 0;
					  }
					  
					if ( xI >= 200 && xI <= 300 && yI >= 500 && yI <= 650 && d == 0 )
					  {
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					  
					   }
					   if ( space3 == 1 )
					     {
					      DrawSquare( 250 , 550 , 80, colors[WHITE]);
					      d = 1 ;
					      h = 1 ;  
					     }
					  
					  if ( h == 1 )
					  {
					   DrawSquare( 880 , 800 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 860 && xI <= 900 && yI >= 780 && yI <= 820 && h == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 4;
					  }
					  
					  if ( xI >= 860 && xI <= 900 && yI >= 780 && yI <= 820 && h == 1 && r == 4 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 0;
					  }
					  
					if ( enter3 == 1 )  
					  {
					   DrawSquare( 880 , 800 ,60,colors[WHITE]);
					   h = 0;
					   
					  }
					  
					if ( pass == 32 && a == 1 || pass == 30 && a == 1 || pass == 28 && a == 1 || pass == 26 && a == 1 || pass == 24 && a == 1 || pass == 22 && a == 1 || pass == 20 && a == 1 || pass == 18 && a == 1  )
					  {
					   DrawString( 650 , 400 , "    *", colors[BLACK] );
				      	   DrawString( 650 , 380 , " * * *", colors[BLACK] );
					   DrawString( 650 , 360 , "    *", colors[BLACK] );
					   DrawString( 650 , 340 , "   * *", colors[BLACK] );
					   
					   a = 0;
					 
					  }
					  
					if ( pass == 32 && b == 1 || pass == 30 && b == 1 || pass == 28 && b == 1 || pass == 26 && b == 1 || pass == 24 && b == 1 || pass == 22 && b == 1 || pass == 20 && b == 1 || pass == 18 && b == 1  )
					  {
					   DrawString( 350 , 460 , "    *", colors[BLACK] );
					   DrawString( 350 , 440 , " * * *", colors[BLACK] );
					   DrawString( 350 , 420 , "    *", colors[BLACK] );
					   DrawString( 350 , 400 , "   * *", colors[BLACK] );
					   
					   b = 0;
					   
					
					  }
					  
					if ( pass == 31 && c == 1 || pass == 29 && c == 1 || pass == 27 && c == 1 || pass == 25 && c == 1 || pass == 23 && c == 1 || pass == 21 && c == 1 || pass == 19 && c == 1 || pass == 17 && c == 1  )
					  {
					   DrawString( 490 , 200 , "    *", colors[BLACK] );
					   DrawString( 490 , 180 , " * * *", colors[BLACK] );
					   DrawString( 490 , 160 , "    *", colors[BLACK] );
					   DrawString( 490 , 140 , "   * *", colors[BLACK] );
					   
					   c = 0;
					   
					  
					  }
					  
					if ( pass == 31 && d == 1 || pass == 29 && d == 1 || pass == 27 && d == 1 || pass == 25 && d == 1 || pass == 23 && d == 1 || pass == 21 && d == 1 || pass == 19 && d == 1 || pass == 17 && d == 1  )
					  {
					   DrawString( 250 , 600 , "    *", colors[BLACK] );
					   DrawString( 250 , 580 , " * * *", colors[BLACK] );
					   DrawString( 250 , 560 , "    *", colors[BLACK] );
					   DrawString( 250 , 540 , "   * *", colors[BLACK] );
					   
					   d = 0;
	   
	  
	                                 }
	  
	  
	  
	
						// blue car
						DrawSquare(xj, 65, 40, colors[BLUE]);
						DrawSquare(xj+35, 65, 40, colors[BLUE]);
						DrawCircle(xj+15,65-15,15,colors[BLUE]);
						DrawCircle(xj+50,65-15,15,colors[BLUE]);
						
						//green car
						DrawSquare(xz, yz, 40, colors[GREEN]);
						DrawSquare(xz+35, yz, 40, colors[GREEN]);
						DrawCircle(xz+15,yz-15,15,colors[GREEN]);
						DrawCircle(xz+50,yz-15,15,colors[GREEN]);
	
	
	                                // third car after the user pick to passengers
					if ( p >= 2 )
					  {
					        DrawSquare(xj, 175, 40, colors[BROWN]);
						DrawSquare(xj+35, 175, 40, colors[BROWN]);
						DrawCircle(xj+15,175-15,15,colors[BROWN]);
						DrawCircle(xj+50,175-15,15,colors[BROWN]);
					   
					  }
	
	                                    
				       if ( xI >= xj-50 && xI <= xj+50 && yI >= yj-50 && yI <= yj+50 && m == 0 )
				       {
				         DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 	 score -= 3;
				         m = 1;
				       }
				       
				       if ( xI >= xj-50 && xI <= xj+50 && yI >= yj-50 && yI <= yj+50 )
				       {
				         DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				       }
				 
				 if ( xI >= xz-50 && xI <= xz+50 && yI >= yz-50 && yI <= yz+50 && m == 0 ){
				 DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 score -= 3;
				 m = 1;
				 }
				 
				 if ( xI >= xz-50 && xI <= xz+50 && yI >= yz-50 && yI <= yz+50 ){
				 DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 }
			
			moveCar();
			//trees
			
			trees();
			
				 if (xI >= 280 && xI <= 370 && yI >= 430 && yI <= 480 && m == 0){
				     
				      score -= 2;
				      m = 1;
				       }
				       
				 if (xI >= 280 && xI <= 370 && yI >= 430 && yI <= 480 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				 
				       }
				       
				       	
				       
				if (xI >= 440 && xI <= 550 && yI >= 620 && yI <= 690 && m == 0 ){
				     
				      score -= 2;
				      m = 1;
				       }
				       
				       
				if (xI >= 440 && xI <= 550 && yI >= 620 && yI <= 690 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				   
				       }
				       	
				       
			       if (xI >= 60 && xI <= 180 && yI >= 210 && yI <= 280 && m == 0 ){
				     
				      score -= 2;
				      m = 1;
				       }
				       
			      if (xI >= 60 && xI <= 180 && yI >= 210 && yI <= 280  ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				      
				       }
				       
				       	
				       
			       if (xI >= 670 && xI <= 780 && yI >= 210 && yI <= 280 && m == 0 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				      score -= 2;
				      m = 1;
				       }
				       
				if (xI >= 670 && xI <= 780 && yI >= 210 && yI <= 280 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				       }
				       
		      drawCarR();
		      	
			
				
	      			
	      			if ( score >= 100 )
	      			  {
	      			   DrawSquare(0, 0, 4000, colors[WHITE]);
	      			   DrawString( 400, 500, "Congratulations You Win! ", colors[BLACK]);
	      			   DrawString( 400, 600, "score = "+score, colors[BLACK]);
	      			  }
	      			
	      			
	      			
	      }         
		       

	


	
	
 	     
 	  else if ( choice2 == 2 )
 	         {
 	         
	 	           menu3();
			   
		
	 	     
	      	     if ( choice3 == 1 )
	 	       {
		         
		         DrawSquare(0, 0, 4000, colors[WHITE]);
              	
              
	
			        // pavememt
				DrawSquare(200, 650, 40, colors[BLACK]);

				DrawSquare( 200 , 615 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 580 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 545 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 510 ,40,colors[BLACK]);
				
				DrawSquare( 235 , 510 ,40,colors[BLACK]);
				
				
				
				DrawSquare( 800, 300, 40, colors[BLACK]);
				
				DrawSquare( 800 , 265 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 230 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 195 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 160 ,40,colors[BLACK]);
				
				DrawSquare( 765 , 160 ,40,colors[BLACK]); 
				
				
				DrawSquare( 450 , 450, 40, colors[BLACK]);
				
				DrawSquare( 450 , 415 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 380 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 345 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 310 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 275 ,40,colors[BLACK]);
				
				
				DrawSquare( 320 , 700 , 40, colors[BLACK]);
				
				DrawSquare( 355 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 390 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 425 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 460 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 495 , 700 ,40,colors[BLACK]);
				
	
				
				if  (xI >= 160 && xI <= 285  && yI >= 470 && yI <= 590 && m == 0 ){
				
			
				score -= 2;
				  m = 1;
		
				
				}
				
				if  (xI >= 160 && xI <= 285  && yI >= 470 && yI <= 590 ){
				
			
				DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
		
				
				}
				
				
				  
				if (xI >= 725 && xI <= 850 && yI >= 120 && yI <= 350 && m == 0 ){
				
				score -= 2;
				m =1;
				 }
				 
				 if (xI >= 725 && xI <= 850 && yI >= 120 && yI <= 350){
				DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				 }
				 
				 
				 if (xI >= 415 && xI <= 485 && yI >= 225  && yI <= 485 && m == 0 ){
				 
				 score -= 2;
				 m=1;
				  }
				  
				  if (xI >= 415 && xI <= 485 && yI >= 225  && yI <= 485 ){
				 
				   DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				  }
				  
				  
				   if (xI >= 295  && xI <= 515 && yI >= 645  && yI <= 750 && m == 0 ){
				   DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				   score -= 2;
				   m=1;
				     }
				     
				     if (xI >= 295  && xI <= 515 && yI >= 645  && yI <= 750 ){
				     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				     }
	     
	     
                       
                       
                       
                       
                       
					DrawSquare( 650 , 700 , 40, colors[BLACK]);
					
					DrawSquare( 685 , 700 ,40,colors[BLACK]);
					
					DrawSquare( 720 , 700 ,40,colors[BLACK]);
					
					DrawSquare( 755 , 700 ,40,colors[BLACK]);
					
					
					DrawSquare( 50 , 250 , 40, colors[BLACK]);
					
					DrawSquare( 50 , 180 , 40, colors[BLACK]);
					
					DrawSquare( 50 , 145 ,40,colors[BLACK]);
					
					DrawSquare( 50 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 50 , 75 ,40,colors[BLACK]);
					
					DrawSquare( 85 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 120 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 155 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 190 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 225 , 110 ,40,colors[BLACK]);
					
					
					
					DrawSquare( 350 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 385 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 420 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 455 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 490 , 110 ,40,colors[BLACK]);
					
					
					DrawSquare( 155 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 190 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 225 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 260 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 295 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 330 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 365 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 400 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 435 , 0 ,40,colors[BLACK]);
					
					
					if (xI >= 625 && xI <= 770 && yI >= 670  && yI <= 730 && m == 0 ){
					     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					     score -= 2;
					     m = 1;
					      }
					      
					      if (xI >= 625 && xI <= 770 && yI >= 670  && yI <= 730 ){
					     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					      }
					     
					       if (xI >= 450 && xI <= 510 && yI >= 70  && yI <= 140 && m == 0 ){
					       DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					       score -= 2;
					       m = 1;
					       }
					       
					       if (xI >= 450 && xI <= 510 && yI >= 70  && yI <= 140 ){
					       DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					       }
					       
					       
						if (xI >= 130 && xI <= 235 && yI >= 0 && yI <= 65 && m == 0 ){ 
						DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						score -= 2;
						m = 1;
						 }
						 
						 if (xI >= 130 && xI <= 235 && yI >= 0 && yI <= 65 ){ 
						DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						 }
						 
						 
					
					
					
					DrawSquare( 1000 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 965 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 930 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 895 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 860 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 565 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 530 ,40,colors[BLACK]);
					
					if (xI >= 800 && xI <= 1050 && yI >= 500 && yI <= 620 && m == 0 ){
						     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						     score -= 2;
						     m = 1;
						     }
					
					//Display Score
					DrawString( 50, 800, "Score = 0 " , colors[BLACK]);
					
					// passenger figure
					DrawString( 650 , 400 , "    *", colors[BLACK] );
					DrawString( 650 , 380 , " * * *", colors[BLACK] );
					DrawString( 650 , 360 , "    *", colors[BLACK] );
					DrawString( 650 , 340 , "   * *", colors[BLACK] );
					
					DrawString( 350 , 460 , "    *", colors[BLACK] );
					DrawString( 350 , 440 , " * * *", colors[BLACK] );
					DrawString( 350 , 420 , "    *", colors[BLACK] );
					DrawString( 350 , 400 , "   * *", colors[BLACK] );
					
					DrawString( 490 , 200 , "    *", colors[BLACK] );
					DrawString( 490 , 180 , " * * *", colors[BLACK] );
					DrawString( 490 , 160 , "    *", colors[BLACK] );
					DrawString( 490 , 140 , "   * *", colors[BLACK] );
					
					DrawString( 250 , 600 , "    *", colors[BLACK] );
					DrawString( 250 , 580 , " * * *", colors[BLACK] );
					DrawString( 250 , 560 , "    *", colors[BLACK] );
					DrawString( 250 , 540 , "   * *", colors[BLACK] );
					
	  
					if ( xI >= 600 && xI <= 700 && yI >= 300 && yI <= 450 && a == 0 )
					  {
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					   
					  }
					     
					      if ( space == 1 )
						    {
					      DrawSquare( 650 , 330 , 100, colors[WHITE]);
					      a = 1;
					      e = 1;
						    }
						
					if ( e == 1 )
					  {
					   DrawSquare( 390 , 230 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 370 && xI <= 410 && yI >= 210 && yI <= 250 && e == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 1;
					   
					  }
					  
					  
					if ( xI >= 370 && xI <= 410 && yI >= 210 && yI <= 250 && e == 1 && r == 1 )
					  {
					   
					   p += 1;
					   r = 0;
					  }
					  
					  
					if ( enter == 1 )  
					  {
					   DrawSquare( 390 , 230 ,60,colors[WHITE]);
					   e = 0;
					   //score += 10;
					  }
					  
					  
					if ( xI >= 300 && xI <= 400 && yI >= 360 && yI <= 500 && b == 0 )
					{
					   DrawString( 350, 400, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					   
					   }
					   if ( space1 == 1 )
					     {
					      DrawSquare( 350 , 390 , 100, colors[WHITE]);
					      b = 1;
					      f = 1;
					     }
					     
					 if ( f == 1 )
					  {
					   DrawSquare( 690 , 130 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 670 && xI <= 710 && yI >= 110 && yI <= 150 && f == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   
					  }
					  
					  
					
					  
					if ( enter1 == 1 )  
					  {
					   DrawSquare( 690 , 130 ,60,colors[WHITE]);
					   f = 0;
					  
					  }
					  
					if ( xI >= 450 && xI <= 550 && yI >= 100 && yI <= 250 && c == 0 )
					{
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					  
					   }
					   if ( space2 == 1 )
					     {
					      DrawSquare( 490 , 150 , 80, colors[WHITE]);
					      c = 1 ;
					      g = 1 ;
					     }
					  
					 if ( g == 1 )
					  {
					   DrawSquare( 60 , 730 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 40 && xI <= 80 && yI >= 710 && yI <= 750 && g == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 3;
					  }
					   
					  
					if ( xI >= 40 && xI <= 80 && yI >= 710 && yI <= 750 && g == 1 && r == 3 )
					  {
					   
					   p += 1;
					   r = 0 ;
					  }  
					  
					if ( enter2 == 1 )  
					  {
					   DrawSquare( 60 , 730 ,60,colors[WHITE]);
					   g = 0;
					   w = 1 ;
					   if ( w == 1 )
					   
					   
					   w = 0;
					  }
					  
					if ( xI >= 200 && xI <= 300 && yI >= 500 && yI <= 650 && d == 0 )
					  {
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					  
					   }
					   if ( space3 == 1 )
					     {
					      DrawSquare( 250 , 550 , 80, colors[WHITE]);
					      d = 1 ;
					      h = 1 ;  
					     }
					  
					  if ( h == 1 )
					  {
					   DrawSquare( 880 , 800 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 860 && xI <= 900 && yI >= 780 && yI <= 820 && h == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 4;
					  }
					  
					  if ( xI >= 860 && xI <= 900 && yI >= 780 && yI <= 820 && h == 1 && r == 4 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 0;
					  }
					  
					if ( enter3 == 1 )  
					  {
					   DrawSquare( 880 , 800 ,60,colors[WHITE]);
					   h = 0;
					   
					  }
					  
					if ( pass == 32 && a == 1 || pass == 30 && a == 1 || pass == 28 && a == 1 || pass == 26 && a == 1 || pass == 24 && a == 1 || pass == 22 && a == 1 || pass == 20 && a == 1 || pass == 18 && a == 1  )
					  {
					   DrawString( 650 , 400 , "    *", colors[BLACK] );
				      	   DrawString( 650 , 380 , " * * *", colors[BLACK] );
					   DrawString( 650 , 360 , "    *", colors[BLACK] );
					   DrawString( 650 , 340 , "   * *", colors[BLACK] );
					   
					   a = 0;
					 
					  }
					  
					if ( pass == 32 && b == 1 || pass == 30 && b == 1 || pass == 28 && b == 1 || pass == 26 && b == 1 || pass == 24 && b == 1 || pass == 22 && b == 1 || pass == 20 && b == 1 || pass == 18 && b == 1  )
					  {
					   DrawString( 350 , 460 , "    *", colors[BLACK] );
					   DrawString( 350 , 440 , " * * *", colors[BLACK] );
					   DrawString( 350 , 420 , "    *", colors[BLACK] );
					   DrawString( 350 , 400 , "   * *", colors[BLACK] );
					   
					   b = 0;
					   
					
					  }
					  
					if ( pass == 31 && c == 1 || pass == 29 && c == 1 || pass == 27 && c == 1 || pass == 25 && c == 1 || pass == 23 && c == 1 || pass == 21 && c == 1 || pass == 19 && c == 1 || pass == 17 && c == 1  )
					  {
					   DrawString( 490 , 200 , "    *", colors[BLACK] );
					   DrawString( 490 , 180 , " * * *", colors[BLACK] );
					   DrawString( 490 , 160 , "    *", colors[BLACK] );
					   DrawString( 490 , 140 , "   * *", colors[BLACK] );
					   
					   c = 0;
					   
					  
					  }
					  
					if ( pass == 31 && d == 1 || pass == 29 && d == 1 || pass == 27 && d == 1 || pass == 25 && d == 1 || pass == 23 && d == 1 || pass == 21 && d == 1 || pass == 19 && d == 1 || pass == 17 && d == 1  )
					  {
					   DrawString( 250 , 600 , "    *", colors[BLACK] );
					   DrawString( 250 , 580 , " * * *", colors[BLACK] );
					   DrawString( 250 , 560 , "    *", colors[BLACK] );
					   DrawString( 250 , 540 , "   * *", colors[BLACK] );
					   
					   d = 0;
	   
	  
	                                 }
	  
	  
	  
	
						// blue car
						DrawSquare(xj, 65, 40, colors[BLUE]);
						DrawSquare(xj+35, 65, 40, colors[BLUE]);
						DrawCircle(xj+15,65-15,15,colors[BLUE]);
						DrawCircle(xj+50,65-15,15,colors[BLUE]);
						
						//green car
						DrawSquare(xz, yz, 40, colors[GREEN]);
						DrawSquare(xz+35, yz, 40, colors[GREEN]);
						DrawCircle(xz+15,yz-15,15,colors[GREEN]);
						DrawCircle(xz+50,yz-15,15,colors[GREEN]);
	
	
	                                // third car after the user pick to passengers
					if ( p >= 2 )
					  {
					        DrawSquare(xj, 175, 40, colors[BROWN]);
						DrawSquare(xj+35, 175, 40, colors[BROWN]);
						DrawCircle(xj+15,175-15,15,colors[BROWN]);
						DrawCircle(xj+50,175-15,15,colors[BROWN]);
					   
					  }
	
	                                    
				       if ( xI >= xj-50 && xI <= xj+50 && yI >= yj-50 && yI <= yj+50 && m == 0 )
				       {
				         DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 	 score -= 3;
				         m = 1;
				       }
				       
				       if ( xI >= xj-50 && xI <= xj+50 && yI >= yj-50 && yI <= yj+50 )
				       {
				         DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				       }
				 
				 if ( xI >= xz-50 && xI <= xz+50 && yI >= yz-50 && yI <= yz+50 && m == 0 ){
				 DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 score -= 3;
				 m = 1;
				 }
				 
				 if ( xI >= xz-50 && xI <= xz+50 && yI >= yz-50 && yI <= yz+50 ){
				 DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 }
			
			moveCar();
			//trees
			DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[GREEN] ); 
			DrawSquare(308, 429, 25, colors[BROWN]);
			
			DrawTriangle( 500, 650 , 540, 650 , 520 , 690, colors[GREEN] ); 
			DrawSquare(508, 629, 25, colors[BROWN]);
			
			DrawTriangle( 100, 250 , 140, 250 , 120 , 290, colors[GREEN] ); 
			DrawSquare(108, 229, 25, colors[BROWN]);
			
			DrawTriangle( 700, 250 , 740, 250 , 720 , 290, colors[GREEN] ); 
			DrawSquare(708, 229, 25, colors[BROWN]);
			
				 if (xI >= 280 && xI <= 370 && yI >= 430 && yI <= 480 && m == 0){
				     
				      score -= 2;
				      m = 1;
				       }
				       
				 if (xI >= 280 && xI <= 370 && yI >= 430 && yI <= 480 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				 
				       }
				       
				       	
				       
				if (xI >= 440 && xI <= 550 && yI >= 620 && yI <= 690 && m == 0 ){
				     
				      score -= 2;
				      m = 1;
				       }
				       
				       
				if (xI >= 440 && xI <= 550 && yI >= 620 && yI <= 690 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				   
				       }
				       	
				       
			       if (xI >= 60 && xI <= 180 && yI >= 210 && yI <= 280 && m == 0 ){
				     
				      score -= 2;
				      m = 1;
				       }
				       
			      if (xI >= 60 && xI <= 180 && yI >= 210 && yI <= 280  ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				      
				       }
				       
				       	
				       
			       if (xI >= 670 && xI <= 780 && yI >= 210 && yI <= 280 && m == 0 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				      score -= 2;
				      m = 1;
				       }
				       
				if (xI >= 670 && xI <= 780 && yI >= 210 && yI <= 280 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				       }
				       
		      drawCarR();
		      	
			
				
	      			
	      			if ( score >= 100 )
	      			  {
	      			   DrawSquare(0, 0, 4000, colors[WHITE]);
	      			   DrawString( 400, 500, "Congratulations You Win! ", colors[BLACK]);
	      			  }
	      			cout << "score = " << score << endl;     
		 
			
		
			}
		
			if ( choice3 == 2 )
	 	       {
		
				DrawSquare(0, 0, 4000, colors[WHITE]);
              	
              
	
			        // pavememt
				DrawSquare(200, 650, 40, colors[BLACK]);

				DrawSquare( 200 , 615 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 580 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 545 ,40,colors[BLACK]);
				
				DrawSquare( 200 , 510 ,40,colors[BLACK]);
				
				DrawSquare( 235 , 510 ,40,colors[BLACK]);
				
				
				
				DrawSquare( 800, 300, 40, colors[BLACK]);
				
				DrawSquare( 800 , 265 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 230 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 195 ,40,colors[BLACK]);
				
				DrawSquare( 800 , 160 ,40,colors[BLACK]);
				
				DrawSquare( 765 , 160 ,40,colors[BLACK]); 
				
				
				DrawSquare( 450 , 450, 40, colors[BLACK]);
				
				DrawSquare( 450 , 415 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 380 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 345 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 310 ,40,colors[BLACK]);
				
				DrawSquare( 450 , 275 ,40,colors[BLACK]);
				
				
				DrawSquare( 320 , 700 , 40, colors[BLACK]);
				
				DrawSquare( 355 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 390 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 425 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 460 , 700 ,40,colors[BLACK]);
				
				DrawSquare( 495 , 700 ,40,colors[BLACK]);
				
	
				
				if  (xI >= 160 && xI <= 285  && yI >= 470 && yI <= 590 && m == 0 ){
				
			
				score -= 4;
				  m = 1;
		
				
				}
				
				if  (xI >= 160 && xI <= 285  && yI >= 470 && yI <= 590 ){
				
			
				DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
		
				
				}
				
				
				  
				if (xI >= 725 && xI <= 850 && yI >= 120 && yI <= 350 && m == 0 ){
				
				score -= 4;
				m =1;
				 }
				 
				 if (xI >= 725 && xI <= 850 && yI >= 120 && yI <= 350){
				DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				 }
				 
				 
				 if (xI >= 415 && xI <= 485 && yI >= 225  && yI <= 485 && m == 0 ){
				 
				 score -= 4;
				 m=1;
				  }
				  
				  if (xI >= 415 && xI <= 485 && yI >= 225  && yI <= 485 ){
				 
				   DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				  }
				  
				  
				   if (xI >= 295  && xI <= 515 && yI >= 645  && yI <= 750 && m == 0 ){
				   DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				   score -= 4;
				   m=1;
				     }
				     
				     if (xI >= 295  && xI <= 515 && yI >= 645  && yI <= 750 ){
				     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
				     }
	     
	     
                       
                       
                       
                       
                       
					DrawSquare( 650 , 700 , 40, colors[BLACK]);
					
					DrawSquare( 685 , 700 ,40,colors[BLACK]);
					
					DrawSquare( 720 , 700 ,40,colors[BLACK]);
					
					DrawSquare( 755 , 700 ,40,colors[BLACK]);
					
					
					DrawSquare( 50 , 250 , 40, colors[BLACK]);
					
					DrawSquare( 50 , 180 , 40, colors[BLACK]);
					
					DrawSquare( 50 , 145 ,40,colors[BLACK]);
					
					DrawSquare( 50 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 50 , 75 ,40,colors[BLACK]);
					
					DrawSquare( 85 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 120 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 155 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 190 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 225 , 110 ,40,colors[BLACK]);
					
					
					
					DrawSquare( 350 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 385 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 420 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 455 , 110 ,40,colors[BLACK]);
					
					DrawSquare( 490 , 110 ,40,colors[BLACK]);
					
					
					DrawSquare( 155 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 190 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 225 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 260 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 295 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 330 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 365 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 400 , 0 ,40,colors[BLACK]);
					
					DrawSquare( 435 , 0 ,40,colors[BLACK]);
					
					
					if (xI >= 625 && xI <= 770 && yI >= 670  && yI <= 730 && m == 0 ){
					     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					     score -= 4;
					     m = 1;
					      }
					      
					      if (xI >= 625 && xI <= 770 && yI >= 670  && yI <= 730 ){
					     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					      }
					     
					       if (xI >= 450 && xI <= 510 && yI >= 70  && yI <= 140 && m == 0 ){
					       DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					       score -= 4;
					       m = 1;
					       }
					       
					       if (xI >= 450 && xI <= 510 && yI >= 70  && yI <= 140 ){
					       DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
					       }
					       
					       
						if (xI >= 130 && xI <= 235 && yI >= 0 && yI <= 65 && m == 0 ){ 
						DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						score -= 4;
						m = 1;
						 }
						 
						 if (xI >= 130 && xI <= 235 && yI >= 0 && yI <= 65 ){ 
						DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						 }
						 
						 
					
					
					
					DrawSquare( 1000 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 965 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 930 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 895 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 860 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 600 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 565 ,40,colors[BLACK]);
					
					DrawSquare( 825 , 530 ,40,colors[BLACK]);
					
					if (xI >= 800 && xI <= 1050 && yI >= 500 && yI <= 620 && m == 0 ){
						     DrawString( 400, 500, "Oops! You Hit an obstacle! ", colors[BLACK]);
						     score -= 4;
						     m = 1;
						     }
					
					//Display Score
					DrawString( 50, 800, "Score = 0 "+score , colors[BLACK]);
					
					// passenger figure
					DrawString( 650 , 400 , "    *", colors[BLACK] );
					DrawString( 650 , 380 , " * * *", colors[BLACK] );
					DrawString( 650 , 360 , "    *", colors[BLACK] );
					DrawString( 650 , 340 , "   * *", colors[BLACK] );
					
					DrawString( 350 , 460 , "    *", colors[BLACK] );
					DrawString( 350 , 440 , " * * *", colors[BLACK] );
					DrawString( 350 , 420 , "    *", colors[BLACK] );
					DrawString( 350 , 400 , "   * *", colors[BLACK] );
					
					DrawString( 490 , 200 , "    *", colors[BLACK] );
					DrawString( 490 , 180 , " * * *", colors[BLACK] );
					DrawString( 490 , 160 , "    *", colors[BLACK] );
					DrawString( 490 , 140 , "   * *", colors[BLACK] );
					
					DrawString( 250 , 600 , "    *", colors[BLACK] );
					DrawString( 250 , 580 , " * * *", colors[BLACK] );
					DrawString( 250 , 560 , "    *", colors[BLACK] );
					DrawString( 250 , 540 , "   * *", colors[BLACK] );
					
	  
					if ( xI >= 600 && xI <= 700 && yI >= 300 && yI <= 450 && a == 0 )
					  {
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					   
					  }
					     
					      if ( space == 1 )
						    {
					      DrawSquare( 650 , 330 , 100, colors[WHITE]);
					      a = 1;
					      e = 1;
						    }
						
					if ( e == 1 )
					  {
					   DrawSquare( 390 , 230 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 370 && xI <= 410 && yI >= 210 && yI <= 250 && e == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 1;
					   
					  }
					  
					  
					if ( xI >= 370 && xI <= 410 && yI >= 210 && yI <= 250 && e == 1 && r == 1 )
					  {
					   
					   p += 1;
					   r = 0;
					  }
					  
					  
					if ( enter == 1 )  
					  {
					   DrawSquare( 390 , 230 ,60,colors[WHITE]);
					   e = 0;
					   //score += 10;
					  }
					  
					  
					if ( xI >= 300 && xI <= 400 && yI >= 360 && yI <= 500 && b == 0 )
					{
					   DrawString( 350, 400, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					   
					   }
					   if ( space1 == 1 )
					     {
					      DrawSquare( 350 , 390 , 100, colors[WHITE]);
					      b = 1;
					      f = 1;
					     }
					     
					 if ( f == 1 )
					  {
					   DrawSquare( 690 , 130 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 670 && xI <= 710 && yI >= 110 && yI <= 150 && f == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   
					  }
					  
					  
					
					  
					if ( enter1 == 1 )  
					  {
					   DrawSquare( 690 , 130 ,60,colors[WHITE]);
					   f = 0;
					  
					  }
					  
					if ( xI >= 450 && xI <= 550 && yI >= 100 && yI <= 250 && c == 0 )
					{
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					  
					   }
					   if ( space2 == 1 )
					     {
					      DrawSquare( 490 , 150 , 80, colors[WHITE]);
					      c = 1 ;
					      g = 1 ;
					     }
					  
					 if ( g == 1 )
					  {
					   DrawSquare( 60 , 730 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 40 && xI <= 80 && yI >= 710 && yI <= 750 && g == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 3;
					  }
					   
					  
					if ( xI >= 40 && xI <= 80 && yI >= 710 && yI <= 750 && g == 1 && r == 3 )
					  {
					   
					   p += 1;
					   r = 0 ;
					  }  
					  
					if ( enter2 == 1 )  
					  {
					   DrawSquare( 60 , 730 ,60,colors[WHITE]);
					   g = 0;
					   w = 1 ;
					   if ( w == 1 )
					   
					   
					   w = 0;
					  }
					  
					if ( xI >= 200 && xI <= 300 && yI >= 500 && yI <= 650 && d == 0 )
					  {
					   DrawString( 400, 500, "press 'Spacebar' to pick the passenger ", colors[BLACK]);
					  
					   }
					   if ( space3 == 1 )
					     {
					      DrawSquare( 250 , 550 , 80, colors[WHITE]);
					      d = 1 ;
					      h = 1 ;  
					     }
					  
					  if ( h == 1 )
					  {
					   DrawSquare( 880 , 800 ,60,colors[GREEN]);
					   
					  }
					  
					if ( xI >= 860 && xI <= 900 && yI >= 780 && yI <= 820 && h == 1 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 4;
					  }
					  
					  if ( xI >= 860 && xI <= 900 && yI >= 780 && yI <= 820 && h == 1 && r == 4 )
					  {
					   DrawString( 400, 500, "press 'Enter' to drop the passenger ", colors[BLACK]);
					   r = 0;
					  }
					  
					if ( enter3 == 1 )  
					  {
					   DrawSquare( 880 , 800 ,60,colors[WHITE]);
					   h = 0;
					   
					  }
					  
					if ( pass == 32 && a == 1 || pass == 30 && a == 1 || pass == 28 && a == 1 || pass == 26 && a == 1 || pass == 24 && a == 1 || pass == 22 && a == 1 || pass == 20 && a == 1 || pass == 18 && a == 1  )
					  {
					   DrawString( 650 , 400 , "    *", colors[BLACK] );
				      	   DrawString( 650 , 380 , " * * *", colors[BLACK] );
					   DrawString( 650 , 360 , "    *", colors[BLACK] );
					   DrawString( 650 , 340 , "   * *", colors[BLACK] );
					   
					   a = 0;
					 
					  }
					  
					if ( pass == 32 && b == 1 || pass == 30 && b == 1 || pass == 28 && b == 1 || pass == 26 && b == 1 || pass == 24 && b == 1 || pass == 22 && b == 1 || pass == 20 && b == 1 || pass == 18 && b == 1  )
					  {
					   DrawString( 350 , 460 , "    *", colors[BLACK] );
					   DrawString( 350 , 440 , " * * *", colors[BLACK] );
					   DrawString( 350 , 420 , "    *", colors[BLACK] );
					   DrawString( 350 , 400 , "   * *", colors[BLACK] );
					   
					   b = 0;
					   
					
					  }
					  
					if ( pass == 31 && c == 1 || pass == 29 && c == 1 || pass == 27 && c == 1 || pass == 25 && c == 1 || pass == 23 && c == 1 || pass == 21 && c == 1 || pass == 19 && c == 1 || pass == 17 && c == 1  )
					  {
					   DrawString( 490 , 200 , "    *", colors[BLACK] );
					   DrawString( 490 , 180 , " * * *", colors[BLACK] );
					   DrawString( 490 , 160 , "    *", colors[BLACK] );
					   DrawString( 490 , 140 , "   * *", colors[BLACK] );
					   
					   c = 0;
					   
					  
					  }
					  
					if ( pass == 31 && d == 1 || pass == 29 && d == 1 || pass == 27 && d == 1 || pass == 25 && d == 1 || pass == 23 && d == 1 || pass == 21 && d == 1 || pass == 19 && d == 1 || pass == 17 && d == 1  )
					  {
					   DrawString( 250 , 600 , "    *", colors[BLACK] );
					   DrawString( 250 , 580 , " * * *", colors[BLACK] );
					   DrawString( 250 , 560 , "    *", colors[BLACK] );
					   DrawString( 250 , 540 , "   * *", colors[BLACK] );
					   
					   d = 0;
	   
	  
	                                 }
	  
	  
	  
	
						// blue car
						DrawSquare(xj, 65, 40, colors[BLUE]);
						DrawSquare(xj+35, 65, 40, colors[BLUE]);
						DrawCircle(xj+15,65-15,15,colors[BLUE]);
						DrawCircle(xj+50,65-15,15,colors[BLUE]);
						
						//green car
						DrawSquare(xz, yz, 40, colors[GREEN]);
						DrawSquare(xz+35, yz, 40, colors[GREEN]);
						DrawCircle(xz+15,yz-15,15,colors[GREEN]);
						DrawCircle(xz+50,yz-15,15,colors[GREEN]);
	
	
	                                // third car after the user pick to passengers
					if ( p >= 2 )
					  {
					        DrawSquare(xj, 175, 40, colors[BROWN]);
						DrawSquare(xj+35, 175, 40, colors[BROWN]);
						DrawCircle(xj+15,175-15,15,colors[BROWN]);
						DrawCircle(xj+50,175-15,15,colors[BROWN]);
					   
					  }
	
	                                    
				       if ( xI >= xj-50 && xI <= xj+50 && yI >= yj-50 && yI <= yj+50 && m == 0 )
				       {
				         DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 	 score -= 2;
				         m = 1;
				       }
				       
				       if ( xI >= xj-50 && xI <= xj+50 && yI >= yj-50 && yI <= yj+50 )
				       {
				         DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				       }
				 
				 if ( xI >= xz-50 && xI <= xz+50 && yI >= yz-50 && yI <= yz+50 && m == 0 ){
				 DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 score -= 2;
				 m = 1;
				 }
				 
				 if ( xI >= xz-50 && xI <= xz+50 && yI >= yz-50 && yI <= yz+50 ){
				 DrawString( 400, 500, "Oops! You Hit a car! ", colors[BLACK]);
				 }
			
			moveCar();
			//trees
			DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[GREEN] ); 
			DrawSquare(308, 429, 25, colors[BROWN]);
			
			DrawTriangle( 500, 650 , 540, 650 , 520 , 690, colors[GREEN] ); 
			DrawSquare(508, 629, 25, colors[BROWN]);
			
			DrawTriangle( 100, 250 , 140, 250 , 120 , 290, colors[GREEN] ); 
			DrawSquare(108, 229, 25, colors[BROWN]);
			
			DrawTriangle( 700, 250 , 740, 250 , 720 , 290, colors[GREEN] ); 
			DrawSquare(708, 229, 25, colors[BROWN]);
			
				 if (xI >= 280 && xI <= 370 && yI >= 430 && yI <= 480 && m == 0){
				     
				      score -= 4;
				      m = 1;
				       }
				       
				 if (xI >= 280 && xI <= 370 && yI >= 430 && yI <= 480 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				 
				       }
				       
				       	
				       
				if (xI >= 440 && xI <= 550 && yI >= 620 && yI <= 690 && m == 0 ){
				     
				      score -= 4;
				      m = 1;
				       }
				       
				       
				if (xI >= 440 && xI <= 550 && yI >= 620 && yI <= 690 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				   
				       }
				       	
				       
			       if (xI >= 60 && xI <= 180 && yI >= 210 && yI <= 280 && m == 0 ){
				     
				      score -= 4;
				      m = 1;
				       }
				       
			      if (xI >= 60 && xI <= 180 && yI >= 210 && yI <= 280  ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				      
				       }
				       
				       	
				       
			       if (xI >= 670 && xI <= 780 && yI >= 210 && yI <= 280 && m == 0 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				      score -= 4;
				      m = 1;
				       }
				       
				if (xI >= 670 && xI <= 780 && yI >= 210 && yI <= 280 ){
				      DrawString( 400, 500, "Oops! You Hit a tree! ", colors[BLACK]);
				       }
				       
		      drawCarY();
		      	
			
				
	      			
	      			if ( score >= 100 )
	      			  {
	      			   DrawSquare(0, 0, 4000, colors[WHITE]);
	      			   DrawString( 400, 500, "Congratulations You Win! ", colors[BLACK]);
	      			  }
	      			cout << "score = " << score << endl;
		 
	 	        }
	
	
		}
	
	
	else if ( choice == 2 )
	       {
	        DrawSquare(0, 0, 4000, colors[WHITE]);
	
	        L_Bord();
	        
	   
	        }
	       
	       
	//glutPostRedisplay();
        glutSwapBuffers();
	//board staRTS FROM HERE
	
	}


/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */
// function to move the car
void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;
              
	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	}
	
	
	if (key
			== GLUT_KEY_LEFT && s == 1 /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 20;
              
	} else if (key
			== GLUT_KEY_RIGHT && s == 1 /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 20;
	} else if (key
			== GLUT_KEY_UP && s == 1  /*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 20;
	}

	else if (key
			== GLUT_KEY_DOWN && s == 1  /*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 20;
	}
        
        
	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
 
 //function to make changes when exact key entered
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed

		}
	if ( key == 49 )
	  {
	choice = 1;
	  }
	else if ( key == 50 )
	       {
	choice = 2;
	       }
	else if ( key == 51 )
	       {
	choice2 = 1;
	       }
	else if ( key == 52 )
	       {
	choice2 = 2;
	       }
	else if ( key == 53 )
	       {
	choice3 = 1;
	       }
	else if ( key == 54 )
	       {
	choice3 = 2;
	       }
	else if ( key == 32 && xI >= 600 && xI <= 700 && yI >= 300 && yI <= 450  )
	       {
	space = 1;
	pass--;
        enter = 0;
	       }
	else if ( key == 32 && xI >= 300 && xI <= 400 && yI >= 360 && yI <= 500  )
	       {
	space1 = 1;
	pass--;
	enter1 = 0;
	       }
	else if ( key == 32 && xI >= 450 && xI <= 550 && yI >= 100 && yI <= 250  )
	       {
	space2 = 1;
        pass--;
        enter2 = 0;
	       }
	else if ( key == 32 && xI >= 200 && xI <= 300 && yI >= 500 && yI <= 650  )
	       {
	space3 = 1;
	pass--;
	enter3 = 0;
	       }
	       
	else if ( key == 13 && xI >= 370 && xI <= 410 && yI >= 210 && yI <= 250 )
	        {
	         enter = 1;
	         score += 10;
	        }
	else if ( key == 13 &&  xI >= 670 && xI <= 710 && yI >= 110 && yI <= 150 )
	        {
	         enter1 = 1;
	         score += 10;
	        }
       else if ( key == 13 && xI >= 40 && xI <= 80 && yI >= 710 && yI <= 750 )
	        {
	         enter2 = 1;
	         score += 10;
	        }
       else if ( key == 13 && xI >= 860 && xI <= 900 && yI >= 780 && yI <= 820 )
	        {
	         enter3 = 1;
	         score += 10;
	        }
	        
	
	glutPostRedisplay();
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
	//moveCar();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
	

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
		

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
 
 // main function
int main(int argc, char*argv[]) {

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */


	
                
                       
