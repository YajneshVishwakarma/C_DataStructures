#include<stdio.h>
#include<stdlib.h>

// void print(int* arr,int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
// }

// int main(int o,int oo)
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     print(arr,size);
//     printf("%d %d",o,oo);
    
// }

#include <stdio.h>

int main()
{
    int arr[5];
    // Assume base address of arr is 2000 and size of integer is 32 bit
    printf("%u %u", arr + 1, &arr + 1);

    return 0;
} 

