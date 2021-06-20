 # C++ program for reversal algorithm

#include <stdio.h>
void reverse(int arr[], int start, int end){
   int temp;
   while (start < end) {
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
   }
}
int main(){
   int arr[] = { 54, 67, 12, 76, 25, 16, 34 };
   int n = 7;
   int d = 2;
   printf("The initial array is :\n");
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
   reverse(arr, 0, d - 1);
   reverse(arr, d, n - 1);
   reverse(arr, 0, n - 1);
   printf("\nThe left reversed array by %d elements is:\n",d);
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
   return 0;
}
