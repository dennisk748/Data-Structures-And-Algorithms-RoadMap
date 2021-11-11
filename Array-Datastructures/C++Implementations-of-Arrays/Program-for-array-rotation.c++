/*
 * Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
 * Rotation by size 2 elements will be.
 * ar[1,2,3,4,5,6,7] = ar[3,4,5,6,7,1,2]
 */
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <numeric>

using namespace std;

// First Implementation

void rotate( int inputArray[] , int d, int n) {
     int i;
     int j;
     int size = n;
     int temp;
     for(i = 0; i < d; i++){
         temp = inputArray[0];
         printf(" temps : %d,\n",inputArray[0]);
        for(j = 0; j < n - 1; j++){
            inputArray[j] = inputArray[j + 1]; 
        }
        inputArray[size] = temp;
     }
     for(j = 0; j < n; j++){
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
     for(j = 0; j < n; j++){
        array[j] = array[j + d];
        if(j > (n - step)){
            array[j] = 0;
        }
     }
     for(k = n - step; k < n; k++){
         array[k] = temp[m];
         m++;
     }
     for(i = 0; i < n; i++){
         printf(" complete[%d] : %d,\n",  i, array[i]);
     }
 }

 // Implementation 3 - A juggling Algorithm

 /**void rotate3(int arr[], int d, int n){
     int gcd = std::gcd(d,n);
     int i = 0;
     int j = 0;
     int m = 0;
     int temp;
     while(m < 2){
     temp = arr[i];
        while(j < n){
            arr[j] = arr[j + d];
            j += d;
        }
     arr[i + (d*d)] = temp;
     i++;
     j = 0; // deadlock situation
     j++;
     printf("j = %d \n", j );
     m++;
     }

     for(int k = 0; k < n; k++){
         printf("arr[%d] = %d \n" , k, arr[k]);
     }
 }**/

 void rotate3(int arr[], int d, int n){
     // to handle if d >= n
     d = d % n;
     int g_c_d = gcd(d,n);
     for(int i = 0; i < g_c_d; i++){

         int temp = arr[i];
         int j = i;

        while (1) {
            int k = j + d;
            if(k >= n){
                k = k - n;}

            if(k == i){
                break;} 

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
     }
     for(int k = 0; k < n; k++){
         printf("arr[%d] = %d \n" , k, arr[k]);
     }
 }

void leftRotate(int arr[], int d, int n)
{
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
 int main(){
     int ar[] = {1,2,3,4,5,6,7,8,9,10,11,12};
     int rotateBy = 3;
     int size = sizeof(ar)/sizeof(ar[0]);
     printf("%d  :  %d \n" , sizeof(ar),sizeof(ar[0]));
     rotate3(ar,rotateBy,size);
 }