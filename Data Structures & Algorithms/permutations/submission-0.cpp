class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        vector<vector<int>>ans;
        vector<int>ds;

       helper(nums,ans,ds,v);
       return ans;
    }
    void helper(vector<int>& nums, vector<vector<int>>& ans,vector<int>ds,vector<int>v){
     if(ds.size()==nums.size()){
          ans.push_back(ds);
          return;
     }
        
        for(int i=0;i<nums.size();i++){
          if(v[i]==0){
               v[i] = 1;
               ds.push_back(nums[i]);
               helper(nums,ans,ds,v);
               ds.pop_back();
               v[i] = 0;
          }
             //  helper(nums,ans,ds,v);
        }
    }
};
