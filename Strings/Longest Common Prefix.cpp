class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0 ;
        while(true){
            char cur_ch = 0;
            for(auto str : strs){
                if(i >= str.size()){
                    //out of bound cndtion
                    cur_ch = 0;
                    break;
                }
                //just started or 1st character
                if(cur_ch == 0){
                    cur_ch = str[i];
                }
                else if(str[i] != cur_ch){
                    cur_ch = 0 ;
                    break;
                }
            }
            if(cur_ch == 0){
                break;
            }  
            ans.push_back(cur_ch);
            i++;     
         }
         return ans;
    }
};
