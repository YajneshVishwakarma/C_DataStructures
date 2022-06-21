#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* prev;
    struct  node* next;
};

struct node* head = NULL, *temp, *temp2,*newnode;


void createNode()
{
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode -> prev = NULL;
    newnode -> next = NULL;

    printf("Enter the number\n");
    scanf("%d",&newnode -> data);

    if(head == NULL)
    {
        temp = head = newnode;
    }
    else{
        
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newnode;
        newnode -> prev = temp;

        temp = head;
    }
}

void printNode(struct node* temp)
{
    
    while (temp != NULL)
    {
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");

    temp = head;
    
}

void insertAtBegin()
{
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode -> prev = NULL;
    newnode -> next = NULL;

    printf("Enter the number\n");
    scanf("%d",&newnode -> data);

    newnode -> next = temp;
    temp -> prev = newnode;
    head = newnode;
    temp = head;
}

void insertAtPos(int pos)
{
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode -> prev = NULL;
    newnode -> next = NULL;

    printf("Enter the number\n");
    scanf("%d",&newnode -> data);

    int count = 0;
    
    while(count != pos)
    {
        temp = temp -> next;
        count++; 
    }

    newnode -> next = temp;
    newnode ->prev = temp -> prev;
    temp2 = temp -> prev;
    temp -> prev = newnode;
    temp2 -> next = newnode;

    temp = head;
}

int main()
{
    int ch = 0,pos;
    do
    {
        printf("1.Create Node\n2.Insert at begin\n3.Insert at position\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            createNode();
            printNode(temp);
            break;
        case 2:
            
            if (head == 0)
            {
                createNode();
                printNode(temp);
                break;
            }
            else{ 
            insertAtBegin();
            printNode(temp);
            break;
            }

        case 3:
            printf("Insert at the position\n");
            scanf("%d",&pos);
            if (pos < 0)
            {
                printf("Invalid position\n");
                break;
            }
            else{
                insertAtPos(pos-1);
                printNode(temp);
                break;
            }
            

        default:
            break;
        }
    } while (1);
    
    return 0;
}