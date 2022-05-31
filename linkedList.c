#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;

}; 
int ch = 0,no;
struct node*temp,*head = NULL,*temp2;

void printNode(struct node* temp)
{
    temp = head;
    printf("The elements are:\n");
    while(temp!=NULL)
    {
        printf("%d ",temp -> data);
        temp = temp ->link;
    }
    printf("\n");
}

void insertNode()
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the number to be inserted\n");
    scanf("%d",&newnode -> data);
    newnode -> link = NULL;

    if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            while(temp -> link!=NULL)
            {
                temp = temp -> link; 
            }

            temp -> link = newnode;
        }

        temp = head;
}

void insertAtBegin()
{
    
    if (head == NULL)
    {
        printf("Creating first node\n");
    }
    
    
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter the number to be inserted\n");
    scanf("%d",&newnode -> data);
    newnode ->link = NULL;

    if(head == NULL)
    {
        newnode -> link = NULL;

        head = newnode;
    }
    else{
        newnode -> link = head;

        head = newnode;

        temp = head;
    }

}

void insertAtPos(int pos)
{
    int count = 1,count2 = 0;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the number to be inserted\n");
    scanf("%d",&newnode -> data);
    newnode -> link = NULL;
    temp = temp2 = head;

    while (count != pos)
    {
        temp = temp ->link;
        count++; 

        // if(count+1 == pos)
        // {
        //     temp2 = temp;
        // }
    }

    // if (pos != count) 
    // {
    //     printf("Invalid Position\n"); 
    //     return;
    // }

    newnode -> link = temp -> link;
    temp ->link = newnode;

    temp = head;
    
}

void deleteAtBegin()
{
    temp = head;
    head = head -> link;
    free(temp);
    temp = head;
}

void deleteAtEnd()
{
    temp = head;
    temp2 = temp -> link;
    while (temp2 ->link != NULL)
    {
        temp2 = temp -> link;
        temp = temp -> link;
    }

    free(temp2);

    temp -> link =NULL;

    temp = head;
}

void deleteAtPos(int pos)
{
    int count = 1; 
    temp2 = temp = head;
    temp2 = temp -> link;
    while (count != pos)
    {
        temp2 = temp2 ->link;
        temp = temp ->link;
        count++;
    }

    temp -> link = temp2 -> link;
    free(temp2);

    temp = head;
}

void reverseLinkedList()
{
    struct node* prevnode,*currnode,*nexnode;
    
    prevnode = NULL;
    currnode = nexnode = temp = head;

    while(nexnode != NULL)
    {
        nexnode = nexnode -> link;
        currnode -> link = prevnode;
        prevnode = currnode;
        currnode = nexnode;
    }
    head = prevnode;
    temp = head;
}

int main()
{
    int ch=0,pos=0;
    
    do
    {
        printf("Enter your choice\n");
        printf("1.Insert Node\n2.Insert at the beginning\n3.Insert at position\n4.Delete at beginning\n5.Delete at end\n6.Delete at position\n7.Reverse the linked list\nEnter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: 
            insertNode();
            printNode(temp);
            break;
        case 2:
            insertAtBegin();
            printNode(temp);
            break;
        case 3:
            printf("Enter the position to insert\n");
            scanf("%d",&pos);
            if(head==NULL || pos == 1)
            { 
                insertAtBegin();
                printNode(temp);
            }
            else
            { 
                insertAtPos(pos-1);
                printNode(temp);
            }
            break;
        case 4: 
            printf("Deletion at the beginnig\n");
            deleteAtBegin();
            printNode(temp);
            break;
        case 5:
            printf("Deletion at the End\n");
            deleteAtEnd();
            printNode(temp);
            break;
        case 6:
            printf("Enter the Position to be deleted\n");
            scanf("%d",&pos);
            deleteAtPos(pos-1);
            printNode(temp);
            break;
        case 7:
            printf("Reverse Linked List:\n");
            reverseLinkedList();
            printNode(temp);

        default:
            break;
        }
    } while (1);
    

    return 0;
}