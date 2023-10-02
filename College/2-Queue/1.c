#include<stdio.h>
#define MAX 5
void add( int* , int * , int * );
void delete( int * , int* , int*);
void display( int* , int ,int);

int main(){

    int arr[MAX] , item ;
    int front = -1;
    int rear = -1;
    int choice;
    do{
        printf("1- Push an Element\n");
        printf("2- Pop an Element\n");
        printf("3- Display\n");
        printf("4- Quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            add(arr , &front , &rear );
            break;

            case 2:
            delete(arr , &front , &rear );
            break;

            case 3:
            display( arr , front , rear);
            break;

            case 4:
            break;

            default:
            printf("Wrong choice\n");
        }

    }while(choice != 4);

    return 0;
}
void add( int *q , int *front , int *rear ){
        int item;
        if( *rear == MAX-1){
            printf("Queue is full\n");
            return ;
        }
        if( *front == -1){  //first insertion
            *front = *rear = 0;
        }
        else{
            *rear = *rear + 1;
        }
        printf("Enter data you want to insert in an queue:");
        scanf("%d",&item);
        q[*rear] = item;
    }

    void delete( int *q , int *f , int *r){

        if( *f == -1){
            printf("Queue is empty\n");
            return;
        }
        int temp = q[*f];
        if( *f == *r){
            *f = *r = -1;
        }
        else{
            *f = *f+1;
        }
        printf("Deleted element is %d\n", temp);
    }

    void display( int *q , int f , int r){
        if(f == -1){
            printf("Queue is empty\n");
            return;
        }
        printf("Queue is:");
        for( int i = f ; i<= r ; i++){
            printf("%d ",q[i]);
        }
        printf("\n");
    }   