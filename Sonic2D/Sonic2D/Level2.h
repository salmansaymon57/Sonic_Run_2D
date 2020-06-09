#define LEVEL2_H_INCLUDED

/*HEre all the work of level 2 has been done through many functions*/


void LevelTwo()



{

	for (int i = 0; i < 10; i++)                                                         //here the loop is for Play the render image repeatedly
	                           {
		                         iShowBMP(fullbackground[i].x, fullbackground[i].y, backgroundImage[i]);

	                           }







	iShowImage(0, 0, 120, 663, gamechart);
	iSetColor(rand() % 255, rand() % 255, rand() % 255);
	iText(22, 550, "LEVEL 2:", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 255);
	iText(15, 400, "Score:", GLUT_BITMAP_HELVETICA_18);
	iText(15, 350, "Time:", GLUT_BITMAP_HELVETICA_18);
	iText(15, 300, "Rings:", GLUT_BITMAP_HELVETICA_18);
	iText(15, 250, "Life:", GLUT_BITMAP_HELVETICA_18);

	iText(15, 100, "Difficulty:", GLUT_BITMAP_HELVETICA_18);
	iSetColor(rand() % 255, 0, 0);
	iText(25, 70, "HARD", GLUT_BITMAP_HELVETICA_18);


	iShowBMP2(ring1CorX, 205, "bonus\\ring1.bmp", 0);
	iShowBMP2(ring2CorX, 205, "bonus\\ring2.bmp", 0);
	iShowBMP2(ring3CorX, 205, "bonus\\ring2.bmp", 0);
	iShowBMP2(ring4CorX, 205, "bonus\\ring4.bmp", 0);


	
	if (score >= 30)                                                     //the condition is for coming the balls at background in level2 after achieving the score 

	               {


	                 	iShowBMP2(ball1CorX, 305, "bonus\\balls2.bmp", 0);
	                	iShowBMP2(ball2CorX, 305, "bonus\\balls2.bmp", 0);
	                	iShowBMP2(ball3CorX, 305, "bonus\\balls2.bmp", 0);
		                iShowBMP2(ball4CorX, 305, "bonus\\balls2.bmp", 0);

	               }

	
	

	


	iShowBMP2(bossEnemyCorX, bossEnemyCorY, "enemy\\bossenemy.bmp", 0);
	
	

	iShowBMP2(obstacleCorx, obstacleCory, "enemy\\obstacle1.bmp", 0);
	iShowBMP2(obstacle2Corx, obstacle2Cory, "enemy\\obstacle1.bmp", 0);
	iShowBMP2(bonusfoodCorX, 205, "bonus\\bonusball1.bmp", 0);
	bonusball1CorX -= 15;
	iShowBMP2(enemy2CorX, enemy2CorY, "enemy\\enemy2.bmp", 0);



	


}