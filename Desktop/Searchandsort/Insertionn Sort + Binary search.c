#include<stdio.h>


/********** InsertionSort ************/
void InsertionSort(int a[],int n)
{


    int i,j,key;
    for(j=2;j<=n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
      a[i+1]=key;
    }

    printf("\n\nsorted array list: \n");
    for(i=1;i<=n;i++)
    {
        printf("\nintdex %d= %d",i,a[i]);
    }

}



/********** Binary Search ********/

void BinarySearch(int a[], int n)
{
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

/********** Main Function *************/

void main()
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

    /****** Function calling *******/

    InsertionSort(a,n);
    BinarySearch(a,n);

}
