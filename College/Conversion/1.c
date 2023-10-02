#include <stdio.h>
#include <ctype.h>

#define MAX 25

int top = -1;
int stack[MAX];

void push(int);
int pop();

int main() {
    char postfix[MAX], symbol;
    int i = 0;
    int op1, op2;

    printf("Enter the postfix expression: ");
    scanf("%s", postfix);

    while ((symbol = postfix[i++]) != '\0') {
        if (isdigit(symbol)) {
            push(symbol - '0');
        } else {
            op2 = pop();
            op1 = pop();

            switch (symbol) {
                case '+':
                    push(op1 + op2);
                    break;

                case '-':
                    push(op1 - op2);
                    break;

                case '*':
                    push(op1 * op2);
                    break;

                case '/':
                    push(op1 / op2);
                    break;
            }
        }
    }

    printf("ANS: %d\n", stack[top]);

    return 0;
}

void push(int item) {
    stack[++top] = item;
}

int pop() {
    return stack[top--];
}
