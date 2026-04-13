class Solution {
public:

    string encode(vector<string>& strs) {
        ostringstream oss;
        for(string s:strs){
            oss << s.length() << "#" << s;
        }
        return oss.str();
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<string> res;
        string l;

        for(int i=0;i<s.length();i++){
            
            if (s[i]!= '#'){
                l += s[i];
            }
            else{
                res.push_back(s.substr(i+1,stoi(l)));
                i+=stoi(l);
                l="";
            } 
        }
        return res;
    }
};
