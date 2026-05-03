class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroes = 0;
        int prod =1;
        int n=size(nums);
        for(int i=0;i<n;i++){
            if(nums[i]==0) {
                zeroes++;
            }
            else{
                prod*=nums[i];
            }
        }
        
        if(zeroes >= 2) {
            return vector<int>(size(nums),0); //all zeroes
        }
        vector<int> res(size(nums),0);
        for(int i=0;i<n;i++){
            if (zeroes > 0) {
                res[i] = (nums[i] == 0) ? prod : 0;
            } else {
                res[i] = prod / nums[i];
            }            
        }
        return res;
    }
};
