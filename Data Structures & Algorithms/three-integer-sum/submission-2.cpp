class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    sort(nums.begin(),nums.end());
    int i=0,l=0,r=size(nums)-1;

    vector<vector<int>> res;
    for(i=0;i<size(nums);i++)
    {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        if (nums[i]>0) break;
        l=i+1;r=size(nums)-1;
        while(l<r){
            if(-nums[i] == nums[l]+nums[r]){
                res.push_back({nums[i],nums[l],nums[r]});
                while(l < r && nums[l] == nums[l+1]) l++;
                while(l < r && nums[r] == nums[r-1]) r--;
                l++;r--;
            }
            else if(-nums[i] < nums[l]+nums[r]){
                r--;
            }
            else {
                l++;
            }
        }
       
    }
    return res;







/*
        unordered_map<int,int> sums;
        vector<vector<int>> res;
        int i,j;
        for(i=0;i<size(nums);i++){
            sums.insert({nums[i],i});
        }
        for(i=0;i<size(nums)-1;i++){
            for(j=i+1;j<size(nums);j++) {
                int total= -(nums[i]+nums[j]);
                if(sums.contains(total)){
                    int index= sums[total];
                    if((index != i) && (index != j)){
                            res.push_back(vector{nums[index],nums[i],nums[j]});
                    }
                }
            }
        }
        return res;
*/
    }
};
