class Solution {
    public static int firstOccur(int []nums,int target)
    {
       int start=0;
       int end=nums.length-1;
       int index=-1;
       while(start<=end)
       {
           int mid=start+(end-start)/2;
           if(nums[mid]==target)
           {
               index=mid;
               end=mid-1;
           }
           else if(nums[mid]>target)
           {
               end=mid-1;
           }
           else
           {
               start=mid+1;
           }
       }
    
       return index; 
    }
     public static int lastOccur(int []nums,int target)
    {
        int start=0;
       int end=nums.length-1;
       int index=-1;
       while(start<=end)
       {
           int mid=start+(end-start)/2;
           if(nums[mid]==target)
           {
               index=mid;
               start=mid+1;
           }
           else if(nums[mid]>target)
           {
               end=mid-1;
           }
           else
           {
               start=mid+1;
           }
       }
       
       return index;  
    }
    public int[] searchRange(int[] nums, int target) 
            {
                int []ans=new int [2];
          ans[0]=  firstOccur(nums,target);
            ans[1]=lastOccur(nums,target);
            return ans;
        }
    }
