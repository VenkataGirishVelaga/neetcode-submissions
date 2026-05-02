class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt = 0;
        int prdt = 1;
        int pos = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                cnt++;
                pos = i;
            } 
            if(nums[i] != 0) prdt *= nums[i];
        }
        vector<int> res(nums.size());
        if(cnt == 0){
            for(int i = 0; i < nums.size(); i++){
                res[i] = prdt / nums[i];
            }
        }else if(cnt == 1){
            res[pos] = prdt;
        }  
        return res;
    }
};
