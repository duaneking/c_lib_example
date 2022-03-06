#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

#define MAX 25

int a[MAX];

extern int rand_seed;

int main(int argc, char *argv[])
{
    /* Act: Fill array. */
    for (int i=0; i < MAX; i++)
    {
        a[i]=rand();

        printf("%d\n",a[i]);
    }

    bubble_sort(MAX, a);

    /* Arrange/Debug: Print sorted array for debugging. */
    printf("--------------------\n");

    for (int i=0; i < MAX; i++){
        printf("%d\n",a[i]);
    }

    /* Assert: Validate sorted array. */
    for (int i=0; i < MAX; i++){
	int current = a[i];
	int next = current;

	if( (i + 1) < MAX){
		next = a[i+1];
	}

	if( current > next ){
		printf("%d not sorted\n", current);
		exit(1);
	}
    }

    return 0;
}
