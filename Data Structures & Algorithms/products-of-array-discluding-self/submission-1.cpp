class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int count_zeroes=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]!=0) {
                product*=nums[i];
            }
            else {
                count_zeroes++;
            }

        }
        vector<int> res;
        for(int i=0;i<size(nums);i++){
            if(count_zeroes >=2) {
                res.push_back(0) ;
            }
            else if(count_zeroes ==1) {
                if(nums[i] != 0){
                    res.push_back(0);
                }
                else{
                    res.push_back(product);
                }

            }
            else {
                    res.push_back(product/nums[i]);
            }
        }
        return res;
    }
};
