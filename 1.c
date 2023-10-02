//Satck implementation using array
#include<stdio.h>
#define MAX 5
void  push(int * , int* , int );
void pop( int* , int* );
void display( int * , int);
int main(){
    int arr[MAX];
    int top = -1;
    int choice , item;
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
            push(arr , &top , item);
            break;

            case 2:
            pop(arr , &top);
            break;

            case 3:
            display(arr , top);
            break;

            case 4:
            break;

            default:
            printf("Wrong choice\n");
        }
    }while(choice != 4);
    return 0;
}
void push( int *s , int *top , int item){
    if(*top == MAX-1){
        printf("STACK OVERFLOW\n");
        return ;
    }
    (*top)++;
    s[*top] = item;
}
void pop( int *s , int *top){
    if(*top == -1){
        printf("STACK UNDERFLOW\n");
        return;
    }
    int element;
    printf("Deleted element:%d\n",s[*top]);
    (*top)--;
}
void display( int *s , int top){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    printf("Elements:");
    for( int i = top ; i >= 0 ; i--){
        printf("%d ",s[i]);
    }
    printf("\n");
}