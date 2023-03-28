class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0 ;
        int h = s.size();

        while(l < h){
            // isaplha check whether char is alpha or not
            if(isalpha(s[l]) && isalpha(s[h])){
                swap(s[l] , s[h]);  
                l++;    // increment l and decremoent h if we found valid match
                h--;
             }
             // check s[l] is alpha or not
            else if(!isalpha(s[l])){
                l++;
            }
            // 3rd case when s[h] is not alpha
            else{
                h--;
            }
        }
        return s;
    }
};
