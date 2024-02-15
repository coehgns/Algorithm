#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// picture_len은 배열 picture의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* picture[], size_t picture_len, int k) {
    char** answer = (char**)malloc(picture_len * k * sizeof(char*));
    for(int i = 0; i < k*picture_len; i++) {
        int len = strlen(picture[i/k]);
        answer[i] = (char*)malloc(sizeof(char) * 1000);
        for(int j = 0; j < len*k; j++) {
            answer[i][j] = picture[i/k][j/k];
        }
        answer[i][k*len] = '\0';
    }
    return answer;
}