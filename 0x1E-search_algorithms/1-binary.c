#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
 {
     size_t mid, L, i = 0;
     size_t R = size - 1;
     if (array == NULL && L > R)
     {
         return -1;
     }
     mid = (L + R) / 2;
     if (value > array[mid]) {
         for (i = mid + 1; i < R; i++) {
             if (value == array[i]) {
                 return i;
             }
         }
     }
     else if (value < array[mid]){
         for(i = 0; i<= mid - 1; i++){
             if(value == array[i]){
                 return i;
             }
         }
     }
     else{
         return mid;
     }
     
     return -1;
     
     
 }
