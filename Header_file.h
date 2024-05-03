#ifndef bead_h
#define bead_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void printmenu();
void menu(int choice);
void user_G();
int** gen_matrix(int n,char rotation[10], char direction[10]);
void exit_program();
void save(int ** matrix, int n, char direction[10], char rotation[10]);
void print(int ** matrix,int n);
int ** load(int n, char filename[30]);
void fill_matrixo(int** matrix, int n, char direction[10], char rotation[10] );
int choosing();
void free_m(int ** matrix, int n);
int lines(char filename[30]);

#endif



