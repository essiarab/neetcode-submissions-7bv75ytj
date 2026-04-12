class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    for(int num: nums) {
        freq[num]++;
    }
    std::vector<std::pair<int, int>> vec(freq.begin(), freq.end());

    // 2. Sort the vector using a lambda function
    std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; // Sort by the 'int' value
    });


    vector<int> res;
    for (int i= 0; i<k;i++){
        res.push_back(vec[i].first);
    }
    
    return res;

    }


};
















/*

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<size(nums);i++){
            int tmp=nums[i];
            freq[tmp]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for(const auto& [val, count]: freq){
            buckets[count].push_back(val);
        }

        vector<int> res;
        for (int i = buckets.size() - 1; i >= 0; --i) {
            for (int num : buckets[i]) {
                res.push_back(num);
                // 3. Stop exactly when we hit k elements
                if (res.size() == k) return res;
            }
        }
    }

*/