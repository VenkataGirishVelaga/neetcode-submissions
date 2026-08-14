class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int cnt = n;
        for(int i = 0; i < n; i++){
            int p1 = i - 1, p2 = i + 1;
            while(p1 >= 0 && p2 < n){
                if(s[p1] == s[p2]){
                    cnt++;
                    p1--;
                    p2++;
                }else{
                    break;
                }
            }
            p1 = i, p2 = i + 1;
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
        return cnt;
    }
};
