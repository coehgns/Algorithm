#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// rank_len은 배열 rank의 길이입니다.
// attendance_len은 배열 attendance의 길이입니다.
int solution(int rank[], size_t rank_len, bool attendance[], size_t attendance_len) {
    int answer = 0;
    int std[rank_len];
    int std_num[rank_len];
    int cnt = 0;
    for(int i = 0; i < rank_len; i++) {
        if(attendance[i] == true) {
            std[cnt] = rank[i];
            std_num[cnt] = i;
            cnt++;
        }
    }
    for(int i = 0; i < cnt - 1; i++) {
        for(int j = 0; j < cnt - 1 - i; j++) {
            if(std[j] > std[j + 1])
            {
                int temp = std[j];
                std[j] = std[j + 1];
                std[j + 1] = temp;
                int tmp = std_num[j];
                std_num[j] = std_num[j + 1];
                std_num[j + 1] = tmp;
            }
        }
    }
    answer = std_num[0] * 10000 + 100 * std_num[1] + std_num[2];
    return answer;
}