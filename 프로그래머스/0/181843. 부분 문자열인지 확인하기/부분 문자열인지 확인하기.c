#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* target) {
    int answer = 0;
    int my_len = strlen(my_string);
    int target_len = strlen(target);
    for(int i = 0; i < my_len; i++) {
        int j = 0;
        for(j = 0; j < target_len; j++) {
            if(my_string[i + j] != target[j]) {
                break;
            }
        }
        if(j == target_len) {
            return 1;
        }
    }
    
    return 0;
}