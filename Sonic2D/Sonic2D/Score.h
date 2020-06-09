#define  SCORE_H_INCLUDED



#include <stdio.h>



/*All the scoring part of the game has been done here with many function and showing the score,points,ringscount,timecount on the gameplay*/


/*struct savedScores{
	int scr;
	char pl[30];
}sc[5],tempSc;


char player[30];
int gtimer;
char showscore[1000];// = "";        //here the score is initialized as character because after we have use it in iText to show the score in the screen 
int ind = 0;
FILE* highScore;






/*void updateHighScore()
{

	highScore = fopen("highScore.txt", "r");//file read start

	while (fscanf(highScore, "%s %d", &sc[i].pl, &sc[a].time) != EOF)
	{
		a++;
	}
	fclose(highScore); //file read end




}*/



char showscore[1000];// = ""; 

 
void gameTimer()                 //the function is used for counting times in the screen reversly
{

	tcount--;

}            

void showScore()
{


	if (gamestate != 12 && gamestate != 0 && gamestate != 6 && gamestate != 5 && gamestate != 7 && gamestate != 11 && gamestate != 13  && gamestate != 9)
	             {
	

	
	                    // iSetColor(255, 255, 255);
	                  //   int scorenow = score;

	                    
		                 sprintf_s(showscore, "%d", score);
			             printf("%s\n", showscore);//time
			  
	                     iText(75, 397, showscore, GLUT_BITMAP_TIMES_ROMAN_24);

                  }





	if (gamestate == 12 || gamestate==13 )
	              {
		
		               iText(670,95, showscore, GLUT_BITMAP_TIMES_ROMAN_24);
	              }

	if (gamestate == 5)
	
	              {
	 	
		                iSetColor(255, 255, 255);
		                iText(582,369, showscore, GLUT_BITMAP_TIMES_ROMAN_24);
	              }


 }

/*
void updateHighScore()
{
	
	highScore = fopen("highScore.txt", "r");//file read start
	int a = 0, j;

	while (fscanf(highScore, "%s %d", &sc[a].pl, &sc[a].scr) != EOF)
	{
		a++;
	}
	fclose(highScore); //file read end
	for (a = 0; a<5; a++)
	{
		if (score<sc[a].scr)
		{
			for (j = 4; j>a; j--)
			{
				sc[j] = sc[j - 1];
			}
			sc[a].scr = score;
			strcpy(sc[a].pl, player);
			break;
		}
	}
	highScore = fopen("highScore.txt", "w");
	for (a = 0; a<5; a++)
	{
		fprintf(highScore, "%s %d\n", sc[a].pl, sc[a].scr);
	}
	fclose(highScore);



}
	

void HighScore()

{
	highScore = fopen("highScore.txt", "r");
	int a = 0, j;

	

	while (fscanf(highScore, "%s %d", &sc[a].pl, &sc[a].scr) != EOF)
	{
		a++;
	}
		for (a = 0; a < 5; a++)
		{
			fprintf(highScore, "%s %d\n", sc[a].pl, sc[a].scr);
		}


		fclose(highScore);

		char Score[5][100];
		for (a = 0; a<5;a++)
		{
			sprintf(Score[a], "%s - %d", sc[a].pl, sc[a].scr);
		}
		iText(133, 500, Score[0]);
		iText(133, 426, Score[1]);
		iText(133, 350, Score[2]);
		iText(133, 274, Score[3]);
		iText(133, 200, Score[4]);
	}

	

	//updateHighScore();




	
//} */


void showTime()              //the function is used for showTime in the screen
    {
	     iSetColor(255, 255, 255);
	     int tcountnow = tcount;
		 char showtcount[1000] = "126";
	     if (tcountnow)  sprintf_s(showtcount, "%d", tcountnow);
	     iText(75, 347, showtcount, GLUT_BITMAP_TIMES_ROMAN_24);

    }





void ringCount()                 //the function is used for counting rings in the screen
{


	iSetColor(255, 255, 255);
	int rcountnow = rcount;
	char showrcount[1000] = "0";
	if (rcountnow)  sprintf_s(showrcount, "%d", rcountnow);
	iText(75, 297, showrcount, GLUT_BITMAP_TIMES_ROMAN_24);



}


void lifeCount()                   //the function is used for counting life in the screen reversely

{
	iSetColor(255, 255, 255);
	int lifecountnow = lifecount;
	char showlifecount[1000] = "3";
	if (lifecountnow)  sprintf_s(showlifecount, "%d", lifecountnow);
	iText(75, 247, showlifecount, GLUT_BITMAP_TIMES_ROMAN_24);

}


void gameSetWithTime()

{

	if (tcount <1)
	             {
		            
					 
					 


		         gamestate = 12;             //gamestate 12 is for gameover
				 score=0;
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


	 if (score >= 80)

	              {
		               gamestate = 3;    //gamestate 3 is for Level2
		

	              }

	 if (score >= 150)
	              {
		                gamestate = 13;
	              }

	
}
