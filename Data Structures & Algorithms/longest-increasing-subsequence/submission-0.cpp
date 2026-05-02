class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    int n=size(nums);
    vector<int> v(n, 1);
    int i=n-2;
    int overallMax = 1;
    for(;i>=0;i--){
      for(int j=i+1;j<n;j++){
        if(nums[i]<nums[j]) {
            v[i]=max(v[i],1+v[j]);
        }
      }
      overallMax =max(overallMax,v[i]);
    }
    return overallMax;
    }
};
