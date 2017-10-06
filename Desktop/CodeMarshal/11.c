#include<stdio.h>
int main()
{
    int n;
    double c;
    scanf("%d",&n);
    c=((98.4-32)*5)/9;
    if(n>c)
    {
        printf("Fever\n");
    }
    else
    {
        printf("Not fever\n");
    }
    return 0;
}
