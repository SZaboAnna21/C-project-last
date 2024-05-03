#include "bead.h"

int main() 
{  
    // itt tudja kivalasztani a hasznalo milyen programot akar futtatni
    int choice;
    int n = 0;
    int rep;
    char direction[10];
    char rotation[10];
    int** matrix = NULL;
    do {
        // a choosing addig fut ameg valid szamot nem kap 0 es 5 kozott
        choice = choosing();

        // a kivalasztott szam alapjan meghivom a reszek functionjeit valahol parameterrel mar
        switch (choice) {
        case 0:
		    user_G();
		    break;
		case 1:
            rep = 1;
            int ng;
            // addig kerek szamot ameg nem 1 es 20 kozott van? lesz?
            while(rep == 1)
            {
                printf("What size do u want this very cool matrix to be? PLEASE CHOOSE FROM 1-20 ");
                if (scanf("%d", &ng)== 1)
                {
                    if (ng >= 1 && ng <= 20) {rep = 0;}
                    else {printf("Invalid size %d is not between 1 and 20\n\n", ng);}

                }
                else
                {
                    // ha nem tudja int-be tenni a bemenetet hiba
                   printf("invalid input choose numbers just numbers not characters\n");
                    while (getchar() != '\n'); 
                }
                
            }

            // irany es bejaras iranyanak bekerese addig ameg nem valid az input
            rep = 1;
            while (rep == 1)
            {
                printf("\nDirection? \n------------\n L for left\n R for right\n U for up\n D for down \n Choice--> ");
                scanf(" %s", direction);
                if (((strcmp(direction, "L")) == 0) || ((strcmp(direction, "R") )==0) || ((strcmp(direction, "U")) == 0) || ((strcmp(direction, "D")) == 0) )
                {
                    rep = 0;
                }
                else {printf("\nInvalid Input\n  %s is definietly not L R U or even D think about this for a little bit\nnext time do not make a mistake , maybe check the upper lowercase difference\n ", direction );}
            }
            rep = 1;
            while (rep == 1)
            {
                printf("\nRotation?\n------------\nCW for Clockwise \nCCW for Counter-Clockwise\n Choice--> ");
   
                scanf(" %s", rotation);
                if (((strcmp(rotation, "CW")) == 0) || ((strcmp(rotation, "CCW") )==0)) 
                {
                    rep = 0;
                }
                else {printf("Invalid Input\n %s is not CCW or CW , pay attentcion for the lower uppercase difference ",rotation);}
            }
            if (!(matrix == NULL ))
            {
                // ha volt matrix elotte torlodik
                free_m(matrix, n);
                
            }
            n = ng;
            matrix = gen_matrix(n, rotation, direction);
            
		    break;
		case 2:
            save(matrix , n, direction, rotation);
            break;
		case 3:
            printf("What's the file name? ");
            char filename[30];
            scanf("%s",filename);

             // kiolvasom hany soros --> hanyszor hanyas lesz a matrix, ha file nem letezik nulla
            int ln = lines(filename);
            if (!(matrix == NULL ) && (ln != 0))
            {

                //printf(" free benn\n");
                // ha volt matrix eddig akkor toroles lesz, tortenik, hajtodik, vegre 
                free_m(matrix, n);
                matrix = load(ln, filename);
                n = ln;
            }
            else if ((matrix == NULL ) && (ln != 0))
            {
                matrix = load(ln, filename);
                //printf("benn");
                n = ln;
            }
            
            break;
		case 4:
            print(matrix,n);
            break;
		case 5:
            free_m(matrix, n);
            exit_program();
            break;
	}
    }
    // addig jelenik meg a menu mindig ameg az exitet nem valsztjuk
    while (!(choice == 5));

    return 0;
}



int choosing()
{
    /// character input kezlese!!!!!!!! sajna nincs meg :(
    int choice;
    do
    {
        printmenu();
	    printf("Deine Wahl---> ");

        if ((scanf("%d",&choice) == 1 ) )
        {
            if (!((choice <= 5) && (choice >= 0)))
        {
            printf("You made a mistake but it is okay, next time choose from 0 to 5 as you can see, do not make a mistake again pls!\n");
        }

        }
        else
        {
            printf("invalid input\n");
            while (getchar() != '\n' );
            choice = 6;
        }

        
    }
    while (!((choice <= 5) && (choice >= 0)));
    return choice;  
}

    // memory felszabaditas
    void free_m(int ** matrix, int n)
    {

    
        //int bytes = 0;

        for(int i = 0; i < n; i++)
            {
                free(matrix[i]);

                //bytes= bytes +(4*n);
            }
        free(matrix);

        //bytes = bytes + (4*n);
        //printf("Freeing memo %d\n", bytes);
        matrix = NULL;
    }
    
    
