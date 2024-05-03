#include "bead.h"


void printmenu() 
{

    // A menu kiirasa
    for (int i = 0;i < 27;i++)
        {printf("=");}
    printf("\n");
    printf("|-      ");
    printf("A very Cool");
    printf("      -|\n|- ");
    printf("Spiral Matrix Program");
    printf(" -|\n");
    for (int i = 0;i < 27;i++)
        {printf("=");}
    printf("\n\n");
    for (int i = 0;i < 6;i++)
        {printf("%d ",i);
        switch (i) {
        case 0:
		printf("- User Guide\n");
		break;
		case 1:
	    printf("- Let's generate a Matrix :0 \n");
		break;
		case 2:
		printf("- Save the matrix \n");
		break;
		case 3:
		printf("- Load a matrix \n");
		break;
		case 4:
		printf("- Printy print actual matrix \n");
		break;
		case 5:
		printf("- Exit\n");
		break;}}
}

void user_G() 
{
    printf("------------\nUSER GOUIDE\n------------------");
    printf("\nAs You can see on the screen you have 6 options in this program\n");
    printf("By pressing the button 0 you can print this little description\n and you already did this so let's move on to option 1\n\n");
    printf("Option 1 is for creating the COOOOOOOL YEEEE VERY COOOL matrixos\n the program is going to ask you 3 not 2 not 4, 3 questions\n first the size, this is extraordinary important, with this you are able to make forom a 1x1 to 20x20 sized matrixy\n");
    printf("next (since this not just an ordinary boring nxn matrix) the direction from it's origo\nAnd additionally the 3th question is for the direction of the rotation!\nVERY important: you can olny store one matrixy at  a time, this is ALL for option 2\nBut what about the rest? If you read a little tiny bit more you will be albe to discover it ......\n\n\n");
    printf("So option 2, since it says \"save the matrix\" it's going to save the matrix into a txt file (but only if you have made one beforehand)\n the name of the file is going to contain all the inforamations about your matrixo\n - direction\n - rotation\n - dimension (size)\n cool cool very cool\n\n");
    printf("By pressing the 3 with you fingers you can easily load your very very own matrix from a file\n you have to provide the name of your file and yes you already loaded your matrixyxyxy\n\n \n");
    printf("4 is for you to print the matrix, to see your matrix, to wonder in your matrix on the screen\na very good option, use it, however, only use it if you have made one matrix with option 1\n \n");
    printf("5 is to leave the program\n\n");

}





//BYE BYE kiirasa kis cuki mintaba 
void exit_program()
{
    int size = 10;
    
        char* message = "BYE BYE BYE";
        int n = strlen(message);
    
        int print_line = 4;
    
        for (int x = 0; x < size; x++)
        {
            for (int y = 0; y <= 4 * size; y++)
            {
                double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
                double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));
    
                if (dist1 < size + 0.5 || dist2 < size + 0.5) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    
        for (int x = 1; x < 2 * size; x++)
        {
            for (int y = 0; y < x; y++) {
                printf(" ");
            }
    
            for (int y = 0; y < 4 * size + 1 - 2 * x; y++)
            {
                if (x >= print_line - 1 && x <= print_line + 1)
                {
                    int idx = y - (4 * size - 2 * x - n) / 2;
                    if (idx < n && idx >= 0)
                    {
                        if (x == print_line) {
                            printf("%c", message[idx]);
                        }
                        else {
                            printf(" ");
                        }
                    }
                    else {
                        printf("*");
                    }
                }
                else {
                    printf("*");
                }
            }
            printf("\n");
}
}
