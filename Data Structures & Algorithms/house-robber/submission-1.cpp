class Solution {
public:
    int sol(vector<int>& nums, int start, int end){
        int prev = nums[0];
        int prev2 = 0;
        for(int i = 1; i < nums.size(); i++){
            int take = nums[i];
            if(i > 1) take += prev2;
            int nottake = 0 + prev;
            int curr = max(take, nottake);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        return max(sol(nums, 0, nums.size() - 2), sol(nums, 1, nums.size() - 1));
    }

};
