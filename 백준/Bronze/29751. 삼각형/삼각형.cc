#include <stdio.h>

int main() {
    double w, h;
    scanf("%lf %lf", &w, &h);

    printf("%.1f", w * h / 2);
    
    return 0;
}