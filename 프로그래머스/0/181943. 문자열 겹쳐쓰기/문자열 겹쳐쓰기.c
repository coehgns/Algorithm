#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.''
    size_t my_string_length = strlen(my_string);
    size_t overwrite_length = strlen(overwrite_string);
    
    char* answer = (char*)malloc((my_string_length + 1) * sizeof(char));
    strcpy(answer, my_string);
    strncpy(answer + s, overwrite_string, overwrite_length);
    
    return answer;
}

int main()
{
    const int MAX_LENGTH = 1000;
    
    char* my_string = (char*)malloc(MAX_LENGTH * sizeof(char));
    char* overwrite_string = (char*)malloc(MAX_LENGTH * sizeof(char));
    int s;
    
    scanf("%s %s %d",my_string,overwrite_string, &s);
    
    char* result = solution(my_string, overwrite_string, s);
    
    printf("%s\n",result);
    
    free(result);
    free(my_string);
    free(overwrite_string);
    
    return 0;
}