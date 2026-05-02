class Solution {
public:
    bool canJump2(vector<int>& nums) {
        int n=size(nums);
        for(int i =n-2;i>=0;i--){
             int jumpDistance = nums[i]; // Save the original jump value before overwriting
            
            // 1. Check if we can reach the last index DIRECTLY from here
            if (i + jumpDistance >= n - 1) {
                nums[i] = 9999999;
                continue; // Skip the inner loop, we already found a way
            }
            for(int j=i+1;j<=i+nums[i];j++){
                if(nums[j]>=n-1) {
                    nums[i]=9999999;
                    break;
                }
            }
        }
        return (nums[0] == 9999999);
    }
     bool canJump(vector<int>& nums) {
        int n=size(nums);
        int goal=n-1;
        for(int i =n-2;i>=0;i--){
            if(i+nums[i]>=goal){
                goal=i;
            }
        }
        return (0 == goal);
    }
};
