//Singly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
void insertAtBeg( int );
void insertAtMid( int , int);
void insertAtEnd( int );
void display();
void delete(int);
void reverse();
struct node* start = NULL;

int main(){

    int choice , pos , item;

    do{
        printf("1-Insert node at first\n");
        printf("2-Insert node at middle\n");
        printf("3-Insert node at end\n");
        printf("4-traverse the list\n");
        printf("5-Deletion in the list\n");
        printf("6-Reverse\n");
        printf("7-Quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter data:");
            scanf("%d",&item);
            insertAtBeg( item);
            break;

            case 2:
            printf("Enter data:");
            scanf("%d",&item);
            printf("Enter position:");
            scanf("%d",&pos);
            insertAtMid( item , pos);
            break;

            case 3:
            printf("Enter data:");
            scanf("%d",&item);
            insertAtEnd(item);
            break;

            case 4:
            display();
            break;

            case 5:
            printf("Enter element for deletion:");
            scanf("%d",&item);
            delete(item);

            case 6:
            reverse();

            case 7:
            break;

            default:
            printf("Wrong choice\n");
        }
    }while(choice != 7);
    return 0;
}

void insertAtBeg( int item){
    struct node* temp =(struct node*)malloc(sizeof(struct node));
    temp -> data = item;

    temp -> next = start;
    start = temp;
    
}

void insertAtMid( int item , int pos){
    struct node* temp =(struct node*)malloc(sizeof(struct node));
    temp -> data = item;
    struct node *q1 , *q2 ;

    if(pos == 1 || start == NULL){
        temp -> next = start;
        start = temp;
    }
    else{
        q1 = start;
        q2 = q1 -> next;
        for( int i = 0 ; i < pos - 2 ; i++){
            q1 = q2 ;
            q2 = q2 -> next;
            if(q1 == NULL){
                printf("Linked list is too sort to insert at given position\n");
                return;
            }
        }
        q1 -> next = temp;
        temp -> next = q2;
    }
    printf("\n");
}

void insertAtEnd( int item){
    struct node* temp =(struct node*)malloc(sizeof(struct node));
    temp -> data = item;
    temp -> next = NULL;

    if(start == NULL){
        start = temp;
    }
    else{
        struct node* q1 = start;
        while(q1 -> next != NULL){
            q1 = q1 -> next;
        }
        q1 -> next = temp;
    }
}

void display(){
    struct node *q;

    if(start == NULL){
        printf("Linked List is empty\n");
        return;
    }
    q = start;
    printf("Elements are:");
    while(q != NULL){
        printf("%d ",q->data);
        q = q -> next;
    }
    printf("\n");
}

void delete(int item){
    struct node *temp , *q1;

    if(start == NULL){
        printf("linked list is empty\n");
        return ;
    }
    if(start -> data == item){ //deletion of the first node
        temp = start;
        start = start -> next;
        free(temp);
        printf("DELETION DONE\n");
        return;
    }
    q1 = start;
    while( q1 -> next != NULL){

        if(q1 -> next -> data == item){
            temp = q1-> next;
            q1->next = q1->next->next;
            free(temp);
            printf("DELETION DONE\n");
            return;
        }
        q1 = q1->next;
    }
    printf("Element is not present in the list\n");
}

void reverse(){
    
    struct node* curr = start;
    struct node* prev = NULL;
    struct node * forw = NULL;

    while(curr != NULL){

        forw = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forw; 
    }
    start = prev;

    printf("DONE\n");
}