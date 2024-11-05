#include <stdio.h>
#include <conio.h>
int main(){
int a[50];

int i,pos,ele,del;
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
printf("enter position to delete element");
scanf("%d",&pos);



if(pos < 1 || pos>size+1)
{
printf("invalid");
}
else
{
del=a[pos-1];
for(i=pos-1;i<=size-2;i++)
{

a[i]=a[i+1];
}


size--;


}

for(i=0;i<size;i++)
{
printf("%d",a[i]);
printf("\n");
}
return 0;
}
