class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(l<=r){

            while(!(s[l]>=97&&s[l]<=122||s[l]>=48&&s[l]<=57)&&l<s.size()) l++;
            while(!(s[r]>=97&&s[r]<=122||s[r]>=48&&s[r]<=57)&&r>=0) r--;

            if(s[r]!=s[l]) return false;
            r--;
            l++;
        }
        return true;
    }
};
