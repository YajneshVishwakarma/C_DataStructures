

void linearSearch(int temp)
{
    printf("\nSearching the array using Linear search\n");
    scanf("%d",&temp);
    
    for(j=0;j<size;j++)
    {
        if(temp == arr[j])
        {
            flag=1;
            printf("The element found in the index %d\n",j);
        }
    }
    if(flag == 0)
    {
        printf("Not found\n");
    }
}

void binarySearch(int temp)
{
    printf("\nSearching the array using Binary search\n");
    int l=0,r=size-1,mid;
    
    printf("\nEnter the element to search\n");
    scanf("%d",&temp);
    
    while(l<=r)
    {
        mid=(l+r)/2;
        
        if(temp == arr[mid])
        {
            printf("Element found\n");
            flag=1;
            break;
        }
        else if(arr[mid]>temp)
        {
            l=mid+1;
        }
        else if(arr[mid]<temp)
        {
            r=mid-1;
        }
    }
    if(flag==0)
    {
        printf("Not found\n");
    }
}

