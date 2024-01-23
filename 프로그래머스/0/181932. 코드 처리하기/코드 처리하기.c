#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int code_length = strlen(code);
    
    char* answer = (char*)malloc(code_length + 1);
    
    int idx = 0;
    int mode = 0;
    int i = 0;
    
    for(idx = 0; idx < code_length; idx++) {
        if(mode == 0) {
            if(code[idx] != '1' && idx % 2 == 0)
                answer[i++] = code[idx];
            else if(code[idx] == '1')
                mode = 1;
        }
        else if(mode == 1) {
            if(code[idx] != '1' && idx % 2 == 1) 
                answer[i++] = code[idx];
            else if(code[idx] == '1')
                mode = 0;
        }
    }
    
    if(i == 0)
        return "EMPTY";
    else
        answer[i] = '\0';
    
    return answer;
}