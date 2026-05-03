class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> co;
        for(int i=0;i<size(nums);i++){
            if(co.find(target-nums[i])!=co.end()){
                if(i<co[target-nums[i]]) {
                    return {i, co[target-nums[i]]};
                }
                else {
                    return {co[target-nums[i]],i};
                }
            }
            co[nums[i]]=i;
        }
    }
};
