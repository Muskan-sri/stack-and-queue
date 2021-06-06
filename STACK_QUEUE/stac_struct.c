/*write a program to implement stack using structure*/
#include<stdio.h>
#include<stdlib.h>
struct stack
{
int arr[50];
int top;
int size;

}st;
void push();
void pop();
void display();
int main()
{
int choice;

printf("enter size of the stack");
scanf("%d",&st.size);
st.top=1;
while(1)
    {

        printf("enter the choice\n1:push\n2:pop\n3:display\n4:exit");
        scanf("%d",&choice);
        switch (choice)
        {

        case 1: push();
        break;

        case 2: pop();
        break;
        case 3: display();
        break;
        case 4: exit(0);
        default : printf("invalid choice");

        }
    }
}
void push()
{
    int item;
if(st.top==st.size-1)
{


printf("stack overflow");
}
else
{

printf("enter the item");
scanf("%d", &item);

st.arr[st.top]=item;
st.top++;
}
}
void pop()
{
if(st.top==1)
    {

printf("stack underflow\n");
}
else
{
    int item;
item=st.arr[st.top];
st.top--;


printf("the popped item is %d",item);
}
}
void display()
{
int i;
if(st.top==-1)
{

    printf("stack is emepty");

}
else
{

for(i=st.top;i>=0;i--)
{
printf("%d\t",st.arr[i]);
printf("\n");
}


}
}
