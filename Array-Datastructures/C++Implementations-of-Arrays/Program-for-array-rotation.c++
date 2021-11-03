/*
 * Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
 * Rotation by size 2 elements will be.
 * ar[1,2,3,4,5,6,7] = ar[3,4,5,6,7,1,2]
 */
#include <stdio.h>
#include <cstdlib>
#include <iostream>

// First Implementation

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

 //Second Implementation

 void rotate2(int array[],int d, int n){
     int i;
     int j;
     int k;
     int m = 0;
     int N = d;
     int step = d - 1;
     int* temp = new int[N];
     for(i = 0; i < d; i++){
         temp[i] = array[i];
     }
     for(j = 0; j <= n; j++){
        array[j] = array[j + d];
        if(j >= (n - step)){
            array[j] = 0;
        }
     }
     for(k = n - step; k <= n; k++){
         array[k] = temp[m];
         m++;
     }
     for(i = 0; i <= n; i++){
         printf(" complete[%d] : %d,\n",  i, array[i]);
     }
 }

 int main(){
     int ar[] = {1,2,3,4,5,6,7};
     int rotateBy = 3;
     int size = sizeof(ar)/sizeof(ar[0]);
     printf("%d  :  %d" , sizeof(ar),sizeof(ar[0]));
     rotate2(ar,rotateBy,size - 1);
 }