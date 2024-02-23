#include <stdio.h>

int main() {
    int N, M;
    int a, b, c;
    int array[101] = { 0, };
    
    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < M; i++) {
        scanf("%d %d %d", &a, &b, &c);
        for(int j = a; j <= b; j++) {
            array[j] = c;
        }
    }
    for(int i = 1; i <= N; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}