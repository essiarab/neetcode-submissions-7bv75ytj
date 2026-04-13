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
    























        /*

        unordered_set<int> seen(nums.begin(), nums.end());
        int max_seq = 0;

        for (int num : seen) {
            if (seen.find(num - 1) == seen.end()) {
                
                int current_num = num;
                int current_streak = 1; // Every number is a streak of at least 1

                while (seen.find(current_num + 1) != seen.end()) {
                    current_num += 1;
                    current_streak += 1;
                }

                max_seq = max(max_seq, current_streak);
            }
        }
        return max_seq;


        */
    }
};