#include <string>
#include <conio.h>
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fstream>

using namespace std;

#define width 1024
#define height 740

int delay=100;
int lives=5;
int level=1;
int score=0;
bool StartedGame=false;
bool GameOver=false;
bool NextLevel=false;
bool Gaming=false;
int DirY=-1;
int DirX=1;
int Speed=3;
int InitialSpeed=3;
int BackgroundNumber=1;
bool Dead=false;
int DeadSequence=1;
//bool Music=true;
bool Efects=true;
bool FileExistent=false;
int HighScore=0;

int BaseX=255;
int BallX=295;
int BallY=650;

int Map[63];

int LeftCorner;
int RightCorner;

int ColumnBall;
int RowBall;
int Element;

int RowBall[]=[20,50,80,110,140,170,200];

int main()
{


}

END_OF_MAIN();
