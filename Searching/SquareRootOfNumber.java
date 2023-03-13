class Solution
{
     long floorSqrt(long x)
	 {
		long start = 1;
		long end = x ;
		long ans = 1;
		
		while(start <= end){
		    long mid = start + (end - start) / 2;
		    
		    if(mid * mid == x){
		        return mid;
		        
		    }else if(mid * mid > x){
		        end = mid - 1;
		    }else{
		        ans = mid;
		        start = mid + 1;
		    }
		}
		return ans;
	 }
}
