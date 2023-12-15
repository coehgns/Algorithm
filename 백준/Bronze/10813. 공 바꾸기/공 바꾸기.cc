#include <stdio.h>

int main()
{
    int n, m;
    int i, j;
    int k;
    int arr[101]= { 0, };
    scanf("%d %d",&n, &m);
    for(k=1; k <= n; k++)
    {
        arr[k] = k;
    }
    for(k=0; k < m; k++)
    {
        scanf("%d %d",&i, &j);
        int temp = 0;
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(k=1; k <= n; k++)
    {
        printf("%d ",arr[k]);
    }
}