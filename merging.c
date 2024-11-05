#include <stdio.h>
int main(){
int a[10],b[10],c[20],m,n,o,i;
printf("enter size of array");
scanf("%d",&m);
printf("enter elements of array 1");
for(i=0;i<m;i++)	
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
printf("%d",a[i]);
printf("\n");
}
printf("enter size of array");
scanf("%d",&n);
printf("enter elements of array 2");

for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
printf("%d",b[i]);
printf("\n");
}
o=m+n;
for(i=0;i<m;i++)
{
c[i]=a[i];
}
for(i=0;i<n;i++)
{
c[m+i]=b[i];
}
for(i=0;i<o;i++)
{
printf("%d",c[i]);
}
return 0;
}
