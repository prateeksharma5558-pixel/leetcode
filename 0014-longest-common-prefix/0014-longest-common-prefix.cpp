class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        string ans = "";
        sort(s.begin(),s.end());
        string st = s[0], end = s[n-1];
        for(int i=0; i<min(st.size(),end.size()); i++) {
            if(st[i]!=end[i]) {
                return ans;
            }
            ans+=st[i];
        }
        return ans;
    }
};