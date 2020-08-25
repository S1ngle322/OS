#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() 
{
    int integer                = INT_MAX;
    float floatingPoint        = FLT_MAX;
    double doubleFloatingPoint = DBL_MAX;

    printf("Integer = %d\nFloat =  %f\nDouble = %f\n",
           integer, floatingPoint, doubleFloatingPoint);
    printf("Sizeof integer = %lu\nSizeof float = %lu\nSizeof double = %lu\n",
           sizeof(integer), sizeof(floatingPoint), sizeof(doubleFloatingPoint));
    
    return 0;
}
