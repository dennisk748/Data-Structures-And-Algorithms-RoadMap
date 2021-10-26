/*
 Let LA be a Linear Array (unordered) with N elements and K is a positive integer such that K <= N
 .Following is the algorithm where ITEM is inserted into the Kth position of LA 
 NOTE : Don't replace the element in the array but rather shift the elements from the k'th position
        to the right to create space.
*/
#include <stdio.h>

int main(){

    int LA[] = {23,98,67,57,48,12,32,45,60,72};
    int k = 6;
    int ITEM = 83;
    int N = 10;
    int J = N;
    int i = 0;

    printf("The original elements of the array are : ");
    for(i = 0; i < N; i++) {
        printf("LA[%d] = %d ", i , LA[i]);
    }

    N = N + 1;

    while(J >= k){
        LA[J + 1] = LA[J];
        j = j - 1;
        if (j == k){
            LA[K] = ITEM;
        }
    }

    printf("The new elements of the array are : ");
    for(i = 0; i < N; i++) {
        printf("LA[%d] = %d ", i , LA[i]);
    }
}
