#include <stdio.h>

int main()
{
    int length, width;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &length, &width);
    
    for (int i = 0; i < length; i++) {
        
        printf("*");
        
        for (int j = 1; j < width; j++)
            printf("*");
        
        printf("\n");
    }
    return 0;
}