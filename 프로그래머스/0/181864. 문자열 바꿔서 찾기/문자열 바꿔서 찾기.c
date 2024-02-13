#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    char tmp[strlen(myString)];
    for(int i = 0; i < strlen(myString); i++) {
        if(myString[i] == 'A') tmp[i] = 'B';
        else if(myString[i] == 'B') tmp[i] = 'A';
    }
    tmp[strlen(myString)] = '\0';
    
    int j;
    int answer = 0;
    for(int i = 0; i < strlen(myString); i++) {
        answer = 1;
        for(j = 0; j < strlen(pat); j++) {
            if(tmp[i + j] != pat[j]) {
                answer = 0;
                break;
            }
        }
        if(answer) {
            answer = 1;
            break;
        }
    }
    
    return answer;
}