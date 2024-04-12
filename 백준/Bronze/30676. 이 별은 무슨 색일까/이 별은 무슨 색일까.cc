#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(620 <= n && n <= 780) printf("Red");
    if(590 <= n && n < 620) printf("Orange");
    if(570 <= n && n < 590) printf("Yellow");
    if(495 <= n && n < 570) printf("Green");
    if(450 <= n && n < 495) printf("Blue");
    if(425 <= n && n < 450) printf("Indigo");
    if(380 <= n && n < 425) printf("Violet");
    
    return 0;
}