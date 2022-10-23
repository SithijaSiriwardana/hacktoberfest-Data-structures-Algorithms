/**
 * C program to print diamond star pattern 
 */

#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;
   
    printf("Enter rows to print(needs to be a number) : ");
    scanf("%d", &rows);
    
    
    stars = 1;
    spaces = rows - 1;
    
    /* Iterate through rows */
    for(i=1; i<rows*2; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        /* Print stars */
        for(j=1; j<stars*2; j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    
    return 0;
}

