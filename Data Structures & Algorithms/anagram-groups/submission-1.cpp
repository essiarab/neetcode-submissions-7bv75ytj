class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,std::vector<std::string>> h;
        for(int i=0;i<size(strs);i++){
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
            h[tmp].push_back(strs[i]);
        }
        std::vector<std::vector<std::string>> result;

        for (const auto& [key, value] : h) {
            // Create an inner vector containing {key, value}
            result.push_back(value);
        }
        return result;
    }
};
