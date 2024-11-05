#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 7

int queue[MAX];
int i;
int front=-1,rear=-1;

void insert();
void delete();
void display();

int main()
{

while(1)
{
int ch;
printf("Enter 1.insert \n 2.delete \n 3.display \n 4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:delete();
break;

case 3:display();
break;

case 4:exit(0);
default:printf("invalid");
}}
return 0;
}





void insert()
{
int ele;
printf("Enter element to insert");
scanf("%d",&ele);
if(rear>MAX)
{
printf("overflow");
}
else
{
if(front==-1 && rear==-1)
{
front=rear=0;
queue[rear]=ele;
}
else
{
rear++;
queue[rear]=ele;
}
}
}

void delete()
{
int d;
if((front==-1 && rear==-1) || (front>rear))
{
printf("%d",front);
printf("underflow");
}
else
{
front=front+1;
d=queue[front];
}}

void display()
{
for(i=front;i<=rear;i++)
{
printf("%d",queue[i]);
}
}






