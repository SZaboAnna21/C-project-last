#include "bead.h"


int** gen_matrix(int n,char rotation[10], char direction[10]) 
{

    //int bytes = 0;

    // memoria foglalals
    int ** matrixo = malloc(n*sizeof(int *));
    //bytes = 4*n;
    for(int i=0; i< n; i++)
    {
        matrixo[i] = malloc(n*sizeof(int));
        //bytes = bytes +(4*n);
    }

    //printf("Malloc %d byte\n", bytes);

    // a matrix feltotlese
    fill_matrixo(matrixo, n, direction, rotation); 
    printf("\n\nYour matrix has been made :0\n let's go back to the menu\n\n");
    return matrixo; 
}

void fill_matrixo(int** matrix, int n, char direction[10], char rotation[10] ) 
{
    // roviden egy ideiglenes matrix letrejon ami ha paros az n=n+1 (ha 4 volt akkor 5 dim lesz most) lesz ezt feltotltom spriralba 
    // ha paros volt akkor a megfelelo oldalakat(2) "levagom" es betoltom a jo matrixba 
    // ha paratlan akkor csak atmasolom mivel akkor a dimenzio ugye nem valtozott

    int x,y;
    int n2;
    if ((n % 2) == 0)
    {
        n2= n+1;
    }
    else
    {
        n2=n;  
    }
    int temp[n2][n2];
    temp[(n2/2)][(n2/2)] = 1;
    x = (n2)/2;
    y = (n2)/2;
    int counter = 2;
    int times = 1;
    int howmtimes = 0;
    int dx;
    int dy;
    int endx;
    int endy;
    int stx;
    int sty;

        for (int i = 1; i <= ((n2*2)-1); i ++)
        {
            if ((strcmp(rotation, "CW")) == 0)
            {
                if (((strcmp(direction, "L")) == 0))
                {
                    dx = 0;
                    dy = -1;
                    direction = "U";
                    stx= 0;
                    sty= 0;
                    endx = n2-2;
                    endy = n2-2;


                }
                else if ((strcmp(direction, "R")) == 0)
                {
                    dx = 0;
                    dy = 1;
                    direction = "D";
                    stx= 1;
                    sty= 1;
                    endx = n2-1;
                    endy = n2-1;

                }
                else if ((strcmp(direction, "D")) == 0)
                {
                    dx = 1;
                    dy = 0;
                    direction = "L";
                    stx= 1;
                    sty= 0;
                    endx = n2-1;
                    endy = n2-2;


                }
                else if ((strcmp(direction, "U")) == 0)
                {
                    dx = -1;
                    dy = 0;
                    direction = "R";
                    stx= 0;
                    sty= 1;
                    endx = n2-2;
                    endy = n2-1;
                    

                }
            }

            else
            {
                if (((strcmp(direction, "L")) == 0))
                {
                    dx = 0;
                    dy = -1;
                    direction = "D";

                    stx= 1;
                    sty= 0;
                    endx = n2-1;
                    endy = n2-2;


                }
                else if ((strcmp(direction, "R")) == 0)
                {
                    dx = 0;
                    dy = 1;
                    direction = "U";
                    stx= 0;
                    sty= 1;
                    endx = n2-2;
                    endy = n2-1;

                    

                }
                else if ((strcmp(direction, "D")) == 0)
                {
                    dx = 1;
                    dy = 0;
                    direction = "R";
                    stx= 1;
                    sty= 1;
                    endx = n2-1;
                    endy = n2-1;


                }
                else if ((strcmp(direction, "U")) == 0)
                {
                    dx = -1;
                    dy = 0;
                    direction = "L";
                    stx= 0;
                    sty= 0;
                    endx = n2-2;
                    endy = n2-2;

                }
            }
            for (int j = 0; j< times; j++ )
                {
                    x = x+dx;
                    y = y+dy;
                    temp[x][y] = counter;
                    counter ++;
                }
                if (times == n2-1 && (howmtimes == 1)) {times = times; howmtimes = 2;}
                else if (howmtimes == 0){ howmtimes = 1; times = times;}
                else if (howmtimes == 1) {howmtimes =0 ; times ++;}
        }
    
    if ((n % 2) == 0)
    {
        int x = 0;
        int y = 0;
        for (int i = stx; i <= endx; i ++)
            {
                for (int j =  sty; j <= endy; j ++)
                {
                    matrix[x][y] = temp[i][j];
        
                    if (y == (n-1)){y = 0; x++;}
                    else {y++;}
            
                }
    
            }
    }

    else
    {
       for (int i = 0; i < n; i ++)
            {
                for (int j = 0; j < n; j ++)
                {
                    matrix[i][j] = temp[i][j];
                }
    
            }
    }
    
}
