class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>m;
        int n = s.size();
        int ans = 0;
        int maxf = 0;
        int l = 0;
        for(int r=0;r<n;r++){
            m[s[r]]++;
            maxf = max(maxf,m[s[r]]); 
            while((r-l+1)-maxf>k){
                m[s[l]]--;
                l++;
            }
            ans = max(r-l+1,ans);
        }
        return ans;
    }
};
