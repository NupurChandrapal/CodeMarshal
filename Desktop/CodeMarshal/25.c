#include<math.h>
#include<stdio.h>
int main()
{
    int f,h,s,e,i,b;
    scanf("%d",&s);
    for(f=1;f<=s;f++)
    {
        scanf("%d",&h);
        e=sqrt(h);
        b=0;
        for(i=2;i<=e;i++)
        {
            if(h%i==0)
            {
                printf("Case %d: NO\n",f);
                b++;
                break;
            }
        }
        if(b==0)
        {
            printf("Case %d: YES\n",f);
        }
    }
    return 0;
}
