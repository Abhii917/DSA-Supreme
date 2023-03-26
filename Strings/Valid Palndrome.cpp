class Solution {
public:

    bool checkpal(string s,int start,int end){
        
        while(start < end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
            

        }
        return true;
    }


    bool validPalindrome(string s) {
        int i = 0;      //tow pointer approch
        int j = s.length()-1;

        while(i <= j){
            if(s[i] != s[j]){
                //either remove i'th index or j'th index
                return checkpal(s,i+1,j) || checkpal(s,i,j-1);
            }
            else{
                i++;
                j--;
            }
        }
        return true; //in case of zero removeal
    }
};
