#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int compare(const void* a, const void* b) {
    return strcmp(*(char**)a, *(char**)b);
}
char** solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*) * 100001);
    int idx = 0;
    char* token = strtok(myString, "x");
    while(token != NULL) {
        if(strlen(token) > 0) {
            answer[idx] = (char*)malloc(sizeof(char) * (strlen(token) + 1));
            strcpy(answer[idx], token);
            idx++;
        }
        token = strtok(NULL, "x");
    }
    qsort(answer,idx,sizeof(char*),compare);
    answer[idx] = '\0';
    return answer;
}