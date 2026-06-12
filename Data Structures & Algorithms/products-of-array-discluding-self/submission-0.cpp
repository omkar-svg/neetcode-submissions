class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre(nums);
        vector<int>post(nums);
        int n = nums.size();
        int p = 1;
        for(int i=0;i<n;i++){
            pre[i]*=p;
            p=pre[i];
        }
        p = 1;
        for(int i=n-1;i>=0;i--){
            post[i]*=p;
            p=post[i];
        }

        vector<int>ans(n);
        ans[0] = post[1];
        ans[n-1] = pre[n-2];
        for(int i=1;i<n-1;i++){
          ans[i] = pre[i-1]*post[i+1];
        }
        return ans;
        
    }
};
