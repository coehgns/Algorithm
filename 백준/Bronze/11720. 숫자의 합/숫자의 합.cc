#include <stdio.h>
int main()
{
    int N;
    char s[101];
    
    scanf("%d %s",&N, s);
    
    int sum = 0;
    
    for(int i = 0; i < N; i++)
    {
        sum += s[i] -48;
    }
    
    printf("%d", sum);
    
    return 0;
}