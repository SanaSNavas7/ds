#include <stdio.h>
void sort(int n, int a[]);
void deleteElement(int *n, int a[]);
void merge(int n1, int n2, int a[], int b[], int c[]);
int main()
{
int i, n, x, a[50], b[50], c[100], ch;
do
{
printf("\nEnter your choice\n 1. Insert \t 2. Sort \t 3. Display \t 4. Delete \t 5.
Merging \t 6. Exit\n");
scanf("%d", &ch);
switch (ch)
{
case 1:
printf("Enter the no:of elements for insertion");
scanf("%d", &n);
printf("\nEnter the elements");
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
break;
case 2:sort(n, a);
break;
case 3:printf("The elements are\n");
for(i=0;i<n;i++)
printf("%d\t", a[i]);
break;
case 4:deleteElement(&n, a);
break;
case 5:printf("\nEnter the limit for 2nd array");
scanf("%d", &x);
printf("\nEnter the elements for 2nd array");
for(i=0;i<x;i++)
scanf("%d", &b[i]);
merge(n, x, a, b, c);
break;
case 6:printf("\nExiting");
break;
default:printf("\nWrong choice");
}
} while (ch != 6);
return 0;
}
void sort(int n, int a[])
{
int temp, i, j;
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if (a[i] > a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
printf("\nAfter sorting \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void deleteElement(int *n, int a[])
{
int i, el;
printf("\nEnter the element for deletion");
scanf("%d", &el);
int found = 0;
for(i=0;i<*n;i++)
if (a[i] == el)
{
a[i] = 0;
found = 1;
break;
}
if (!found)
printf("\nElement not found");
}
void merge(int n1, int n2, int a[], int b[], int c[])
{
int i;
for(i=0;i<n1;i++)
c[i] = a[i];
for(i=0;i<n2;i++)
c[i+n1]=b[i];
printf("\nAfter merging \n");
for(i=0;i<n1+n2;i++)
printf("%d\t", c[i]);
}
