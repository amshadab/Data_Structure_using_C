// stack using array
#include <stdio.h>
#include <conio.h>
#define max 5
int stack[max], top = -1;
void push(int num);
void pop();
void display();
void main()
{
    int ch, num;
    do
    {
        printf("\n1.Push\n2.Pop\n3.Display");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("\nEnter number to be push: ");
            scanf("%d", &num);
            push(num);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\nProgram Terminated");
            break;
        }
        default:
            printf("\nInvalid choice!");
        }
    } while (ch != 4);
    getch();
}
void push(int num)
{

    if (top == max - 1)
    {
        printf("\nStack overflow!");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}
void pop()
{
    int num;
    if (top == -1)
    {
        printf("\nStack is underflow");
    }
    else
    {
        num = stack[top];
        printf("\nThe popped element is %d", num);
        top--;
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("\nstack[%d]= %d\n", i, stack[i]);
        }
    }
}
