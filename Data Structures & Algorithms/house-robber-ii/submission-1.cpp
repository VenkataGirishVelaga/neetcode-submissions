class Solution {
public:
    int sol(vector<int>& nums, int start, int end){
        int prev = nums[start];
        int prev2 = 0;
        for(int i = start + 1; i <= end; i++){
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
        if(nums.size() == 1) return nums[0];
        return max(sol(nums, 0, nums.size() - 2), sol(nums, 1, nums.size() - 1));

    }
};
