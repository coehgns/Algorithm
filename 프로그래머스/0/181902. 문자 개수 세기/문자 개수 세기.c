#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(52 * sizeof(int));
    for(int i = 0; i < 52; i++) {
        answer[i] = 0;
    }
    int i = 0;
    while(my_string[i] != '\0') {
        if('A' <= my_string[i] && my_string[i] <= 'Z') {
            answer[my_string[i] - 'A'] += 1;
        }
        else if('a' <= my_string[i] && my_string[i] <= 'z') {
            answer[26 + my_string[i] - 'a'] += 1; 
        }
        i++;
    }
    return answer;
}