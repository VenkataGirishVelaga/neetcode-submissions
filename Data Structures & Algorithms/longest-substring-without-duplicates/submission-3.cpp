class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxi = 1;
        for(int i = 0; i < n; i++){
            unordered_map<char, int> mpp;
            for(int j = i; j < n; j++){
                mpp[s[j]]++;
                if(mpp.size() == (j - i + 1)){
                    maxi = max(maxi, (j - i + 1));
                }
            }
        }
        return (n == 0) ? 0 : maxi;
    }
};
