#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int cnt = 0, idx = 0;
    for(int i = 0; i < strlen(my_string); i++) {
        if(my_string[i] == ' ') cnt++;
    }
    
    char** answer = (char**)malloc(cnt * sizeof(char*));
    
    char* token;
    token = strtok(my_string, " ");
    while(token != NULL) {
        answer[idx] = (char*)malloc(strlen(token) +1 );
        strcpy(answer[idx], token);
        answer[idx][strlen(token)] = '\0';
        token = strtok(NULL, " ");
        idx++;
    }
    
    return answer;
}