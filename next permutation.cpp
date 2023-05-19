class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                int min_val=INT_MAX,ind=-1;
                for(int j=nums.size()-1;j>=i+1;j--){
                    if(nums[j]>nums[i]&&min_val>nums[j]){
                        min_val=nums[j];
                        ind=j;
                    }
                }
                int temp=nums[ind];
                nums[ind]=nums[i];
                nums[i]=temp;
                break;
            }
        }
        sort(nums.begin()+i+1,nums.end());
    }
};