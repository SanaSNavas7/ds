#include <stdio.h>
#include <conio.h>
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


}

for(i=0;i<size;i++)
{
printf("%d",a[i]);
printf("\n");
}
return 0;
}
