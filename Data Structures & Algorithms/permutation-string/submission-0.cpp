class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        if(n < m) return false;
        unordered_map<char, int> mpp(26);
        for(int i = 0; i < m; i++){
            mpp[s1[i]]++;
        }
        int cnt = 0;
        for(int i = 0; i < m; i++){
            if(mpp[s2[i]] > 0) cnt++;
            mpp[s2[i]]--;
        }
        if(cnt == m) return true;
        int l = 0, r = m;
        while(r < n){
            if(mpp[s2[r]] > 0) cnt++;
            mpp[s2[r]]--;
            
            mpp[s2[l]]++;
            if(mpp[s2[l]] > 0) cnt--;

            if(cnt == m){
                return true;
            }
            l++;
            r++;
        }
        return false;
    }
};
