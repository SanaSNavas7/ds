#include <stdio.h>
#include <conio.h>
int main(){
int i;
int size;
int arr[size];
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
}



int option;
printf("enter your choice : 1.display,2.insert,3.delete,4.search,5.sort");
scanf("%d",&option);
 switch(option)
{
case 1:display(size,arr);
break;

 case 2:insert(size,arr);
break;

case 3:delete();
break;

case 4:search();
break;

case 5:sort();
break;
*/
default:
printf("invlid");

}
void display(int size,int arr[])
{

for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}
}
void insert(int size,int arr[])
{
int index;
int a;
printf("enter element to be inserted");
scanf("%d",&a);
printf("enter index to insert");
scanf("%d",&index);
for(i=size-1;i>=size;i--)
{
arr[i+1]=arr[i];
}
arr[index]=a;
display(size+1,arr[i]);
}
void search(int ,arr[])
{
int b;
printf("enter element for search");
scanf("%d",&b);
for(i=0;i<=size;i++)
{
if(b==arr[i])
{
printf("element is found");
}
else{
printf("element not found");
}



