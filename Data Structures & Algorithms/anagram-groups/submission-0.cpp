class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        for(auto& s:strs ){
            string key = s;
            sort(key.begin(), key.end());
            group[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto k : group){
            ans.push_back(k.second);
        }
        return ans;
    }
};
   