class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int final =1; 
        int zero = 0;
        for(int n :nums){
            if(n!=0){
            final = final*n;
            }
            else{
                zero++;
            }
        }
        if(zero>1){
            return vector<int>(nums.size(), 0);
        }
        vector<int>result(nums.size());
        for (int i = 0; i<nums.size(); i++){
            if(zero>0){
                if(nums[i] == 0){
                    result[i] = final;
                }
                else{
                    result[i] = 0;
                }
            }
            else{
                result[i] = final/nums[i];
            }
        }
        return result;
    }
};
