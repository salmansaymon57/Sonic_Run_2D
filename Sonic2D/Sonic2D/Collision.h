#define  COLLISION_H_INCLUDED

//#include <stdio.h>


/*In this header file all variables are declared and initialised then logics are applied in collision Part through many functions  and here all the gamepoints by collison with rings,balls and foods have been performed throws functions*/


int ring1CorX = 400, ring2CorX = 450, ring3CorX = 500, ring4CorX = 350, ringsCorYwithHeight = 238,ringsMoveSpeed=6;
int ball1CorX = 1600, ball2CorX = 1650, ball3CorX = 1700, ball4CorX = 1750, ballsCorYwithHeight = 350,ballsMoveSpeed = 8;
int obstacleCorx = 950, obstacleCory = 155, obstacle2Corx = 990, obstacle2Cory = 155, obsMoveSpeed = 5, obs2MoveSpeed=5;
int enemy1CorX = 2600, enemy1CorY = 175, enemy1MoveSpeed = 8;
int enemy2CorX = 2600, enemy2CorY = 175, enemy2MoveSpeed = 8;

int sonicCorx = 145, sonicCory = 155, sonicMovementSpeed = 15;
int screenWidth = 1200;
int screenHeight = 623;
int i = 1;
int score = 0;
int tcount = 126;

int rcount = 0;
int lifecount = 3;

bool music = true;
int sonicCordinateJump = 0, sonicCordinateJumpSpeedup = 24, sonicCordinateJumpSpeeddown = 7;
int gamestate = -1;

int bonusfoodCorX = 2500, bonusfoodCorwithHeight = 238, bonusball1CorX = 1800,foodsMoveSpeed=10;

int backgroundSpeed = 10;
int bossEnemyCorX = 1400, bossEnemyCorY = 200, bossEnemyMoveSpeed = 20;

void boundary()                      
{
	if (sonicCorx <= 135)
	                   {
		                  sonicCorx = 135;
	                   }


}


void collisonWithObstacle()

{
	obstacleCorx -= obsMoveSpeed;
	obstacle2Corx -= obs2MoveSpeed;



	if (obstacleCorx <= 0 + 135)
	                          {
	                         	obstacleCorx = screenWidth - 135;;

	                          }

	else if(obstacle2Corx<=0+135)
	                          {
	                               obstacle2Corx=screenWidth-135;;

	                          }


	//here 54 is sonic width and 50 is obstacle width .

	if (sonicCorx + 54 >= obstacleCorx && sonicCorx <= obstacleCorx + 50 && sonicCory < obstacleCory + 56 && sonicCory + sonicCordinateJump < obstacleCory + 56 )
	                  {


		    


		                     if (i < 3 && i++)                                      //here the codition is for LIFE .
		                                     {
 
			                                     obstacleCorx = 2000;
			                                     obstacle2Corx=2050;
			                                     sonicCorx = 135;
			                                     lifecount--;
			


		                                     }

		                     else 
							                   {

			                                    gamestate = 12;

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

			                                    PlaySound(0, 0, 0);
			                                    music = false;


		                                        }



	


                          }
 



}










void collisonWithEnemy1()

{


	//iAnimDelays[10];
        enemy1CorX -= enemy1MoveSpeed;


       if (enemy1CorX <= 0 + 135)
                               {
                                  enemy1CorX = screenWidth + 2500;
                               }








        if(((sonicCorx+54)>=enemy1CorX)  &&  sonicCorx<=(enemy1CorX+50)  &&  sonicCory<=(enemy1CorY+50) && sonicCory+sonicCordinateJump<=(enemy1CorY+50))//height of enemy 2 is 50//&& (sonicCory-(enemy2CorY+50))<0 (enemy2CorX-(sonicCorx+54)<=0
              {

                    if(i<3 && i++)
                                 {

                                   sonicCorx=135;
                                   enemy1CorX=2000;
                                   lifecount--;
                                  //sonicMovementSpeed = 0;

                                 }

					else


					{



						gamestate = 12;

						score=0 ;
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
						//iText(500, 397, showscore, GLUT_BITMAP_TIMES_ROMAN_24);
						PlaySound(0, 0, 0);
						music = false;

					}



                              


                 }







}



void collisonWithEnemy2()

{


	//iAnimDelays[10];
	enemy2CorX -= enemy2MoveSpeed;


	if (enemy2CorX <= 0 + 135)
	{
		enemy2CorX = screenWidth + 2500;
	}



	if (((sonicCorx + 54) >= enemy2CorX) && sonicCorx <= (enemy2CorX + 70) && sonicCory <= (enemy2CorY + 50) && sonicCory + sonicCordinateJump <= (enemy2CorY + 50))//height of enemy 2 is 50//&& (sonicCory-(enemy2CorY+50))<0 (enemy2CorX-(sonicCorx+54)<=0
	{

		if (i<3 && i++)
		{

			sonicCorx = 135;
			enemy2CorX = 2000;
			lifecount--;
			//sonicMovementSpeed = 0;

		}

		else


		{



			gamestate = 12;
			
			tcount = 126, lifecount = 3, rcount = 0;
			score = 0;
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
			//iText(500, 397, showscore, GLUT_BITMAP_TIMES_ROMAN_24);
			PlaySound(0, 0, 0);
			music = false;

			
			

		}


	}







}




void gamepointWithRings()

{

	ring1CorX -=ringsMoveSpeed;
	ring2CorX -= ringsMoveSpeed;
	ring3CorX -= ringsMoveSpeed;
	ring4CorX -= ringsMoveSpeed;



	if (ring1CorX <= 0 + 135)      //it is used for coming ring again after going out to the game screen

	{
		ring1CorX = screenWidth - 135;

	}


	else if (ring2CorX <= 0 + 135)

	{
		ring2CorX = screenWidth - 135;

	}

	else if (ring3CorX <= 0 + 135)

	{
		ring3CorX = screenWidth - 135;

	}

	else if (ring4CorX <= 0 + 135)

	{
		ring4CorX = screenWidth - 135;

	}






	if (sonicCorx + 54 >= ring1CorX &&  sonicCorx <= ring1CorX && sonicCory <= ringsCorYwithHeight && sonicCory + sonicCordinateJump <= ringsCorYwithHeight)
	{
		score += 1;
		rcount++;
		ring1CorX = 1400;

	}


	else if (sonicCorx + 54 >= ring2CorX && sonicCorx <= ring2CorX + 30 && sonicCory <= ringsCorYwithHeight && sonicCory + sonicCordinateJump <= ringsCorYwithHeight)
	{
		score += 1;
		rcount++;
		ring2CorX = 1450;

	}


	else if (sonicCorx + 54 >= ring3CorX && sonicCorx <= ring3CorX + 30 && sonicCory <= ringsCorYwithHeight && sonicCory + sonicCordinateJump <= ringsCorYwithHeight)
	{
		score += 1;
		rcount++;
		ring3CorX = 1500;

	}
	else if (sonicCorx + 54 >= ring4CorX  && sonicCorx <= ring4CorX + 30 && sonicCory <= ringsCorYwithHeight  && sonicCory + sonicCordinateJump <= ringsCorYwithHeight)
	{
		score += 1;
		rcount++;
		ring4CorX = 1550;
	}





}



void  gamepointWithBalls()

{
	ball1CorX -= ballsMoveSpeed;
	ball2CorX -= ballsMoveSpeed;
	ball3CorX -= ballsMoveSpeed;
	ball4CorX -= ballsMoveSpeed;




	if (ball1CorX <= 0 + 135)      //it is used for coming balls again after going out to the game screen

	{
		ball1CorX = screenWidth - 135;


	}


	else if (ball2CorX <= 0 + 135)

	{
		ball2CorX = screenWidth - 135;

	}

	else if (ball3CorX <= 0 + 135)

	{
		ball3CorX = screenWidth - 135;

	}

	else if (ball4CorX <= 0 + 135)

	{
		ball4CorX = screenWidth - 135;

	}


	if (sonicCorx + 54 >= ball1CorX   && sonicCorx <= ball1CorX + 36 && sonicCory + sonicCordinateJump >= 220)
	{
		score += 2;
		ball1CorX = 2000;

	}
	else if (sonicCorx + 54 >= ball2CorX && sonicCorx <= ball2CorX + 36 && sonicCory + sonicCordinateJump >= 220)
	{
		score += 2;
		ball2CorX = 2050;

	}
	else if (sonicCorx + 54 >= ball3CorX && sonicCorx <= ball3CorX + 36 && sonicCory + sonicCordinateJump >= 220)
	{
		score += 2;
		ball3CorX = 2100;

	}
	else if (sonicCorx + 54 >= ball4CorX && sonicCorx <= ball4CorX + 36 && sonicCory + sonicCordinateJump >= 220)
	{
		score += 2;
		ball4CorX = 2150;
	}






}



void  gamepointWithFood()


{
	bonusfoodCorX -= foodsMoveSpeed;



	if (bonusfoodCorX <= 0 + 135)

	{
		bonusfoodCorX = (screenWidth + 1800) - 135;

	}



	if (sonicCorx + 54 >= bonusfoodCorX && sonicCorx <= bonusfoodCorX + 40 && sonicCory <= bonusfoodCorwithHeight && sonicCory + sonicCordinateJump <= bonusfoodCorwithHeight)
	{
		score +=10;
		bonusfoodCorX = 2450;

	}


}



void bossEnemy()

{
	

	if (bossEnemyCorX <= 135)

	{
		bossEnemyCorX = 2000;
	}


	bossEnemyCorX -= bossEnemyMoveSpeed;



	    //iAnimDelays[10];
	
		
	//	obstacleCorx = 2000;
	//	obsMoveSpeed = 0;
	//	obs2MoveSpeed = 0;
	//	obstacle2Corx = 2000;


	


	if (sonicCorx + 54 >= bossEnemyCorX && sonicCorx <= bossEnemyCorX + 150 && sonicCory < bossEnemyCorY + 66 && sonicCory + sonicCordinateJump < bossEnemyCorY + 66)

	{
		
		 gamestate = 12;
		
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

	



	





//	if (sonicCorx + 54 >= bossEnemyCorX && sonicCorx <= bossEnemyCorX + 150 && sonicCory + sonicCordinateJump <bossEnemyCorY)

	//{

	//	if (i<3 && i++)
	//	{

	//		sonicCorx = 135;
	////	//	bossEnemyCorX = 2000;
	//		lifecount--;
			//sonicMovementSpeed = 0;

	//	}

		//else


		//{



		//	gamestate = 12;
		//	//iText(500, 397, showscore, GLUT_BITMAP_TIMES_ROMAN_24);
		//	PlaySound(0, 0, 0);
		//	music = false;

	//	}
		
	
	//}
//








