//Brute force is sorting, better one is keeping 3 variables to count 0s ,1s,2s and then creating new array and assigning values

//TC: O(n)
//SC: O(1)

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low=0,mid=0,high=n-1;

   while(mid<=high){
      if(arr[mid]==0){
          swap(arr[low], arr[mid]);
         low++;
         mid++;
      }
      else if(arr[mid]==1) mid++;
      else{
         swap(arr[high], arr[mid]);
         high--;
      }
   }
   //   Write your code here
}

