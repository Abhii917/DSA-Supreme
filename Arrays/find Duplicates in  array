class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        vector<int> arrr;

        for(int i = 0; i<n; i++){
            int index = abs(arr[i]);
            
            if(arr[index] < 0 ){
                arrr.push_back(index);
            }
            
            arr[index] = -arr[index];
        }
        
        if(arrr.size() == 0){
            return{-1};
        }else{
            
        return arrr;
        }
        
        }
};
