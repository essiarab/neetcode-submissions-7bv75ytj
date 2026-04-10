class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      unordered_map<int,int> h;
      for(int i=0;i<size(nums);i++)
      {
        if(h.find(nums[i])!=h.end()){
            int index=h[nums[i]];
            if(abs(index-i)<=k) return true;
            h[nums[i]]=i;
        }
        else{
            h[nums[i]]=i;
        }

      }  
      return false;
    }
};