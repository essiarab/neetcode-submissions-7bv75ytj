class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int x=size(nums);
    for(int i=0;i<size(nums);i++){
        x ^= nums[i] ^ i;
    }
    return x;
    }
};
