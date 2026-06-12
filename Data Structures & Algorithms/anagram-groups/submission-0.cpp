class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>m;
       for(auto s : strs){
        string s2 = s;
        sort(s2.begin(),s2.end());
        m[s2].push_back(s);
       }
       vector<vector<string>>ans;
       for(auto p : m)
       ans.push_back(p.second);

       return ans;

    }
};
