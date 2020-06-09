#include<iostream>
#include<stdio.h>
#include "iGraphics.h"
#include "bitmap_loader.h"

#include "Collision.h"   //THis header file is for all Collision parts of the game
#include "Score.h"       //THis header file is for all Scoring parts of the game
#include "Level1.h"      //THis header file is for level1 parts of the game 
#include "Level2.h"      //THis header file is for level2 parts of the game

using namespace std;


/*
    in   Level1AllFunctions() the all functions of level1 are included with hint name and came cases.

*/

	void Level1AllFunctions()  


	 {   

		gamepointWithRings();
		gamepointWithBalls();
		gamepointWithFood();
		collisonWithObstacle();
		collisonWithEnemy1();
		boundary();
		sonicJump();
		showScore();
		//updateHighScore();
		//HighScore();
		showTime();
		gameSetWithTime();
		ringCount();
		lifeCount();



	 }




	/*gameState() is worked with all states of the game ..it is used in menu button states at iMouse() or in return main menu with mouse click .Full gameplay are dependent on it */

	void gameState()
	 {

		   if (gamestate == -1)
		                      {
	                             iShowImage(0, 0, screenWidth, screenHeight, image0); //here first image of the game is showed through iShowBMP() functions

		                      }

		   else if (gamestate == 0)                                             //here MENU design are happend.....
		                      {
			                      iClear();
			                      iShowImage(0, 0, screenWidth, screenHeight, menu);

			                       iSetColor(255, 0, 0);
								   iFilledRectangle(1038, 370, 150, 40);

			                       iSetColor(0, 0, 0);
			                       iText(1055, 382, "NEW GAME", GLUT_BITMAP_HELVETICA_18);

								   iSetColor(255, 0, 0);
								   iFilledRectangle(1038, 320, 150, 40);
								    iSetColor(0, 0, 0);
									iText(1055, 333, "HIGHSCORE", GLUT_BITMAP_HELVETICA_18);


									iSetColor(255, 0, 0);
									iFilledRectangle(1038, 270, 150, 40);
									iSetColor(0, 0, 0);
									iText(1055, 282, "SETTINGS", GLUT_BITMAP_HELVETICA_18);

									iSetColor(255, 0, 0);
									iFilledRectangle(1038, 220, 150, 40);
									iSetColor(0, 0, 0);
									iText(1055, 232, "HELP", GLUT_BITMAP_HELVETICA_18);

									iSetColor(255, 0, 0);
									iFilledRectangle(1038, 170, 150, 40);
									iSetColor(0, 0, 0);
									iText(1055, 182, "ABOUT", GLUT_BITMAP_HELVETICA_18);


									iSetColor(255, 0, 0);
									iFilledRectangle(1038, 120, 150, 40);
									iSetColor(0, 0, 0);
									iText(1055, 132, "EXIT", GLUT_BITMAP_HELVETICA_18);

							}

		else if (gamestate == 1)                     //here whole Level1 game Play is called through functions....
		                    {
			                     LevelOne();
			                     Level1AllFunctions();

		                    }
 





		else if (gamestate == 2)                   //this game state is for exit the game
		                    {
			                    exit(0);
		                    }

		else if (gamestate == 3)                  //here whole Level2 game Play is called through functions....
		                      {
  
			                     LevelTwo();



			 
		
			                      showScore();
			                      showTime();
			                      
								 // updateHighScore();
								 // HighScore();
			                      gameSetWithTime();
			                      ringCount();
			                      lifeCount();
			                      sonicJump();
			                      boundary();
			                      collisonWithObstacle();
			                      collisonWithEnemy2();
			                      bossEnemy();
			                      gamepointWithRings();
			                      gamepointWithBalls();
			                      gamepointWithFood();
			
		                      }


		else if (gamestate == 5)                                                         //here the highScore Image is showed throgh iShowBMP() function
		                      {
			                     iShowImage(0, 0, screenWidth, screenHeight, highscore);
								 iSetColor(rand() % 255, rand() % 255, rand() % 255);
								 iText(415, 370, "HIGH SCORE:", GLUT_BITMAP_TIMES_ROMAN_24);
								 iSetColor(255, 255, 255);
								 iText(460, 574, "Main Menu", GLUT_BITMAP_TIMES_ROMAN_24);
		                       }
		                                   
		else if (gamestate == 6)                                                         //here the help Image is showed throgh iShowBMP() function
		                      {
			                      iShowImage(0, 0, screenWidth, screenHeight, help);

								  iSetColor(255, 255, 255);
								  iText(70, 32, "Main Menu", GLUT_BITMAP_TIMES_ROMAN_24);


		                      }
		else if (gamestate == 7)
		                      {

			             
		                        	iShowImage(0, 0, screenWidth, screenHeight, about);   //here the about Image is showed throgh iShowBMP() function

									iSetColor(255, 255, 255);
									iText(1008, 583, "Main Menu", GLUT_BITMAP_TIMES_ROMAN_24);
		                      }
		else if (gamestate == 8)
		                     {
		                        	iShowImage(0, 0, screenWidth, screenHeight, level2); //img of level2 Image is showed throgh iShowBMP() function

		                     }

		else if (gamestate == 9)
		{
			iShowImage(0, 0, screenWidth, screenHeight, resume); //img of resume Image is showed throgh iShowBMP() function
			//iDraw();
			iSetColor(255, 0, 0);
			iText(770, 120, "Resume Game", GLUT_BITMAP_TIMES_ROMAN_24);
			iSetColor(255, 0, 0);
			iText(770, 75, "Main Menu", GLUT_BITMAP_TIMES_ROMAN_24);

		}

		

		else if (gamestate == 11)
		                     {
		                           	iShowImage(0, 0, screenWidth, screenHeight, musiconoff);  //here the music Image is showed throgh iShowBMP() function

		                     }
  
		else if (gamestate == 12)
		                      {


			                         iShowImage(0, 0, screenWidth, screenHeight, gameover);    //here the game over Image is showed throgh iShowBMP() function

			
									 iSetColor(255, 255, 255);
									 iText(515, 25, "MainMenu", GLUT_BITMAP_TIMES_ROMAN_24);
			                         iSetColor(rand() % 255, rand() % 255, rand() % 255);
			                         iText(460,95, "YOUR SCORE IS:", GLUT_BITMAP_TIMES_ROMAN_24);


									// iText(100, 150, "Enter Name: ");
									// iText(200, 150, player);

									



		                     }
		else if (gamestate == 13)
		                        {
		                           	iShowImage(0, 0, screenWidth, screenHeight, win);              //here the wingame Image is showed throgh iShowBMP() function
		                        	iText(460, 95, "YOUR SCORE IS:", GLUT_BITMAP_TIMES_ROMAN_24);
									iSetColor(rand() % 255, rand() % 255, rand() % 255);
									iText(460, 95, "YOUR SCORE IS:", GLUT_BITMAP_TIMES_ROMAN_24);

		                        }
		else if (gamestate == 14)
		                        {

		                         	PlaySound(0, 0, 0);                                             //music function is off through bool keyword
			                        music = false;
			                        gamestate = 11;
		                         }
		else if (gamestate == 15)
		                         {



			                          PlaySound("music.wav", NULL, SND_LOOP | SND_ASYNC);              //music function is called at state11


			
			                          gamestate = 11;
		                         }

		else if (gamestate == 16)
		                        {


			                           gamestate = 0;                                                        //music function is called at state0
		                            	PlaySound("gameplaymusiclevel1.wav", NULL, SND_LOOP | SND_ASYNC);




		                        }



     	}
	 

		/*	void highScore()


					{

				struct savedScores{
					int time;
					char pl[30];
				}sc[5], tempSc;

				int tm = 0;
				char timeSc[20];
				char player[30];
				int ind = 0;
				
				FILE* highScoreFile;

				void ghori(){                       //score j time hishebe ta game e show........
					sprintf(timeSc, "Time: %d", tm);
				}

				void updateHighScore()
				{
					
					highScoreFile = fopen("highScore.txt", "r");//file read start
					int i = 0, j;
					while (fscanf(highScoreFile, "%s %d", &sc[i].pl, &sc[i].time) != EOF)
					{
						i++;
					}
					fclose(highScoreFile); //file read end
					for (i = 0; i<5; i++)
					{
						if (tm<sc[i].time)
						{
							for (j = 4; j>i; j--)
							{
								sc[j] = sc[j - 1];
							}
							sc[i].time = tm;
							strcpy(sc[i].pl, player);
							break;
						}
					}
					highScoreFile = fopen("highScore.txt", "w");
					for (i = 0; i<5; i++)
					{
						fprintf(highScoreFile, "%s %d\n", sc[i].pl, sc[i].time);
					}
					fclose(highScoreFile);

				}
					*/
					


	

		/*In iDraw() functions all the functions of gameplay are called.....and iDraw calls the functions repeatedly*/

	void iDraw()
	{
		//place your drawing codes here

		iClear();                           //iCLear() clears the game
		gameState();
	    showScore();
	
	
     }


    void iMouseMove(int mx, int my)
      {
  	   
	     printf("x= %d, y=%d\n",mx,my);

	
      }



	/*In void iMouse() functions the work of button states are done */


void iMouse(int button, int state, int mx, int my)
{


	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	                                                    {
		                                                   if(mx>=1041 && mx<=1170 && my>=31 && my<=76 )gamestate=0;
	                                                      else if(mx>=1038 && mx<=1188 && my>=372 && my<=413)gamestate=1;//gameplay
	                                                   	  else if(mx>=1038 && mx<=1188 && my>=122 && my<=163)gamestate=2;
	 	                                                  else if(mx>=1038 && mx<=1188 && my>=321 && my<=363)gamestate=5;
		                                                  else if(mx>=1038 && mx<=1188 && my>=223 && my<=261)gamestate=6;
														          
		                                                  else if(mx>=1038 && mx<=1188 && my>=173 && my<=211)gamestate=7;
		                                                  else if(mx>=1085 && mx<=1225 && my>=462 && my<=484)gamestate=8;
		                                                  else if(mx>=1038 && mx<=1188 && my>=273 && my<=313)gamestate=11;
		                                                  else if(mx>=70 && mx<=188 && my>=26 && my<=501)gamestate=0;//return main menu from help
		                                                  else if(mx>=452 && mx<=587 && my>=571 && my<=597)gamestate=0;	//return main menu from hscore
		                                                  else if(mx>=1008 && mx<=1127 && my>=583 && my<=620)gamestate=0;	//return main menu from about
		                                                  else if(mx>=327 && mx<=412&& my>=154 && my<=210)gamestate=0;//return main menu from choose level
		                                                  else if(mx>=24 && mx<=243 && my>=39 && my<=74)gamestate=0;
		                                                  else if(mx>=2010 && mx<=2171 && my>=274 && my<=207)gamestate=0;//return main menu from winpage
														  else if (mx >= 515 && mx <= 626 && my >= 24 && my <=50)gamestate =0;//return main menu from game overpage	   
														  else if(mx>=969 && mx<=1060 && my>=320 && my<=359)gamestate=14;//off the music of game
														  else if(mx>=884 && mx<=948 && my>=320 && my<=359)gamestate=15;
														  else if (mx >= 772 && mx <= 919 && my >=117 && my <= 141) gamestate = 1;//resume game from pause game
														  else if (mx >= 769 && mx <= 889 && my >= 73 && my <= 98)

														                                                       {
															                                                             gamestate = 0;//return main menu from pause game 

															
																														 score = 0;
																														 tcount = 126, lifecount = 3, rcount = 0;
																														 enemy1CorX = 2600, enemy1CorY = 175, enemy1MoveSpeed = 20;
																														 sonicCorx = 145, sonicCory = 155, sonicMovementSpeed = 15;
																														 ring1CorX = 400, ring2CorX = 450, ring3CorX = 500, ring4CorX = 350, ringsCorYwithHeight = 238, ringsMoveSpeed = 12;
																														 ball1CorX = 1600, ball2CorX = 1650, ball3CorX = 1700, ball4CorX = 1750, ballsCorYwithHeight = 350, ballsMoveSpeed = 12;
																														 obstacleCorx = 950, obstacleCory = 155, obstacle2Corx = 990, obstacle2Cory = 155, obsMoveSpeed = 8, obs2MoveSpeed = 8;
																														 bonusfoodCorX = 2500, bonusfoodCorwithHeight = 238, bonusball1CorX = 1800, foodsMoveSpeed = 15;
																														 enemy2CorX = 2600, enemy2CorY = 175, enemy2MoveSpeed = 20;
																														 i = 1;
																														 sonicCordinateJump = 0, sonicCordinateJumpSpeedup = 24, sonicCordinateJumpSpeeddown = 7;
																														 bossEnemyCorX = 1400, bossEnemyCorY = 200, bossEnemyMoveSpeed = 20;
																														 backgroundSpeed = 10;


														                                                       }
															  
															
														   
	                                                  }
														  
														  

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	                                                    {
		                                                     //place your codes here
		                                                    //if(mx>=0 && mx<=1100 && my>=0 && my<=720 )gamestate=9;
		                                                   //if(mx>=1101 && mx<=1280 && my>=0 && my<=720 )gamestate=10;
	                                                    }


}
  

/*in iKeyboard() alternative music onoff has been done*/

void iKeyboard(unsigned char key)
{

	if(key=='1' && gamestate!=1)
	                            {
	                             	PlaySound("gameplaymusiclevel1.wav",NULL,SND_LOOP|SND_ASYNC);
		
	                            }
	else if(key=='2' && gamestate!=1)
	                               {
	                                       PlaySound("music.wav",NULL,SND_LOOP|SND_ASYNC);
	                               }
	
	else if(key=='0' && gamestate!=1)
	                                  {
	                                     PlaySound(0,0,0);
		                                 music=false;
	                                  }
	else if (key == 'p' && gamestate == 1 || key == 'p' && gamestate == 3)
	                                    {
		                                     gamestate = 9;
		
                                    	}



	//else if (gamestate == 12)
	//{
	//	if (key == '\b')
	//	{
	//		if (ind>0)ind--;
	//		player[ind] = '\0';
	//	}
	//	else if (key == '\r')
	//	{
		//	  player[ind] = '\0';
		//	  updateHighScore();
		//	  gamestate =0;
		//}
		//else
		//{
		//	player[ind] = key;
	   //  	ind++;
		//}
	//}//
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/





/*iSpecialKeyboard alternative character sonic movement has been done*/
void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_RIGHT)
	                          {
		                           //index++;
		                           sonicCorx=sonicCorx+sonicMovementSpeed;
								    
									
									

		                           //if(index>=7)
	                               //	{
			                      //index=0;
	                              //	}
	                          }
	else if (key == GLUT_KEY_LEFT)
	                              {
	                                  	//index--;
		                              //  sonicCorx=sonicCorx-sonicMovementSpeed;
										
									    
										sonicCorx=sonicCorx-sonicMovementSpeed;
										
	                                   //	if(index<0)
	                                   //	{
		                              //	index=6;
		                              //}
	                              }
	else if (key == GLUT_KEY_UP)
	                              {

									 
                               
		                             if(!jump)
		                                     {
		                                        jump=true;
			                                    jumpup=true;

												
												
												
		                                     }
		                          
									// sonicCorx=sonicCorx+sonicMovementSpeed;
									 
		
	                              }

	else if (key == GLUT_KEY_DOWN)
	                              {
	                             	//sonicCory-=sonicMovementSpeed;
	                              }

	else if (key == GLUT_KEY_END)
	                             {
		                           exit(0);
	                             }

	else if (key == GLUT_KEY_HOME)
	                             {
	                                gamestate=0;
	                             }

	
}


/*Here at setAll() function the backGround is set for rendering and call this function in imain()   
and void change() functions is used for change the background and call it in iMain() as a paramerter of iSetTimer() function*/

void setAll()

{
	int sum=0;
	for(int i=0;i<10;i++)
	                     {
		                   fullbackground[i].y=0;
		                   fullbackground[i].x=sum;
		                   sum=sum+121;
	                     }

}


void change()
{


  for(int i=0;i<10;i++)
                       {
                                fullbackground[i].x-=backgroundSpeed;

	                            if( fullbackground[i].x<=0)

                                                           {
	                                                            fullbackground[i].x=screenWidth;
                                                           }
                       }
  

}


/*in int main()  music function is initialiazed and iSettimer() functions are also initialized ,
Besides.in there all the images of PNG and JPG format are initialized in a integer variable and here game screen
has been initialized*/
int main()
{
	
	//iSetTimer(1000,enemy);
   if(music)
	        {
	           PlaySound("music.wav",NULL,SND_LOOP|SND_ASYNC);                                 /*here in sound function the foramt of the music must be wav.and SND_LOOP means 
																						         play the music repetedly and SND_ASYNC 
																				                 means play the music singe time*/
	        }

    setAll();
    iSetTimer(45,change);
	iSetTimer(1000,gameTimer);
	iSetTimer(90,autoMovement);

	iInitialize(screenWidth,screenHeight, "Sonic");
	

	menu = iLoadImage("images\\menu.jpg");
	image0 = iLoadImage("images\\one.jpg");
	highscore = iLoadImage("images\\highscore.jpg");
	help = iLoadImage("images\\help.jpg");
	about = iLoadImage("images\\about.jpg");
	level2 = iLoadImage("images\\level.jpg");
	gameplay = iLoadImage("images\\lvl1.jpg");
	lvl2=iLoadImage("images\\level2.jpg");
	lvl3=iLoadImage("images\\level3.jpg");
	musiconoff=iLoadImage("images\\musicoff.jpg");
	gameover=iLoadImage("images\\gameover.jpg");
	gamechart=iLoadImage("bgrand\\gamechart.jpg");
	win=iLoadImage("images\\win.jpg");
	resume = iLoadImage("images\\resume.jpg");
	
	iStart(); 
	return 0;
}

