#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int n;
    scanf("%s %d", s1, &n);
    for(int i = 1; i<=n; i++)
    {
        printf("%s",s1);
    }
    return 0;
}