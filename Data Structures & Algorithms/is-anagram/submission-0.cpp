class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        if(s.length()==0) return true;
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());
        
        return s==t;
    }
};
