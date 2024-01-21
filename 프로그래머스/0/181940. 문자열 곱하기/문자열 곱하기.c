#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int my_strlen = strlen(my_string);
    int answer_length = my_strlen * k;
    
    char* answer = (char*)malloc(answer_length + 1);
    memset(answer,0,(answer_length + 1));
    
    for(int i = 0; i < k; i++) {
        strcat(answer,my_string);
    }
    
    return answer;
}