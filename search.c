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


return 0;
}
