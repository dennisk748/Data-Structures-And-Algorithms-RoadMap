/*
 * Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
 * Rotation by size 2 elements will be.
 * ar[1,2,3,4,5,6,7] = ar[3,4,5,6,7,1,2]
 */
#include <stdio.h>
#include <cstdlib>
#include <iostream>

void rotate( int inputArray[] , int d, int n) {
     int i;
     int j;
     int size = n;
     int temp;
     for(i = 0; i < d; i++){
         temp = inputArray[0];
         printf(" temps : %d,\n",inputArray[0]);
        for(j = 0; j < n; j++){
            inputArray[j] = inputArray[j + 1]; 
        }
        inputArray[size] = temp;
     }
     for(j = 0; j <= n; j++){
            printf("%d,\n",inputArray[j]); 
        }
 }

 int main(){
     int ar[] = {1,2,3,4,5,6,7};
     int rotateBy = 3;
     int size = sizeof(ar)/sizeof(ar[0]);
     printf("%d  :  %d" , sizeof(ar),sizeof(ar[0]));
     rotate(ar,rotateBy,size - 1);
 }