#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_prefix) {
    if(strlen(my_string) < strlen(is_prefix)) return 0;
    int idx = 0;
    if(my_string[idx] == is_prefix[idx]) {
        while(idx < strlen(is_prefix)) {
            if(my_string[idx] != is_prefix[idx]) return 0;
            idx++;
        }
        return 1;
    }
    
    return 0;
}