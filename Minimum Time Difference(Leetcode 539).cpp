class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for(int i=0; i<timePoints.size(); i++){
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            //formulaa
            int total = hours * 60 + min;
            //add total in arr;
            minutes.push_back(total);
        }

        //now sort the array
        sort(minutes.begin(),minutes.end());

        int n = minutes.size();
        int mini = INT_MAX;
        //find min diff;
        for(int i=0; i<n-1; i++){
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini,diff);
        }
        //special case;

        int last_diff = (minutes[0] + 1440) - minutes[n-1];
        mini = min(mini,last_diff);
        //return ans;
        return mini;

    }
};
