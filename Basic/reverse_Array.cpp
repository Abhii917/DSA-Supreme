#include<iostream>
using namespace std;


int main(){

   int[] arr = new int[10];
   arr={12,12,23,343,3,4,5,67,64,4};

   
    int start = 0;
         int end = n;

         while(start <= end){
         swap(arr[start],arr[end]);
         start++;
         end--;
    }

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }

}