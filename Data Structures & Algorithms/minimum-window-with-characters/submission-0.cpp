class Solution {
public:
    bool anyneg(vector<int>& f){
        for(int i=0; i<size(f);i++){
            if(f[i]<0) return true;
        }
    return false;
    }
    
    string minWindow(string s, string t) {
        vector<int> f(256,0);
        int n=size(s);
        int m=size(t);
        
        //set all freq negative
        for(int i=0;i<m;i++){
            f[t[i]]--;
        }

        int min_len=n+1;
        string min_s;
            
        for(int l=0,r=0;l<n &&r<n;r++){
            
            int pos=s[r];
            f[pos]++;
                    
            while(!anyneg(f)){
                int len=r-l+1;
                if(len < min_len) {
                    min_s=s.substr(l,r-l+1);
                    min_len=len;
                }
                f[s[l]]--;
                l++;
            }
            
        }
        return min_s;
    }
};
