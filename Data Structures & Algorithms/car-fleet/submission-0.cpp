class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>vec;

        int n = speed.size();

        for(int i=0;i<n;i++){
            vec.push_back({position[i],speed[i]});
        }

        sort(vec.rbegin(),vec.rend());
        stack<double>st;
        for(auto p : vec ){
                double tar = 1.0*(target-p.first)/p.second;
                st.push(tar);
            
            if(st.size()>=2){
                auto k = st.top();
                st.pop();
                if(k>st.top()){
                    st.push(k);
                }
            }
        }
        return st.size();
    }
};
