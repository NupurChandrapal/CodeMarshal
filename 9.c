#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(0<=n && n<=100){
        printf("%d\n",n);
    }
    else if(-100<=n && n<=0)
    {
        printf("%d\nNegative\n",n);
    }
    return 0;
}
