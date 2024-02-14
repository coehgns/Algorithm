#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* myStr) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(strlen(myStr) * sizeof(char*));
    char* ptr = strtok(myStr, "abc");
    int idx = 0;
    while(ptr != NULL) {
        answer[idx] = (char*)malloc(sizeof(char) * (strlen(ptr) + 1));
        strcpy(answer[idx], ptr);
        ptr = strtok(NULL,"abc");
        idx++;
    }
    if(answer[idx] == NULL) answer[idx] = "EMPTY";
    return answer;
}