class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>count;
        for(int num:nums) {
            count[num]++;
        }
        vector<pair<int, int>> vec;
        for (auto& p : count){
            vec.push_back({p.second, p.first});
        }
        sort(vec.rbegin(), vec.rend());

        vector<int>result;
        for(int i = 0 ;i<k; ++i ){
            result.push_back(vec[i].second);
        }
        return result;


    }
};
