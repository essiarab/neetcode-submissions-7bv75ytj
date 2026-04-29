class Solution {
public:
    void BT(vector<int>& nums, int target, int i, vector<int>& current, vector<vector<int>>& result) {
        if(target==0) {
                result.push_back(current);
                return;
        }
        for(int k=i;k<size(nums);k++){
            if( nums[k]> target) {
                break;
            }
            current.push_back(nums[k]);
            BT(nums,target-nums[k],k,current,result);
            current.pop_back();
        }

    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        sort(nums.begin(), nums.end());
        BT(nums,target,0,cur,res);
        return res;
    }
};
