#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int i=0;
    ptr=(int*)malloc(5*sizeof(int));
    printf("enter the values\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("the entered values are\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
}
