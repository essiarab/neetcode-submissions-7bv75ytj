class Solution {
public:
    int characterReplacement(string s, int k) {
      if (s.length() == 0) return 0;
      int l=0,r=0;
      std::vector<int> count(26, 0);
      int max_freq = 0;
      int max_len =0;

      for(r=0;r<s.length();r++){
        int pos=s[r]-'A';
        max_freq = std::max(max_freq, ++count[pos]);
        if(r-l+1 - max_freq >k) {
            count[s[l]-'A']--;
            l++;
        }
        max_len=max(max_len,r-l+1);
      }
      return max_len;
    }
};
