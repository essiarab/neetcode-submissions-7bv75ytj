class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> c;
        for(int num : nums){
            if(c.find(num)!=c.end()){
              
                return true;
            }
            c.insert(num);
            
        }
        return false;
    }
};