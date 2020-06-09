
#define LEVEL1_H_INCLUDED










/*This header file is for all the Gameplay around Level1.Besides,Background images are initialized there.Firstly,
all the variable are decalred and initialiazed and then Sonic Jump ,Sonic Auto Movement have been done*/

struct background
{

	int x;
	int y;

};

background fullbackground[10];


bool jump = false;
bool jumpup = false;
int jumpLimit = 200;
int indexSpeed = 1;
char backgroundImage[10][30] = { "bgrand\\1.1_120.bmp", "bgrand\\2.120_240.bmp", "bgrand\\3.240_360.bmp", "bgrand\\4.360_480.bmp", "bgrand\\5.480_600.bmp", "bgrand\\6.600_720.bmp", "bgrand\\7.720_840.bmp", "bgrand\\8.840_960.bmp", "bgrand\\9.960_1080.bmp", "bgrand\\10.1080_1200.bmp" };

int circlex = 100, circley = 100;
int image0, menu, highscore, help, about, level2, gameplay, lvl2, lvl3, musiconoff, gameover, win, gamechart,resume;
int index = 0;

char ren[7][30]={"img\\s1.bmp","img\\s2.bmp","img\\s3.bmp","img\\s4.bmp","img\\s5.bmp","img\\s6.bmp","img\\s7.bmp"};




void sonicJump()

{
	if (jump)
	         {

		        if (jumpup)
		                   {
			                 iShowBMP2(sonicCorx, sonicCory + sonicCordinateJump, "img\\jumpup.bmp", 0);
		                   }

		        else
		                   {
			                   iShowBMP2(sonicCorx, sonicCory + sonicCordinateJump, "img\\jumpdown.bmp", 0);
		                   }


	          }


	 else
	             {
		             iShowBMP2(sonicCorx, sonicCory, ren[index], 0);
	             }





	if (jump)

	       {

		       if (jumpup)
		                 {
		                 	sonicCordinateJump += sonicCordinateJumpSpeedup;

			                //sonicCorx=sonicCorx+10;
			                   if (sonicCordinateJump >= jumpLimit)
			                                                     {
				                                                    jumpup = false;


			                                                      }


		    }



		else
		        {
			           sonicCordinateJump -= sonicCordinateJumpSpeeddown;

			           if (sonicCordinateJump<0)
			                                  {
				                                jump = false;
				                                sonicCordinateJump = 0;

			                                  }

		        }


	}


}


void autoMovement()                                   //autoMovement()  is for Sonic's  autoMovement in game
 
{
	index += indexSpeed;
	//backgroundSpeed = 10;
	//	sonicCorx=sonicCorx+sonicMovementSpeed;
	if (index >= 7)
	              {
		              index = 0;
	              }

}





void LevelOne()                                 //here all the works of Level1 hasbeen done


{



	PlaySound(0, 0, 0);
	// music=false;



	for (int i = 0; i < 10; i++)                   //here the loop is for Play the render image repeatedly
	                            {

		                            iShowBMP(fullbackground[i].x, fullbackground[i].y, backgroundImage[i]);

	                            }

	iShowImage(0, 0, 120, 663, gamechart);
	iSetColor(rand() % 255, rand() % 255, rand() % 255);
	iText(22, 550, "LEVEL 1:", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 255);
	iText(15, 400, "Score:", GLUT_BITMAP_HELVETICA_18);
	iText(15, 350, "Time:", GLUT_BITMAP_HELVETICA_18);
	iText(15, 300, "Rings:", GLUT_BITMAP_HELVETICA_18);
	iText(15, 250, "Life:", GLUT_BITMAP_HELVETICA_18);
	iText(15, 100, "Difficulty:", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255,0,0);
	iText(25, 70, "EASY", GLUT_BITMAP_HELVETICA_18);

	// iShowImage(0, 0, 1280, 720, gameplay); //img of level diff


	// iShowBMP2(enemy1CorX,enemy1CorY,"enemy\\enemy1.bmp",0);
	iShowBMP2(enemy1CorX, enemy1CorY, "enemy\\enemy1.bmp", 0);
	iShowBMP2(obstacleCorx, obstacleCory, "enemy\\obstacle1.bmp", 0);
	iShowBMP2(bonusfoodCorX, 205, "bonus\\bonusfood.bmp", 0);


	iShowBMP2(ring1CorX, 205, "bonus\\ring1.bmp", 0);
	iShowBMP2(ring2CorX, 205, "bonus\\ring2.bmp", 0);
	iShowBMP2(ring3CorX, 205, "bonus\\ring2.bmp", 0);
	iShowBMP2(ring4CorX, 205, "bonus\\ring4.bmp", 0);


	iShowBMP2(ball1CorX, 305, "bonus\\ball1.bmp", 0);
	iShowBMP2(ball2CorX, 305, "bonus\\ball2.bmp", 0);
	iShowBMP2(ball3CorX, 305, "bonus\\ball3.bmp", 0);
	iShowBMP2(ball4CorX, 305, "bonus\\ball4.bmp", 0);





	


	
}