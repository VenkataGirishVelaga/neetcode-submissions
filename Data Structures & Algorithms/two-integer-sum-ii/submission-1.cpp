class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < numbers.size(); i++){
            int res = target - numbers[i];
            if(mpp.find(res) != mpp.end()){
                return {mpp[res] + 1,i + 1};
            }
            mpp[numbers[i]] = i;
        }
        return {};

    }
};
