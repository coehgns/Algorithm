#include <stdio.h>
int main()
{
    int arr[31] = { 0, };
    int a;
    
    for(int i = 0; i <28; i++)
    {
        scanf("%d",&a);
        arr[a]=1;
    }
    
    for(int i =1; i<=30; i++)
    {
        if(!arr[i]) printf("%d \n", i);
    }
    return 0;
}