#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define Bomb 10

void InitBoard(char Board[ROWS][COLS], int r, int c, char set);

void PrintBoard(char Board[ROWS][COLS], int r, int c);

void SetBomb(char mine[ROWS][COLS], int r, int c);

void FindBomb(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c);
