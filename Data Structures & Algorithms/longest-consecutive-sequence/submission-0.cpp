class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>m;
          int ans  = 0;
          sort(nums.begin(),nums.end());
          for(int i : nums){
                m[i]=(m[i-1]+1);
                ans = max(m[i],ans);
          }
          return ans;
    }
};
