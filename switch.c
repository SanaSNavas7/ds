#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int size;

void insert(int arr[]);
void delete(int arr[]);
void search(int arr[]);
void sort(int arr[]);
void display(int arr[]);

int main(){
int arr[50];

int i,pos,ele;
int size;
printf("enter size of array");
scanf("%d",&size);
printf("enter elements of array");

for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
printf("\n");
}



while(1)
{
int option;
printf("enter your choice : 1.insert,2.delete,3.search,4.sort 5.display 6.exit");
scanf("%d",&option);
 switch(option)
{
 case 1:insert(arr);
break;

case 2:delete(arr);
break;

case 3:search(arr);
break;

case 4:sort(arr);
break;

case 5:display(arr);

case 6:exit(0);

default:
printf("invalid");

}
}
return 0;
}


void insert(int arr[])
{
int pos,ele,i;
printf("enter position to insert element");
scanf("%d",&pos);
printf("enter  element");
scanf("%d",&ele);



if(pos < 0 || pos>size+1)
{
printf("invalid");
}
else
{

for(i=size-1;i>=pos-1;i--)
{

arr[i+1]=arr[i];
}

arr[pos-1]=ele;
size++;

}
}
void delete(int arr[])
{
int i,pos,del;
printf("enter position to delete element");
scanf("%d",&pos);



if(pos < 1 || pos>size+1)
{
printf("invalid");
}
else
{
del=arr[pos-1];
for(i=pos-1;i<size-1;i++)
{

arr[i]=arr[i+1];
}


size--;


}


}
void search(int arr[])
{
int i,ele;
printf("enter the element to search:");
scanf("%d",&ele);
for(i=0;i<size;i++)
{
if(arr[i]==ele)
{
printf("element found at index %d",i);
break;
}
if(i==size)
{
printf("element not found");
}
}
}

void sort(int arr[])
{
int temp,i,j;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1-i;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
}
}

}
void display(int arr[])
{
int i;
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
printf("\n");
}

}
