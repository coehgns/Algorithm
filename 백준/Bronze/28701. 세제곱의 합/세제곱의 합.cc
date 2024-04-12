#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int sum_2 = 0;
    int three_multi = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
        three_multi = i * i * i;
        sum_2 += three_multi;
    }

    printf("%d\n",sum);
    printf("%d\n", sum * sum);
    printf("%d", sum_2);
    
    return 0;
}