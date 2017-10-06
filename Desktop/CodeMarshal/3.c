#include<stdio.h>

int main()
{
    int a,b;
    double c;
    char ch;
    scanf("%d %d %.2lf %c",&a,&b);
    scanf("%lf %c",&c,&ch);

    printf("%d %d\n",a,b);
    printf("%.2lf\n%c\n",c,ch);
}
