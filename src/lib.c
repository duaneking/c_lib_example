#ifndef LIB_C
#define LIB_C

/* lib.c */
#include "lib.h"

/*
 * To allow testing.
 */
int rand_seed=10;

/* from K&R, to produces a random number between 0 and 32767.*/
int rand()
{
    rand_seed = rand_seed * 1103515245 +12345;

    return (unsigned int)(rand_seed / 65536) % 32768;
}

/*
 * Generic, very slow bubble sort.
 *
 * Do not use on production code.
 */
void bubble_sort(int m,int a[])
{
    int x = 0;
    int y = 0;
    int t = 0;

    for (x=0; x < m-1; x++){
        for (y=0; y < m-x-1; y++){
            if (a[y] > a[y+1])
            {
                t=a[y];
                a[y]=a[y+1];
                a[y+1]=t;
            }
        }
    }
}


#endif
