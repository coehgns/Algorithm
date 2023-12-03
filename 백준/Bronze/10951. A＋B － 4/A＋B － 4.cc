#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) != -1)
    {
        printf("%d\n",a+b);
    }
    return 0;
}
/*C언어는 운영체제와 상관없이 파일의 끝에 도달했을 경우 언제나 특별한 값을 반환함.
EOF는 End of File의 약자로 파일의 끝을 표현하기 위해 -1로 정의된 정수 이다.*/