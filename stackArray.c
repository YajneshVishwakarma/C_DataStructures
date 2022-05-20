#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stack[size];
void push()
{
    int data;
    printf("enter the data\n");
    scanf("%d",&data);
    if(top==size-1)
        printf("Overflow");
    else
    {
    top++;
    stack[top]=data;
    }
}
void pop()
{
    if(top==-1)
        printf("Stack is empty\n");
    else
        top--;
}
void peek()
{
    if(top==-1)
        printf("Stack is underflow\n");
    else{
        printf("peeked element is\n");
        printf("%d\n",stack[top]);
    }
}
void display()
{
    printf("Elements are\n");
    for(int i=top;i>=0;i--)
        printf("%d\t",stack[i]);
    printf("\n");
    
}
void main()
{
    int ch;
    
    while(1)
    {
        printf("Enter the choice\n");
        printf("1)push data into stack\n2)Pop the data\n3)Peek the stack\n4)Display the data\n5)Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
            display();
                break;
            case 5:
                exit(0);
            default:
                printf("Enter the value again\n");
                break;
        }
    }    
}