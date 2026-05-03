class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int n=size(nums);
        int max_len=0;
        for(int i=0;i<n;i++){
            if(seen.find(nums[i]-1)==seen.end()) { //start of seq
                int cur_len=0;
                for(int k=nums[i];seen.count(k);k++){
                    cur_len++;
                    max_len=max(cur_len,max_len);
                }
            }
        }
        return max_len;
    }
};
