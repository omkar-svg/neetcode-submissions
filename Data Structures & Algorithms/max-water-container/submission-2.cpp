class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = 0;
        int l =0;
        int n = h.size();
        int r = n-1;
        int k = n-1;
        while(l<r){
            ans = max(k*min(h[l],h[r]),ans);

            if(h[l]<h[r])
             l++;
             else
             r--;
         k--;
        }
        return ans;

    }
};
