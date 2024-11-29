#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u[100], usize, s1size, s2size, s1[10], s2[10], s[30], i, j, k = 0;
    printf("Enter the size of universal set: ");
    scanf("%d", &usize);
    printf("Enter the elements of universal set:\n");
    for (i = 0; i < usize; i++)
    {
        scanf("%d", &u[i]);
    }
    printf("Enter the size of set 1: ");
    scanf("%d", &s1size);
    printf("Enter the elements of set 1:\n");
    for (i = 0; i < s1size; i++)
    {
        scanf("%d", &s1[i]);
    }
    printf("Enter the size of set 2: ");
    scanf("%d", &s2size);
    printf("Enter the elements of set 2:\n");
    for (i = 0; i < s2size; i++)
    {
        scanf("%d", &s2[i]);
    }

    if (s1[i] == u[i])
    {
        s1[i] = 1;
    }
    else{
        s1[i] = 0;
    }
    printf("")

    for (i = 0; i < s1size; i++)
    {
        s[k] = s1[i];
        k++;
    }
    for (j = 0; j < s2size; j++)
    {
        int found = 1;
        if (s1[i] == s2[j])
        {
            found = 0;
            printf("element already");
            break;
        }
        else
        {
            s[k] = s2[j];
            k++;
        }
    }
    k = i + j;
    printf("new array");
    for (i = 0; i < k; i++)
    {
        printf("%d ", s[k]);
    }
}

/*
for(i=0;i<s1size;i++){
     printf("%d",s1[i]);

}
for(i=0;i<s2size;i++){
     printf("%d",s2[i]);

}
for(i=0;i<usize;i++){
     printf("%d",u[i]);

}*/
