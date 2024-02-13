#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int answer = 0;
    int j;
    for(int i = 0; i < strlen(str2); i++) {
        for(j = 0; j < strlen(str1); j++) {
            if(str2[i + j] != str1[j]) {
                answer = 0;
                break;
            }
        }
        if(j == strlen(str1)) {
            answer = 1; 
            break;
        }
    }
    return answer;
}