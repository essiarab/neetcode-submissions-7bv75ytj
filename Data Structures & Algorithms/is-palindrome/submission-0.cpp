class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,l=s.length()-1;
        for (i=0; i<l;){
            if (!isalnum(s[i])) {
                i++;
            } 
            else if (!isalnum(s[l])) {
                l--;
            } 
            else {
                if(tolower(s[i])==tolower(s[l])){
                    i++,l--;
                }
                else {
                    return false;
                }

            }
        }
        return true;
    }
};
