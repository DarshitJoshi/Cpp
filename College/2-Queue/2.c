//circular queue
#include<stdio.h>
#define MAX 5
void add(int * , int* , int*) ;
void delete( int* , int* , int*);
void display( int* , int , int);
int main(){

    int q[MAX];
    int front = -1;
    int rear = -1;
    int  choice;
    do{
        printf("1- Push an Element\n");
        printf("2- Pop an Element\n");
        printf("3- Display\n");
        printf("4- Quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            add(q , &front , &rear);
            break;
        case 2:
            delete(q , &front , &rear);
            break;
        case 3:
            display(q ,front , rear);
            break;
        case 4 :
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }while(choice != 4);

    return 0;
}
void add( int *q , int *f , int *r){
    int data;    
    if((*f == 0 && *r == MAX -1) || (*f == *r+1)){
        printf("circular queue is FULL\n");
        return;
    } 
    else{
        if( *f == -1){
            *f = *r = 0;
        }
        else if(*r == MAX -1){
            *r = 0;
        }
        else{
            (*r)++;
        }
    }
    printf("Enter data you want to insert:");
    scanf("%d",&data);
    q[*r] = data;
}

void delete(int* q , int *f , int *r){

    if(*f == -1){
        printf("Circular queue is empty\n");
        return;
    }
    else{
        printf("Deleted item is:%d\n", q[*f]);
        if(*f == *r){
            *f = -1;
        }
        else if(*f == MAX -1){
            *f = 0 ;
        }
        else{
            (*f)++;
        }
    }
}

void display(int *q , int f , int r){
    if(f == -1){
        printf("Circular queue is empty\n");
        return;
    }
    else if( f <= r){
        printf("Elements are:");
        for( int i = f ; i <= r ; i++){
            printf("%d ",q[i]);
        }
        printf("\n");
    }
    else if(f > r){ 
        printf("Elements are:\n");
        for( int i = f ; i <= MAX -1 ; i++){
            printf("%d ",q[i]);
        }
        for( int i = 0 ; i <= r ; i++){
            printf("%d ",q[i]);
        }
        printf("\n");
    }
}