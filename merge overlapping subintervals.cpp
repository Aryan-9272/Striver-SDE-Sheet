class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        if(intervals.size()==1)
            return intervals;
        sort(intervals.begin(),intervals.end(),comp);
        int first=intervals[0][0],last=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>last){
                ans.push_back({first,last});
                first=intervals[i][0];
                last=intervals[i][1];
            }
            else{
                last=max(intervals[i][1],last);
            }
        }
        ans.push_back({first,last});
        return ans;
    }
};