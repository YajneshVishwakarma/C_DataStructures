//QuickSort partition function

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
