#include<stdio.h>
int main()
{
    int key,a[10],n,least;
    printf("enter te size");
    scanf("%d",&n);
    printf("enter the unsorted array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

 for(int i=0;i<n-1;i++)
 {
    for(int j=i+1;j<n-i-1;j++)
    {
     if(a[j]>a[j+1])
        least=j+1;
    }

 key=a[least];
 while(least>0)
 {
    a[least]=a[least-1];
    least--;
 }
 a[i]=key;
 }
  for(int i=0;i<n;i++)
  printf("%d",a[i]);
}
