#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    for(int i = 0; i < strlen(myString); i++) {
        int cnt = 0;
        if(myString[i] == pat[cnt]) {
            for(int j = 0; j < strlen(pat); j++) {
                if(myString[i + j] != pat[cnt]) break;
                    cnt++;
            }
            if(cnt == strlen(pat)) answer += 1;
        }         
    }
    return answer;
}