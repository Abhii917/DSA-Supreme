class Solution {
public:
    int countPrimes(int n) {
     if(n == 0 ) return 0;
     
     vector<bool> primes  (n,true);

     int ans = 0;

     primes[0] = primes[1] = false;

     for(int i=2; i<n; i++){
         if(primes[i]){
             ans++;
         }

         int j = i*2;

         while(j < n ){
             primes[j] = false;
             j += i;
        }

    }
     return ans;
        
    }
};
