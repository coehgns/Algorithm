#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    char tmpstring[strlen(myString) + 1];
    char tmppat[strlen(pat) + 1];
    //string 대 -> 소
    for(int i = 0; i < strlen(myString); i++) {
        if('A' <= myString[i] && myString[i] <= 'Z') {
            tmpstring[i] = myString[i] + ('a' - 'A');  
        }
        else
            tmpstring[i] = myString[i];
    }
    tmpstring[strlen(myString)] = '\0';
    
    //pat 대 -> 소
    for(int i = 0; i < strlen(pat); i++) {
        if('A' <= pat[i] && pat[i] <= 'Z') {
            tmppat[i] = pat[i] + ('a' - 'A');
        }
        else
            tmppat[i] = pat[i];
    }
    tmppat[strlen(pat)] = '\0';
    
    for(int i = 0; i < strlen(tmpstring); i++) {
        answer = 1;
        for(int j = 0; j < strlen(tmppat); j++) {
            if(tmpstring[i + j] != tmppat[j]) {
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