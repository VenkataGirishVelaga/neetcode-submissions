class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        unordered_map<char, int> mpp(26);
        for(int i = 0; i < m; i++){
            mpp[t[i]]++;
        }
        int l = 0, r = 0, mini = INT_MAX, sindx = -1, cnt = 0;
        while(r < n){
            if(mpp[s[r]] > 0) cnt++;
            mpp[s[r]]--;
            while(cnt == m){
                if((r - l + 1) < mini){
                    mini = r - l + 1;
                    sindx = l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]] > 0) cnt--;
                l++;
            }
            r++;
        }
        return sindx == -1 ? "" : s.substr(sindx, mini);

    }
};
