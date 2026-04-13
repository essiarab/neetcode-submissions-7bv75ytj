class Solution {
public:
    int bsearch(vector<int>& nums, int l , int r, int target) {
        while(l<=r){
            int mid=l+(r-l)/2;
            if (nums[mid] == target) return mid;
            if(nums[mid]<target) {
                l=mid+1;
            }
            else {
                r=mid-1;
            }
        }
        return -1;
        
    }

    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid= l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else {
                r=mid;
            }
        }

        //binary search
        int pivot=l;
        if(nums[pivot] <= target  && target<= nums[size(nums)-1]){
            //binary search from pivot .. end
            return bsearch(nums, pivot , size(nums)-1, target);
        }
        else {
            //binary search left .. pivot
            return bsearch(nums,0 , pivot-1, target);
        }
    }
};
