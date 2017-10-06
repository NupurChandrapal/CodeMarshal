#include<stdio.h>

void BubbleSort(int a[],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=n;j>=i+1;j--)
        {
            if(a[j]<a[j-1])
            {
                int temp= a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    printf("\n sorted list: \n");
    for(i=1;i<=n;i++)
    {
        printf("index %d= %d\n",i,a[i]);
    }

}


/******** Main Function ********/

void main()
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

    /****** Function calling *******/

    BubbleSort(a,n);

}

