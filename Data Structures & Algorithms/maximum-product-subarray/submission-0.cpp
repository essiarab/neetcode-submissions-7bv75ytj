class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int curMax=1;
        int curMin=1;

        for(int n: nums){
            if(n==0) {
                curMax=1;
                curMin=1;
            }
            int tmp = curMax*n;
            curMax = max(max(tmp,curMin*n),n);
            curMin = min(min(tmp,curMin*n),n);
            res=max(curMax,res);

        }
        return res;
    }
};
