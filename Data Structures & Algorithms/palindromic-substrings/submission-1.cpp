class Solution {
public:
    void helper(int &p1, int &p2, string s, int n, int &cnt){
        while(p1 >= 0 && p2 < n){
            if(s[p1] == s[p2]){
                cnt++;
                p1--;
                p2++;
            }else{
                break;
            }
        }
    }
    int countSubstrings(string s) {
        int n = s.size();
        int cnt = n;
        for(int i = 0; i < n; i++){
            int p1 = i - 1, p2 = i + 1;
            helper(p1, p2, s, n, cnt);
            p1 = i, p2 = i + 1;
            helper(p1, p2, s, n, cnt);
        }
        return cnt;
    }
};
