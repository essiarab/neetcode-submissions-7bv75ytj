class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
        for(;i<size(nums)-1;i++){
            for(j=i+1;j<size(nums);j++) {
                if(nums[i]+nums[j]==target) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};
