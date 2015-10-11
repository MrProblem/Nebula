#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
#include<cstdio>
#pragma once

#define BOARD_SIZE 81 
#define BOARD_LEN  11

#define EMPTY      0
#define BLACK      1
#define WHITE      2
#define KO         3

#define EDGE       -2
#define NONE       -1

#define FORBID     1
#define ALLOW      2
#define UNCERTAIN  3

#define CHANGE(X,Y) ((X)*BOARD_LEN+(Y))
#define CHANGE2(x,i,k)((x)+Direct[(i)][(k)])

const int Direct[4][2]={{0, 1}, { 0, -1 }, { 1, 0 }, { -1, 0 }, };

typedef struct{
	int x;
	int y;
}LOC;

enum color{ empty=EMPTY,black,white,none };

typedef struct{
	color airColor;
	int airCode;
}Air;

typedef struct{
	color bunchColor;
	int bunchCode;
}Bunch;