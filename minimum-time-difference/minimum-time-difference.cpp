class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(auto time : timePoints){
            int hr=stoi(time.substr(0,2));
            int minute=stoi(time.substr(3,2));
            int ans=hr*60+minute;
            minutes.push_back(ans);
        }
        sort(minutes.begin(),minutes.end());
        int mini=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++){
            if((minutes[i+1] - minutes[i]) < mini){
                mini=minutes[i+1] - minutes[i];
            }
        }
        int n = minutes.size();
        int ans1=1440 - minutes[n-1] + minutes[0];
        int ans2=minutes[n-1] - minutes[0];
        int ans3=min(ans1,ans2);
        int ans=min(ans3,mini);
        return ans;
    }
};
