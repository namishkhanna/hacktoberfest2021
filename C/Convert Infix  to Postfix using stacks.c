//Write a program to convert infix expression in postfix expression and also evaluate the postfix expression.
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include<math.h>
#define maxsize 100
int top = -1;
int topint = -1;
char stack[maxsize];
int intstack[maxsize];
char pop(void);
int popint(void);
int push(char);
int pushint(int);
int isFull(void);
int isFullint(void);
int isEmpty(void);
int isEmptyint(void);
char peek(void);
int peekint(void);
int priority(char);
int main(void)
{
    char exp[100];
    char post[100];
    char *e, x, *p;
    printf("Enter the expression : ");
    scanf("%s", exp);
    printf("\n");
    e = exp;
    p = post;
    while (*e != '\0')
    {
        if (isalnum(*e))
            *p++ = *e;
        else if (*e == '(')
            push(*e);
        else if (*e == '^')
            push(*e);
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
                *p++ = x;
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
                *p++ = pop();
            push(*e);
        }
        e++;
    }

    while (top != -1)
    {
        *p++ = pop();
    }
    *p = '\0';
    printf("The postfix expression is:\n%s\n", post);
    p = post; //reinitializing p
    int n1, n2, n3, num;
    while (*p != '\0')
    {
        if (isdigit(*p))
        {
            num = *p - 48;
            pushint(num);
        }
        else
        {
            n1 = popint();
            n2 = popint();
            switch (*p)
            {
            case '+':
            {
                n3 = n2 + n1;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n2 * n1;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            case '^':
            {
                n3 = (int) pow(n2,n1);
                break;
            }
            default:
                printf("\nINVALID CHARACTER. Unable to evaluate.\nExiting...");
                exit(1);
            }
            pushint(n3);
        }
        p++;
    }
    printf("\nThe result of expression %s  =  %d\n\n", post, popint());

    return 0;
}
char pop(void)
{
    if (!isEmpty())
    {
        char popped = stack[top];
        top = top - 1;
        return popped;
    }
    else
        return '\0';
}
int push(char ele)
{
    if (!isFull())
    {
        top += 1;
        stack[top] = ele;
        return 1;
    }
    else
        return 0;
}
int isFull()
{
    if (top >= maxsize - 1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
char peek()
{
    if (!isEmpty())
        return stack[top];
    else
        return 0;
}
int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}
int popint(void)
{
    if (!isEmptyint())
    {
        int popped = intstack[topint];
        topint = topint - 1;
        return popped;
    }
    else
        return 0;
}
int pushint(int ele)
{
    if (!isFullint())
    {
        topint += 1;
        intstack[topint] = ele;
        return 1;
    }
    else
        return 0;
}
int isFullint()
{
    if (topint >= maxsize - 1)
        return 1;
    else
        return 0;
}
int isEmptyint()
{
    if (topint == -1)
        return 1;
    else
        return 0;
}
int peekint()
{
    if (!isEmptyint())
        return intstack[topint];
    else
        return 0;
}
