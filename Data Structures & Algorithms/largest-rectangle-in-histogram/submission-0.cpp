class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        vector<int>pse;
        vector<int>nse;
        int n = h.size();
        // calculate pse
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&st.top().first>=h[i]){
                st.pop();
            }
            if(st.empty())
                pse.push_back(-1);
            else
                pse.push_back(st.top().second);
            st.push({h[i],i});
        }
        //for(int i : pse) cout<<i<<" ";
        
          // calculate nse
        stack<pair<int,int>>st1;
        for(int i=n-1;i>=0;i--){
            while(!st1.empty()&&st1.top().first>=h[i]){
                st1.pop();
            }
            if(st1.empty())
                nse.push_back(n);
            else
                nse.push_back(st1.top().second);
            st1.push({h[i],i});
        }
        reverse(nse.begin(),nse.end());
        //for(int i : nse) cout<<i<<" ";

        int ans = 0;
        for(int i=0;i<n;i++){
            int nsel = nse[i];
            int psel = pse[i];
            ans = max(ans,h[i]*(nsel-psel-1));
        }
        return ans;
    }
};
