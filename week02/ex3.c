#include <stdio.h>

int main()
{
    int numberOfRows;
    printf("Enter amount of rows: ");
    scanf("%d", &numberOfRows);
    int rows, columnSpace, columnStars;
    
    for (rows = 1; rows <= numberOfRows; rows++)
    {
        for (columnSpace = numberOfRows - rows; columnSpace >= 1; columnSpace--)
            printf(" ");
        
        for (columnStars = 1; columnStars <= (rows * 2) - 1; columnStars++)
            printf("*");
        
        printf("\n");
    }
    
    return 0;
}