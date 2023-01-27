package Arrays_DSA;

import java.sql.Array;
import java.util.Arrays;

public class Insertion_sort {
    public static void insertion(int[] arr){
        for(int i=1;i<arr.length;i++){

         int temp=arr[i];
         int j=i-1;

         while(arr[j]>temp && j>=0){
           
              arr[j+1]=arr[j];
              j--;
         }
         arr[j+1]=temp;

        }
        System.out.println(Arrays.toString(arr));
    }
    public static void main(String[] args) {
        int[] arr={4,34,55,54,32,345,432,345,6,5432,34,5666,334,56,543,45};
        insertion(arr);

    }
}
