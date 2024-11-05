#include <stdio.h>
#include <conio.h>
void display(int size,int a[])
int insert(int size,int a[])
int delete(int size,int a[])
void search(int size,int a[])
void sort(int size,int a[])


int main(){
int a[50];

int i,pos,ele;
int size;
printf("enter size of array");
scanf("%d",&size);
printf("enter elements of array");

for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
printf("%d",a[i]);
printf("\n");
}
for(i=0;i<size;i++)
{
printf("%d",a[i]);
printf("\n");
}



int option;
printf("enter your choice : 1.display,2.insert,3.delete,4.search,5.sort");
scanf("%d",&option);
 switch(option)
{
case 1:display(size,arr);
break;

 case 2:size=insert(size,arr);
break;

case 3:size=delete(size,arr);
break;

case 4:search();
break;

case 5:sort();
break;

default:
printf("invalid");

}
return 0;
}
void display(int size,int a[])
{
for(i=0;i<size;i++)
{
printf("%d",a[i]);
printf("\n");
}

}

int insert(int size,int a[])
{
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

a[i+1]=a[i];
}

a[pos-1]=ele;
size++;
return size;

}
}
int delete(int size,int a[])
{
int i,pos,size,a;
printf("enter position to delete element");
scanf("%d",&pos);



if(pos < 1 || pos>size+1)
{
printf("invalid");
}
else
{
del=a[pos-1];
for(i=pos-1;i<size-1;i++)
{

a[i]=a[i+1];
}


size--;
return size;

}


}
void search(int size,int a[])
{
int i,size,ele;
printf("enter the element to search:");
scanf("%d",&ele);
for(i=0;i<size;i++)
	{
if(a[i]==ele)
{
printf("element found at index %d",i);
break;

}

}
if(i==size)
{
printf("element not found");
}
}
void sort(int size,int a[])
{
int i,j,size;
printf("enter the element to search:");
scanf("%d",&ele);
for(i=0;i<size;i++)
	{
if(a[i]==ele)
{
printf("element found at index %d",i);
break;

}

}
if(i==size)
{
printf("element not found");
}
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}

}

