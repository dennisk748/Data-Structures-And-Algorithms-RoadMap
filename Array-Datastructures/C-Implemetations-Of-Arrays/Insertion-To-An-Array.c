/*
 Let LA be a Linear Array (unordered) with N elements and K is a positive integer such that K <= N
 .Following is the algorithm where ITEM is inserted into the Kth position of LA 
 NOTE : Don't replace the element in the array but rather shift the elements from the k'th position
        to the right to create space.
*/
#include <stdio.h>

int main(){

    int PN[] = {23,98,67,57,48,12,32,45,60,72};
    int k = 6;
    int ITEM = 83;
    int N = 10;
    int J = N;
    int i = 0;

    printf("The original elements of the array are : \n");
    for(i = 0; i < N; i++) {
        printf("PN[%d] = %d \n", i , PN[i]);
    }

    N += 1;

    for(i = J-1; i >= k; i--){
        PN[J] = PN[i];
        J--;
    }

    PN[k] = ITEM;
    printf("value of n : %d \n",N);

    printf("The new elements of the array are : \n");
    for(i = 0; i < 11 ; i++) {
        printf("PN[%d] = %d \n", i , PN[i]);
    }
}
