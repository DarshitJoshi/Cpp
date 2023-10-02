// Circular Queue implementation using linked list
#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
struct node{
    int data;
    struct node* next;
};
struct node *front = NULL;
struct node *rear = NULL;

int main(){

    int item , choice;
    do{
        printf("1-Push element into Circular queue\n");
        printf("2-Pop element from Circular queue\n");
        printf("3-Traverse the Circular queue\n");
        printf("4-Quit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter the data you want to insert:");
            scanf("%d",&item);
            push(item );
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

    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = item;
    if( front == NULL){
        front = temp;
        rear = temp;
        rear ->next = front;
    }
    else{
        rear -> next = temp;
        rear = temp;
        rear -> next = front;
    }
}

void pop(){

    if(front == NULL){
        printf("Circular queue is empty\n");
        return ;
    }
    struct node* temp = front;
    if( front -> next == front){
        front = NULL;
    }
    else{
        front = front -> next;
        rear -> next = front;
    }
    printf("Deleted element is:%d\n",temp->data);
    free(temp);
}

void display(){

    if(front == NULL){
        printf("Circular queue is empty\n");
        return ;
    }
    struct node* temp = front;
    printf("Elements are:");
    do{
        printf("%d ",temp->data);
        temp = temp -> next;
    }while(temp != front);
    printf("\n");
}