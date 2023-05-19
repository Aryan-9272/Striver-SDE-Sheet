class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,j=0;
        int currSum=0,sum=0;
        bool allNeg=true;
        while(i<nums.size()&&j<nums.size()){
           if(nums[i]>0){
               allNeg=false;
           }
           currSum+=nums[i];
           i++;
           if(currSum>=0){
               sum=max(currSum,sum);
           }
           else{
               j=i;
               currSum=0;
           }
        }
        if(allNeg){
            sum=INT_MIN;
            for(int i=0;i<nums.size();i++)
                sum=max(sum,nums[i]);
        }
        return sum;
    }
};