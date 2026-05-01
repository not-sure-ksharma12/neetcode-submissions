class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> ana_s;
        unordered_map<char, int> ana_t;
        for(int i =0 ; i< s.length(); i++){
            ana_s[s[i]]++;
            ana_t[t[i]]++;
        }
        return ana_s==ana_t;
    }
};
