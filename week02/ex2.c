#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Hello World!";
    unsigned long length = strlen(string);
    unsigned long i, j, temp;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
    printf("%s\n", string);

    return 0;
}
