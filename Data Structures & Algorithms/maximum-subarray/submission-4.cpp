class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int cursum=nums[0];
        for(int i=1;i<size(nums);i++){
            cursum = max(nums[i], cursum + nums[i]);
            res=max(res,cursum);
        }
        return res;
    }
};
