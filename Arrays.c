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

