//User function template in C++

class Solution 
{
    public:
    
   bool ispossibleSolution(int A[] , int N,int M,int sol){
       int pagesum = 0;
       int c = 1;
       for(int i=0; i<N; i++){
           if(A[i] > sol){
               return false;
           }
           if(pagesum + A[i] > sol){
               c++;
               pagesum = A[i];
               if(c > M){
                   return false;
               }
           }
           else{
               pagesum += A[i];
           }
       }
       return true;
   }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(N < M) return -1;
        int start = 0;
        int end = accumulate(A,A+N,0);
        int ans = -1;
        
        while(start <= end){
            int mid = (start+end)/2;
            
            if(ispossibleSolution(A,N,M,mid)){
                ans = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return ans;
    }
};
