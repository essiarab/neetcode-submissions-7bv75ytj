class Solution {
public:
   vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>> groups;
      vector<vector<string>> res;
      res.reserve(groups.size());

      for (string& s : strs) {
        string sorted_s =s;
        sort(sorted_s.begin(),sorted_s.end());
        groups[sorted_s].push_back(s);
      }
      for(auto& [key, group] : groups){
         res.push_back(std::move(group));
      }
      return res;
       
   }
};