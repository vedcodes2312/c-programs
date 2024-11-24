//dynamic memory allocation - malloc and calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2;
    ptr1 = (int*)malloc(5*sizeof(int));
    ptr2 = (int*)calloc(5,sizeof(int));
    printf("Using malloc (garbage values):\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("ptr1[%d] = %d\n", i, ptr1[i]);
    }

    printf("\nUsing calloc (initialized to 0):\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("ptr2[%d] = %d\n", i, ptr2[i]);
    }
    //free locations
    free(ptr1);
    free(ptr2);

    return 0;
}

