#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString, const char* pat) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(myString));
    int i, j;
    for(i = strlen(myString) - 1; i >= 0; i--) {
        if(strncmp(myString + i, pat, strlen(pat)) == 0)
            break;
    }
    for(j = 0; j < (i + strlen(pat)); j++) {
        answer[j] = myString[j];
    }
    answer[j] = '\0';
    return answer;
}