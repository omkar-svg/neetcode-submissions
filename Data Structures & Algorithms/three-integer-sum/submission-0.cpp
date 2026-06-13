class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>>ans;
        int n = nums.size();
        int target = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                  if(nums[i]+nums[l]+nums[r]==target){
                    ans.insert({nums[i],nums[l],nums[r]});
                    }
                    
                   if(nums[i]+nums[l]+nums[r]<=target){
                        l++;
                    }
                    else
                       r--;
            }
        }
        vector<vector<int>>ans2(ans.begin(),ans.end());
        return ans2;
    }
};
