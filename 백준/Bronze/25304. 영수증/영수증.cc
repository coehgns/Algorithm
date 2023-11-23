#include <stdio.h>

int main()
{
    int x,n,a,b;
    scanf("%d",&x);
    scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&a,&b);
            x-=a*b;
        }
        if(x==0)printf("Yes");
        else printf("No");
    return 0;
}