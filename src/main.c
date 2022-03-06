#include <stdio.h>
#include "lib.h"

#define MAX 25

int a[MAX];

extern int rand_seed;

int main(int argc, char *argv[])
{
    int i,t,x,y;

    /* fill array */
    for (i=0; i < MAX; i++)
    {
        a[i]=rand();

        printf("%d\n",a[i]);
    }

    bubble_sort(MAX, a);

    /* print sorted array */
    printf("--------------------\n");

    for (i=0; i < MAX; i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
