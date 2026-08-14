class Solution {
public:
    void helper(int &p1, int &p2, string s, int n, int &maxi, string &ans){
        while(p1 >= 0 && p2 < n){
            if(s[p1] == s[p2]){
                if( (p2 - p1 + 1 ) > maxi){
                    maxi =  p2 - p1 + 1;
                    ans = s.substr(p1, maxi);
                }
                p1--;
                p2++;
            }else{
                break;
            }
        }
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int maxi = 1;

        string ans = s.substr(0, 1);
        for(int i = 0; i < n; i++){
            int p1 = i - 1, p2 = i + 1;
            helper(p1, p2, s, n, maxi, ans);
            p1 = i;
            p2 = i + 1;
            helper(p1, p2, s, n, maxi, ans);
        }
        return ans;
    }
};
