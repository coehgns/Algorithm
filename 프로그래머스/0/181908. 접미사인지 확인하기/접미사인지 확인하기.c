#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int answer = 0;
    int j = strlen(my_string) -1;
    for(int i = strlen(is_suffix) -1; i >= 0; i--) {
        if(is_suffix[i] != my_string[j]) {
            break;
        }
        if(i == 0) {
            answer = 1;
        }
        j--;
    }
    return answer;
}