class Solution {
    public void moveZeroes(int[] nums) {
        int left,right;
        left=right=0;

        while(right < n){
            if(nums[right] == 0){
                ++right;
            }else{
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                ++left;
                ++right;
            }
        }
    }
}
