class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> complements;
        complements.reserve(nums.size());
        for(size_t i=0;i<size(nums);i++){
            int comp=target-nums[i];
            if(complements.find(comp)!=complements.end()) {
                return {complements[comp],i};
            }
            else {
                complements[nums[i]]=i;
            }
        }
        return {};
    }
};























/*int i=0,j=0;
        for(;i<size(nums)-1;i++){
            for(j=i+1;j<size(nums);j++) {
                if(nums[i]+nums[j]==target) {
                    return {i,j};
                }
            }
        }
        return {};*/