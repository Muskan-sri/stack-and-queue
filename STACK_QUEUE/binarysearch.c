
#include<stdio.h>

main()
{
    int arr[100],size,key,i,pos;
    printf("Enter array size : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to search : ");
    scanf("%d",&key);

    pos=binarySearch(arr,key,0,size-1);
    if(pos==-1)
    {
        printf("The value %d is not present ",key);
    }
    else
    {
        printf("%d is found in %d index",key,pos);
    }
}

int binarySearch(int arr[],int item,int low,int high)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(item==arr[mid])
        {
            return mid;
        }
        else if(item>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
}
}
