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


 // Implementation 4 - A reversal algorithm
 /** Let AB are the two parts of the input array where A = arr[0..d-1] and B = arr[d..n-1]. 
  * The idea of the algorithm is : 
    Reverse A to get ArB, where Ar is reverse of A.
    Reverse B to get ArBr, where Br is reverse of B.
    Reverse all to get (ArBr) r = BA.
 **/
 void Reverse(int arr[], int size, int totalSize){
     int j = size - 1;
     int mid0;
     if(size % 2 == 0){
        mid0 = (size/2) - 1;
     }
     else {
        mid0 = (size/2);
     }
     for(int i = 0; i < mid0; i++){
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         j--;
     }

    int m = totalSize - 1;
    int size1 = totalSize - size;
    int mid1;
    if(size1 % 2 == 0){
        mid1 = (size1/2) - 1;
     }
     else {
        mid1 = (size1/2);
     }
     for(int i = size; i < size + mid1; i++){
         int temp = arr[i];
         arr[i] = arr[m];
         arr[m] = temp;
         m--;
     }
 }

 void ReversalAlgorithm(int arr[], int d, int n){
     int mid2;
     int k = n - 1;

     Reverse(arr,d,n);
     
     if(n % 2 == 0){
        mid2 = (n/2) - 1;
     }
     else {
        mid2 = (n/2);
     }
     for(int i = 0; i < mid2; i++){
         int temp = arr[i];
         arr[i] = arr[k];
         arr[k] = temp;
         k--;
     }

     for(int i = 0; i < n; i++){
         printf("arr[%d] = %d, \n", i, arr[i]);
     }
 }

 int main(){
     int ar[] = {1,2,3,4,5,6,7,8,9,10,11,12};
     int rotateBy = 3;
     int size = sizeof(ar)/sizeof(ar[0]);
     printf("%d  :  %d \n" , sizeof(ar),sizeof(ar[0]));
     ReversalAlgorithm(ar,rotateBy,size);
 }