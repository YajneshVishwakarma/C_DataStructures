#include <stdio.h>

int i,size,arr[100],elem,pos,j,temp,min;
int* arr2;
static int flag=0;

void swap(int* arr,int start,int end)
{
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

int partion(int arr[],int lb,int hb)
{
    int pivot = arr[lb],start = lb,end = hb;

    while(start < end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }

        while(arr[end] > pivot)
        {
            end--;
        }

        if(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }

    }

        temp = arr[lb];
        arr[lb] = arr[end];
        arr[end] = temp;
        return end;

    
}

void quickSort(int arr[],int lb,int ub)
{
    if(lb < ub)
    {
        pos = partion(arr,lb,ub);
        quickSort(arr,lb,pos-1);
        quickSort(arr,pos+1,ub);
    }
    
}

void selectionSort(int arr[])
{
    printf("Sorting the array using Selection sort\n");
    for(i=0;i<size;i++)
    { 
        min = i;

        for(j=i+1;j<size;j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        if(min!=i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

void insertionSort(int arr[])
{
    printf("Sorting the array using Insertion sort\n");
    for(i = 0; i<size ; i++)
    {
        temp = arr[i];
        j= i-1;

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
}

void insertion(int pos)
{
    if(pos<0 || pos>size+1)
    {
        printf("Invalid position\n");
    }
    
    else
    
    {
        ++size;
        
        if(pos == 0)
        {
            printf("Entering element at the beginning\n");
        }

        if(pos == size)
        {
            printf("Entering element at the end\n");
        }
        
    
        printf("Enter the element you want to enter\n");
        scanf("%d",&elem);
    
        for(i=size-1;i>=pos-1;i--)
        { 
            arr[i+1] = arr[i];
        }
    
        arr[pos-1] = elem;

        
    }
}

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

void bubbleSort()
{
    printf("\nSorting the array using Bubble sort\n");
    for(i=0;i<size-1;i++)
    {
        flag = 0;
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
}

void arrayDeletion( int pos)
{
        
    if(pos<0 || pos>size+1)
    {
        printf("Invalid position\n");
    }
    
    else
    {
        
        for(i=pos;i<size-1;i++)
        {
            arr[i] = arr[i+1];
        }
        
        --size;
        
        

    }
}


    

void printArray(int arr[])
{
    printf("\nThe elements of the array are\n");
        for(i=0;i<size;i++)
            printf("%d ",arr[i]);

        if ((i == size))
        {
            printf("\n");
        }
        
}

int main()
{
    
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
        
    printArray(arr);
    
    printf("\n");

    printf("Sorting elements using Quick sort");
    quickSort(arr,0,size-1);

    printArray(arr);
        
    
    
    // insertion(pos);

    // printArray(arr);
    

    // printf("\nEnter the element position to be deleted\n");
    // scanf("%d",&pos);

    // arrayDeletion(pos);

    // printArray(arr);

    // insertionSort(arr);

    // printArray(arr);

    // selectionSort(arr);

    // printArray(arr);

    // do
    // {
    //     switch (temp)
    //     {
    //     case 1: 
    //         printf("Enter the position for insertion\n");
    //         scanf("%d",&pos);
    //         insertion(pos);
    //         break;
        
    //     default:
    //         break;
    //     }
    // } while (1);
    
    
    return 0;
}

