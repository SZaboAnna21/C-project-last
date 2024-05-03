        
#include "bead.h"

    void save(int ** matrix, int n, char direction[10], char rotation[10])
    {
        // ha nem volt matrix akkor csak hiba kiiras, amugy kimentés fajlba
        if ((matrix == NULL) || (n == 0) )
        {
            printf("Matrix does not exist yet please please choose option 1 first you dummy! \n");
        }

        else 
        {
            int i =0;
            int j = 0;
            char filename[25] ;
            while (direction[i] != '\0')
            {
                filename[j] = direction[i];
                i++;
                j++;
            }
   
            i = 0;
            while (rotation[i] != '\0')
            {
                filename[j] = rotation[i];
                i++;
                j++;
            }
            if (n < 10){
            filename[j] = (char)(n+48);}
            else {filename[j] = (char)49; j++; filename[j] = (char)((n%10)+48); }
            j++;
        
            char end[]= {'.','t','x','t','\0'};
        
            i = 0;
            while (end[i] != '\0')
            {
                filename[j] = end[i];
                i++;
                j++;
            }
            filename[j]='\0';

            printf("%s",filename);




            FILE* file = fopen(filename,"w");
            for (int i = 0; i < n; i ++)
            {
                for (int j = 0; j < n; j ++)
                {
                    fprintf(file ,"%3d ",matrix[i][j]);
                }
                fprintf(file, "\n");
            }

            fclose(file);
            printf("\n\nThe matrix has been saved\n\n");
        }


    }


    //kiiras
    void print(int ** matrix, int n) 
    {


        if ((matrix == NULL) || (n == 0) ) 
        {
            printf("Matrix does not exist yet please please choose option 1 first \n");
        }

        else
        {

            printf("\n");
            for (int i = 0; i < n; i ++)
            {
                for (int j = 0; j < n; j ++)
                {
                    printf("%3d ",matrix[i][j]);
                }
                printf("\n");
            }
        }

        printf("\n");


    
    }

    //eloszor memoriat foglalunk ahol az n-et a lines fuggveny adja, utana belolvasas 
    int ** load(int n, char filename[30])
    {
        //int bytes = 0;


        int ** matrixo = malloc(n*sizeof(int *));
        // = 4*n;
        for(int i=0; i< n; i++) 
        {
            matrixo[i] = malloc(n*sizeof(int));
            //bytes = bytes +(4*n);
        }

        //printf("Malloc %d byte\n", bytes);
        int ** matrix = matrixo;

        FILE *myFile;
        myFile = fopen(filename, "r");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                fscanf(myFile, "%d,", &matrixo[i][j] );
            }
        }

        fclose(myFile);
        return matrix;

        
        
        
    }


    /// fajlba sorok megszamolasa ami majd a dimenziot fogja adni
    int lines(char filename[30])
    {
        int lines = 0;
        FILE* fp;
        if((fp = fopen(filename,"r"))!=NULL)
        {
            fclose(fp);
            fp = fopen(filename, "r");
            while(!feof(fp))
            {
                char ch = fgetc(fp);
                if(ch == '\n')
                {
                    lines++;
                }
            }

        fclose(fp);
        return lines;

        }
        else
        {
            lines = 0;
            printf("Your file does not exists or not contains any lines :(\n");
            return lines;
        }


    } 
