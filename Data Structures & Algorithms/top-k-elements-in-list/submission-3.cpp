class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int num:nums){
            count[num]++;
        }
        vector<vector<int>> fr(size(nums)+1);
        for(pair<int,int> co:count){
            fr[co.second].push_back(co.first);
        }
        vector<int> res;
        for(int i=size(fr)-1;i>0;i--){
            for (const auto& item : fr[i]) {
                res.push_back(item);
                if(size(res)==k) return res;
                }
        }
    }
};
