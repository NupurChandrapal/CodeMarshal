#include<stdio.h>
int main()
{
    /******* Initialization ********/
    int i, a[100],n;
    printf("Enter the length array: ");
    scanf("%d",&n);

    /******* Input ********/
    printf("Enter the array elements: \n");

    for(i=1;i<=n;i++)
    {
        printf("\nIndex %d: ",i);
        scanf("%d",&a[i]);

    }

    /******* Binary Search *******/


    int loc=0;
    int beg= 1;
    int end= n;
    int mid=(beg+end)/2;
    int key;

    printf("\nenter the key that you want to search: ");
    scanf("%d",&key);

    while(beg<=end)
    {
        if(key>a[mid])
        {
            beg=mid+1;
        }
        else if(key<a[mid])
        {
            end= mid-1;
        }

        else if(key==a[mid])
        {
            loc=mid;
            printf("\nItem is found in location %d",loc);
            break;
        }

        mid=(beg+end)/2;
    }


    if(beg>end)
    {
    printf("\nItem is not in list or\nthe list is not sorted");
    }





}
