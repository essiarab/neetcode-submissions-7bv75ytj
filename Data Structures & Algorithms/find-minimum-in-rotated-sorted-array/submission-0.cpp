class Solution {
public:
    int findMin(vector<int> &nums) {

    int mid, left=0,right=size(nums)-1;

    while(left<right){
        mid=left+(right-left)/2;
        if(nums[mid]>nums[right]){
            left=mid+1;
        }
        else {
            right=mid;
        }
    }
    return nums[left];
    }
};
