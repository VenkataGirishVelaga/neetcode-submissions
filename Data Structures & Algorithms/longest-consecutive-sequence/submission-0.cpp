class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for(int ele : nums){
            st.insert(ele);
        }
        int maxi = 0;
        for(int el : st){
            if(st.find(el - 1) == st.end()){
                int curr = el;
                int count = 1;
                while(st.find(curr + 1) != st.end()){
                    curr++;
                    count++;
                }
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};
