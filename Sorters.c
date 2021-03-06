#include "Sorters.h"
void Shell(int *items, int count, ...){
    int i, j, gap, k;
    int x, a[5];

    a[0]=9; a[1]=5; a[2]=3; a[3]=2; a[4]=1;

    for(k=0; k < 5; k++) {
        gap = a[k];
        for(i=gap; i < count; ++i) {
            x = items[i];
            for(j=i-gap; (x < items[j]) && (j >= 0); j=j-gap)
                items[j+gap] = items[j];
            items[j+gap] = x;
        }
    }
}

void Qs(int *items, int right, int left){
    int i, j;
    int x, y;

    i = left-1; j = right;

    /* выбор компаранда */
    x = items[(left+right)/2];

    do {
        while((items[i] < x) && (i < right)) i++;
        while((x < items[j]) && (j > left)) j--;

        if(i <= j) {
            y = items[i];
            items[i] = items[j];
            items[j] = y;
            i++; j--;
        }
    } while(i <= j);

    if(left < j) Qs(items, left, j);
    if(i < right) Qs(items, i, right);
}

int compare(const void * x1, const void * x2){
    return ( *(int*)x1 - *(int*)x2 );
}
void StdQsort(int *items, int count, ...){
    qsort(items,count,sizeof(int),compare);
}