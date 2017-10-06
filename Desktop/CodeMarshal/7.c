#include<stdio.h>
int main()
{
    long long n,x,res=0;
    scanf("%lli%lli",&n,&x);
    res=((n+2*n)-x)*3;
    printf("%lli\n",res);
    return 0;
}
