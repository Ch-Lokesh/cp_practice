#include <stdio.h>
#include <stdlib.h>

typedef struct Integers
{
    int *a;
} Integers;

int main()
{
    Integers *inp = (Integers *)malloc(sizeof(Integers));
    inp->a = (int *)malloc(sizeof(int) * 10);

    printf("Enter 10 integers to find sum \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &((inp->a)[i]));
    }
    int sum = 0;
    printf("displaying elements and their memory allocations\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d   ---->   %p\n", (inp->a)[i], &((inp->a)[i]));
        sum = sum + (inp->a)[i];
    }

    printf("\nSum of given input elements => %d\n", sum);
    return 0;
}