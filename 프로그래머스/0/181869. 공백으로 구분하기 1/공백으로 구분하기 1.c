#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(1000 * 1000 * sizeof(char));
    char *ptr = strtok(my_string, " ");
    int i = 0;
    
    while(ptr != NULL) {
        answer[i++] = ptr;
        ptr = strtok(NULL, " ");
    }
    return answer;
}