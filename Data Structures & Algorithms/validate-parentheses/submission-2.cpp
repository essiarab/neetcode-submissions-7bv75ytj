class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        if(s.length() == 0) return true;
        for(int i=0;i<s.length();i++){
             if((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) {
                p.push(s[i]);
             }
             else{
                if (p.empty()) return false;
                if(
                    
                    (s[i] == ')' && p.top() == '(') ||
                    (s[i] == ']' && p.top() == '[') ||
                    (s[i] == '}' && p.top() == '{')
                )
                {
                    p.pop();
                }
                else {
                    return false;
                }
             }
            
        }
        return p.empty();
    }
};
