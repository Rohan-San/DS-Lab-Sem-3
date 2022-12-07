//Stack implementation using array

#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();

int main()
{
    top=-1;
    printf("\nEnter the size of STACK[MAX=100]: ");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS USING ARRAY");
    printf("\n--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n");
	while (choice!=4)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
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
                printf("\nEXIT POINT\n");
                break;
            }
            default:
            {
                printf ("\nPlease Enter a Valid Choice(1/2/3/4)");
            }
        }
    }
    return 0;
}

void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK is over flow");
    }
    else
    {
        printf("Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("\nStack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("\nThe elements in STACK:");
        for(i=top; i>=0; i--){
            printf("\n%d",stack[i]);
        }
        printf("\n\nPress Next Choice");
    }
    else
    {
        printf("\nThe STACK is empty");
    }  
}
