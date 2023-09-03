//Implementation of stack using array
#include<stdio.h>
#include<process.h>
#include<conio.h>
#define MAX 5
int push(int* , int ,int);
int pop(int * , int );
void display( int * , int);



int main(){

    int choice;
    int arr[MAX] , top = -1 , element;

    while(1){

        printf("....MAIN MENU.....\n");
        printf("1.INSERTION OF ELEMENT\n");
        printf("2.DELETION OF ELEMENT\n");
        printf("3.DISPLAY STACK\n");
        printf("4.QUIT\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element for insertion:");
            scanf("%d",&element);
            top = push(arr , top , element);
            break;

        case 2:
            top = pop(arr , top );
            break;

        case 3:
            display(arr, top);
            break;
        
        case 4:
              return 0;

        default:
            printf("Please select valid choice:\n");
            break;
        }


    }
     return 0;
}
 int push( int *s , int top , int item )
    {
        if( top == MAX-1){
            printf("Stack is full !! Stack overflow\n");
        }
        else{
            top++;
            *(s+top) = item;
        }
        return top;
    }
    
    int pop( int *s , int top){
        if( top == -1){
            printf("Stack is empty !! Stack underflow\n");
        }
        else{
            int temp = *(s+top);
            printf("Popped element is:%d",temp);
            top--;
        }
        printf("\n");
        return top;
    }
    
    void display( int *s , int top){
        int i;

        if( top == -1){
            printf("Stack is empty");
        }
        else{
            printf("Elements of stack is:");
            for( i = top ; i>= 0 ; i--)
            printf("%d ",*(s+i));
        }
        printf("\n");
        
    }
