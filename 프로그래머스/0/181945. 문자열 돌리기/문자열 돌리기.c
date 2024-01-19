#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int len;
    
    len = strlen(s1);
    
    for(int i = 0; i<len; i++) {
        printf("%c\n",s1[i]);
    }

    return 0;
}
