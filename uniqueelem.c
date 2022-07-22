#include<stdio.h>
int main()
{
    int temp,n,a[10],count=0;
    printf("enter the size of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        temp=a[i];
        for(int j=0;j<n;j++)
        {
            if(temp==a[j])
            {
                count++;
            }
        }
                 if(count==1)
            {
            printf("unique %d",temp);
            }
    }
    return 0;
}

