#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// str_list_len은 배열 str_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* str_list[], size_t str_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int idx = 0, i;
    for(i = 0; i < str_list_len; i++) {
        if(strcmp(str_list[i],"l") == 0) {
            idx++;
            break;
        }
        else if(strcmp(str_list[i],"r") == 0) {
            idx++;
            break;
        }
        idx++;
    }
    if(strcmp(str_list[i],"l") == 0) {
        char** answer = (char**)malloc(sizeof(char*) * (idx +1));
        for(i = 0; i < idx; i++) {
            answer[i] = str_list[i];
        }
        return answer;
    }
    else if(strcmp(str_list[i],"r") == 0) {
        char** answer = (char**)malloc(sizeof(char*) * (str_list_len - idx + 1));
        int j = 0;
        for(i = idx; i < str_list_len; i++) {
            answer[j++] = str_list[i];
        }
        return answer;
    }
    return NULL;
}