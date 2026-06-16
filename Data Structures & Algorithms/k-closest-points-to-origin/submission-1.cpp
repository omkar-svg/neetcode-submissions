class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>
        >q;
        for(auto v : points){
            int x = v[0];
            int y = v[1];
            int dist = x * x + y * y;

            q.push({dist, {x, y}});
        }
        while(k--){
            pair<int,int>p = q.top().second;
            ans.push_back({p.first,p.second});
            q.pop();
        }
        return ans;
    }
};
