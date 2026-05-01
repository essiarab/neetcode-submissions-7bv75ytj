class Solution {
public:
    int countSubstrings(string s) {
        int res=0;
        int n=size(s);
        for(int i=0;i<n;i++){
            for(int l=i,r=i;(l>=0) && (r<n);l--,r++){
                if(s[l]==s[r]){
                    res++;
                }
                else{
                    break;
                }
            }
            for(int l=i,r=i+1;l>=0 && r<n;l--,r++){
                if(s[l]==s[r]){
                    res++;
                }
                else{
                    break;
                }
            }
        }
        return res;
    }
};
