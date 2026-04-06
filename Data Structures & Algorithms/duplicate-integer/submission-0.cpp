class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> index;
        int i=0;
        for(;i<size(nums);i++){
            int val=nums[i];
            if(index.count(val)){
                return true;
            }
            else {
                index.insert(val);
            }
        }
        return false;
    }
};