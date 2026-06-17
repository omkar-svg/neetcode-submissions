class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        set<vector<int>>ans;
        vector<int>ds;
        helper(ans,ds,nums,target,0);
        vector<vector<int>>ans2(ans.begin(),ans.end());
          return ans2;
    }
    void helper(set<vector<int>>&ans,vector<int>ds,vector<int>& nums, int tar,int ind){
              
               if(tar==0){
                    ans.insert(ds);
                    return;
               }
               if(ind==nums.size())
                    return ;
               
               if(tar-nums[ind]>=0){
                    ds.push_back(nums[ind]);
                    helper(ans,ds,nums,tar-nums[ind],ind+1);
                     helper(ans,ds,nums,tar-nums[ind],ind);
                    ds.pop_back();
               }
                while(ind<nums.size()-1&&nums[ind+1]==nums[ind]) ind++;
                helper(ans,ds,nums,tar,ind+1);
    }
};
