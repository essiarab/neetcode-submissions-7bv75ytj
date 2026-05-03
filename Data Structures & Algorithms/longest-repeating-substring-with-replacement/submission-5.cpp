class Solution {
public:
    int getvecmax(vector<int>& freq) {
        int m=0;
        for (int i=0;i<size(freq);i++){
            m=max(freq[i],m);
        }
        return m;
    }
    
    int characterReplacement(string s, int k) {
        int n =size(s);
        vector<int> freq(26,0); 
        int max_len=0;
        for(int l=0,r=0;r<n && l<n;r++){
            int pos= s[r]-'A';
            freq[pos]++;
            int len=r-l+1;
            if(len- getvecmax(freq)<=k){ //valid
                max_len=max(len, max_len);
            }
            else{
                freq[s[l]-'A']--;
                l++;   
            }
        }
        return max_len;
    }
};
