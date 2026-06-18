class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=size(nums);
        for(int num: nums){
            sum+=num;
        }
        return (n*(n+1)/2 )-sum;
    }
};
