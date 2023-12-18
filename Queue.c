// queue using array
#include <stdio.h>
#include <conio.h>
#define max 5
int queue[max];
int front = -1, rear = -1;
void enqueue(int num);
void dequeue();
void display();
void main()
{
    int ch, num;
    do
    {
        printf("\n1.enqueue\n2.dequeue\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("\nEnter number to be enqueue: ");
            scanf("%d", &num);
            enqueue(num);
            break;
        }
        case 2:
        {
            dequeue();
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
            printf("\nInvalid choice!\n");
        }
    } while (ch != 4);
    getch();
}
void enqueue(int num)
{

    if (rear == max - 1)
    {
        printf("\nQueue is full");
    }
    else
    {
        if (rear == -1 && front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear++;
        }
        queue[rear] = num;
    }
}
void dequeue()
{
    int num;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        
    
    
        num = queue[front];
        printf("\nThe dequeue element is %d", num);
        front++;}
    
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("\nqueue[%d]= %d\n", i, queue[i]);
        }
    }
}