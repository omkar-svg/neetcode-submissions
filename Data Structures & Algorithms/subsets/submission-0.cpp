class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int>ds;

         sort(nums.begin(),nums.end());
         helper(nums,ans,ds,0);
         return ans;
    }
    void helper(vector<int>&nums, vector<vector<int>>&ans,vector<int> ds,int ind){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        while(ind<nums.size()-1&&nums[ind]==nums[ind+1]) ind++;
        ds.push_back(nums[ind]);
        helper(nums,ans,ds,ind+1);
        ds.pop_back();
        helper(nums,ans,ds,ind+1);
    }
};
