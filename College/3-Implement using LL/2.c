//Queue implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* rear = NULL;
struct node* front = NULL;

void push(int );
void pop();
void display();

int main(){

    int choice ,item;
    do{
        printf("1-Push element into queue\n");
        printf("2-Pop element from queue\n");
        printf("3-Traverse the queue\n");
        printf("4-Quit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter the data you want to insert:");
            scanf("%d",&item);
            push(item);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            break;

            default:
            printf("Wrong choice\n");
        }
    }while(choice != 4);
    return 0;
}

void push(int item){

    struct node *temp = (struct node*)malloc(1*sizeof(struct node));
    temp -> data = item;
    temp -> next = NULL;

    if(front == NULL){
        front = temp;
        rear = temp;
    }
    else{
        rear -> next = temp;
        rear = temp;
    } 
}

void pop(){

    if(front == NULL){
        printf("queue Overflow");
        
    }
    else{
        struct node* temp = front;
        front = front -> next;
        printf("Deleted item:%d",temp->data);
        free(temp);
    }
    printf("\n");
}

void display(){

    struct node *temp;
    if(front == NULL){
        printf("queue Underflow");
    }
    else{
        temp = front;
        printf("Elements are:");
        while(temp != NULL){
            printf("%d ", temp->data);
            temp = temp ->next;
        }
    }
    printf("\n");
}
