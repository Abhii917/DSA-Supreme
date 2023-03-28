class Solution
{
  public:
  
    bool isPossible(int arr[], int n, int k, long long int mid)
    {
        long long int painterCount = 1;
        long long int totalTime = 0;
        
        for(long long int i = 0 ; i < n ; i++)
        {
            if(totalTime + arr[i] <= mid)
            {
                totalTime = totalTime + arr[i];
            }
            else
            {
                painterCount++;
                if(painterCount > k || arr[i] > mid)
                {
                    return false;
                }
                totalTime = arr[i];
            }
        }
        return true;
    }
    
    
    long long minTime(int arr[], int n, int k)
    {
        
        long long int start = 0;
        long long int sum = 0;
        long long int ans;
        
        for(long long int i = 0 ; i < n ; i++)
        {
            sum = sum + arr[i];
        }
        
        long long int end = sum;
        long long int mid = start + (end-start)/2;
        
        while(start <= end)
        {
            if(isPossible(arr,n,k,mid))
            {
                ans = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
};
