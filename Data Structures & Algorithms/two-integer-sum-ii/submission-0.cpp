class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int high = numbers.size() - 1;
        int low = 0;
        while(low < high){
            if(numbers[low] == target - numbers[high]){
                return {low + 1, high + 1};
            }else if(numbers[low] > target - numbers[high]){
                high--;
            }else{
                low++;
            }
        }
        return {};

    }
};
