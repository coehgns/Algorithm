#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char input[1000];
    
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        scanf("%s", input);
        printf("%c%c\n", input[0], input[strlen(input)-1]);
    }
    return 0;
}