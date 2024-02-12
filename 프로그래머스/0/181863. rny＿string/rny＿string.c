#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rny_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int cnt = 0;
    for(int i = 0; i < strlen(rny_string); i++) {
        if(rny_string[i] == 'm') cnt++;
    }
    char* answer = (char*)malloc(strlen(rny_string)+1 + cnt);
    int idx = 0;
    int j = 0;
    while(rny_string[j] != '\0') {
        if(rny_string[j] == 'm') {
            answer[idx++] = 'r';
            answer[idx++] = 'n';
            j++;
        } 
        else answer[idx++] = rny_string[j++];
    }
    answer[idx] = '\0';
    return answer;
}