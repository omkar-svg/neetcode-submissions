class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        priority_queue<pair<int,int>>q;

        for(int i : nums) m[i]++;
        for(auto p : m){
        q.push({p.second,p.first});
        }
        vector<int>ans;
        while(k--){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
