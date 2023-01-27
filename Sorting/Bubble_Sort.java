package Arrays_DSA;

import java.util.Arrays;

public class Bubble_Sort {

     public static void sort(int[] arr){
        for(int i=0; i<arr.length-1;i++){
            for(int j=0;j<arr.length-i-1;j++){

                if(arr[j]>arr[j+1]){
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }


            }
        }
        System.out.println(Arrays.toString(arr));

    }
    public static void main(String[] args) {
        int arr[]= {2,43,544,66,1,343,5,6,87,4,7};  
        sort(arr); 
        
        
     
    }
    
}
