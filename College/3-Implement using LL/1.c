//stack implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top = NULL;
void push( int );
void pop();
void display();
int main(){
    
    int choice ,item;
    do{
        printf("1-Push element into stack\n");
        printf("2-Pop element from stack\n");
        printf("3-Traverse the stack\n");
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

void push( int item){
    struct node* temp = (struct node*)malloc(1*sizeof(struct node ) );
    temp -> data = item;
    if(top == NULL){
        temp -> next = NULL;
        top = temp;
    }
    else{
        temp -> next = top;
        top = temp; 
    }
}

void pop(){

    if(top == NULL){
        printf("Stack Underflow");
    }
    else{
        struct node* temp = top;
        top = top->next;
        printf("Deleted element:%d",temp->data);
        free(temp);
    }
    printf("\n");
}

void display(){

    struct node* temp;
    if(top == NULL){
        printf("Stack Underflow");
    }
    else{
        temp = top;

        printf("Elements are:");
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}
