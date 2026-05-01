class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> con(nums.begin(), nums.end());

        for(int n:con){
            if(con.find(n-1)==con.end()){
                int current = n ;
                int length =1;

                while(con.find(current+1)!=con.end()){
                    current++;
                    length++;
                }
                longest = max(longest, length);
            }

        }
        return longest;
    }
};
