#include<stdio.h>
#include<stdlib.h>
#define size 3
int stack[size], top =-1;
void push()
{
    if(top !=size-1)
    {
        int num;
        top++;
        printf("\n enter a number\n");
        scanf("%d",&num);
        stack[top]= num;
    }
    else
    {
        printf("\n stack is full\n");
    }

}
void traverse()
{
    if(top !=-1)
    {
        int i;
        printf("\n elements of stack are\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else
    {
        printf("\n no elements in stack to traverse\n");
    }
}
void pop()
{
    if(top !=-1)
    {
        int num = stack[top];
        printf("\n elements popped from stack is %d\n",num);
        top--;
    }
    else
    {
        printf("\n stack is empty\n");
    }

}
void main()
{
    int choice;
    do
    {
      printf("\n  enter 1 to push stack\n");
      printf("enter 2 to traverse the stack\n");
      printf("enter 3 to pop from stack\n");
      printf("enter 4 to exit\n");
      scanf("%d",&choice);
      switch (choice)
    
      {
        case 1:
                 push();
                 break;
        case 2:
                traverse();
                break;
        case 3:
                pop();
                break;
        case 4:
                exit(0);
        default:
        printf("\nwrong choice entered\n");        


      }         
      printf("\nenter 0 to continue\n");
      scanf("%d",&choice);
    
    }
    while (choice==0);
    }
