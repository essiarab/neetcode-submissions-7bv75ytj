class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::vector<int> lastSeen(128, -1);
        int max=0;
        int left=0;
        for(int right=0;right<s.length();right++){
            char currentChar = s[right];
            if(lastSeen[currentChar]>=left){
                left =lastSeen[currentChar]+1;
            }
            
            lastSeen[currentChar]=right;
            
            max = std::max(max, right - left + 1);
        }
        return max;
    }
};
