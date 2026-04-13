class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int longest=0;
        unordered_set<int> s;
        for(int i=0;i<size(nums);i++){
            s.insert(nums[i]);
        }
        for(int i: s){
            int prev=i-1;
            if(s.find(prev)!=s.end()) { //not beginning of set
                continue;
            }
            else{
                int cur=0;
                int next=i;
                while(s.find(next)!=s.end()){
                    next++;cur++;
                    longest =max(longest,cur);
                }
            }
        }
        return longest;
    }
};