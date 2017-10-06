#include<stdio.h>
int main()
{
    /******* Initialization ********/
    int i, a[100],n;
    printf("Enter the length array: ");
    scanf("%d",&n);

    /******* Input ********/
    printf("Enter the array elements: \n");

    for(i=0;i<n;i++)
    {
        printf("\nIndex %d: ",i);
        scanf("%d",&a[i]);

    }


    /******* Binary Search ********/
    int key,loc=0;
    printf("\nenter the key that you want to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)

    {
        if(key==a[i])
        {
            loc=i;
            printf("\nsearched item is in index %d",loc);
        }
    }
    if(loc==0)
    {
        printf ("\nItem is not in this list!!!");
    }
}
