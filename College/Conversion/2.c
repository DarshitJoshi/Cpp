//infix to postfix
#include<stdio.h>
#include<ctype.h>
#define MAX 20
char stack[MAX] ;
int top = -1;

void push(char item){
    stack[++top] = item;
}

int pop(){

    if(top == -1){ return -1; }
    return stack[top--];
}

int priority(char val){

    if( val == '(')
       return 0;
    if( val == '+' || val == '-'){
        return 1;
    }
    if( val == '*' || val == '/'){
        return 2;
    }
}

int main(){

    char exp[MAX] , x;
    char *e;
    printf("Enter the expression:");
    scanf("%s",exp);
    e = exp ;

    while( *e != '\0'){
        if(isalnum(*e) ){
            printf("%c",*e);
        }

        else if( *e == '(' ){
            push(*e);
        }

        else if( *e == ')'){
            while( (x = pop() ) != '(')
              printf("%c",x);
        }

        else{

            while( priority(stack[top] ) >= priority(*e))
              printf("%c",pop());
            push(*e);
        }
        

        e++;
    }

    while( top != -1){
        printf("%c",pop() );
    }
    return 0;
}