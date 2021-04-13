//MANAV SINGH
/* Write a program to read a file, count no. of lines, no. of words, no. of characters and while
spaces till the end of file is encountered */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    int characters = 0, words = 0, lines = 0, spaces = 0;

    fptr = fopen("file.txt", "r");
    if (fptr == NULL)
    {
        printf("Unable to open a file.\n");
    }
    while ((ch = fgetc(fptr)) != EOF)
    {
        characters++;
        if (ch == '\n' || ch == '\0'){
            lines++;
        }    
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0'){
            words++;
        }    
        if (ch == ' '){
            spaces++;
        }     
    }
    if (characters > 0)
    {
        words++;
        lines++;
    }
    printf("Total chracters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);
    printf("Total Whitespaces = %d\n", spaces);

    fclose(fptr);

    return 0;
}
