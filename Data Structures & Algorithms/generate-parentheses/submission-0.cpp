class Solution {
public:
    vector<string> generateParenthesis(int n) {
       vector<string>ans;

        helper("",0,0,n,ans);
        return ans;
    }
    void helper(string s,int open,int close,int &n,vector<string>&ans){
        if(s.size()==2*n){
            ans.push_back(s);
        }
        if(open>close){
            s.push_back(')');
            helper(s,open,close+1,n,ans);
            s.pop_back();
        }
        if(open<n){
            s.push_back('(');
            helper(s,open+1,close,n,ans);
        }
    }
};
