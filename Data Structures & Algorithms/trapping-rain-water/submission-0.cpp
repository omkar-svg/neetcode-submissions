class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int>pre(h);
        int m = -1;
        for(int i=n-1;i>=0;i--){
           
            m = max(pre[i],m);
            pre[i] = max(pre[i],m);
        }
         m = h[0];
        int ans =0;
         for(int i=1;i<n-1;i++){
            m = max(m,h[i]);
            cout<<m<<" "<<pre[i]<<endl;
            ans+=max(0,min(m,pre[i])-h[i]);
         } 
       return ans;


return 9;
    }
};
