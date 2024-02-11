#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(strlen(my_string) * sizeof(char*));
    for(int i = 0; i < strlen(my_string); i++) {
        answer[i] = (char*)malloc(strlen(my_string) * sizeof(char));
    }
    int n = 0;
    int m = 0;
    for(int i = 0; i < strlen(my_string); i++) {
        for(int j = i; j < strlen(my_string); j++) {
            answer[n][m++] = my_string[j];
        }
        answer[n][m] = '\0';
        n++;
        m = 0;
    }
    char* temp;
    for(int i = 0; i < strlen(my_string); i++) {
        for(int j = i; j < strlen(my_string); j++) {
            if(strcmp(answer[i],answer[j]) > 0) {
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    return answer;
}