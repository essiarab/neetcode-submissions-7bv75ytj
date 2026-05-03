class Solution {
public:
    bool isPalindrome(string s) {
        for(int l=0,r=size(s)-1;l<r;) {
            if(!isalnum(s[l])) {
                l++; continue;
            }
            if(!isalnum(s[r])) {
                r--; continue;
            }
            if(tolower(s[l])!=tolower(s[r])) return false;
            l++;r--;

        }
        return true;
    }
};
