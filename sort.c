#include <stdio.h>
#include <conio.h>
int main(){
int a[50];

int i,pos,j,temp;
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
printf("the sorted array is ");

for(i=0;i<size;i++)
{
printf("%d",a[i]);
printf("\n");
}
return 0;
}