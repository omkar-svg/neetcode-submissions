class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        int p1=0,p2=0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        while(p1<n1&&p2<n2){
               if(nums1[p1]<nums2[p2]){
                    vec.push_back(nums1[p1++]);
               }
               else{
                    vec.push_back(nums2[p2++]);
               }
        }
        while(p1<n1){
            vec.push_back(nums1[p1++]);
        }
        while(p2<n2){
             vec.push_back(nums2[p2++]);
        }
         int n = n1+n2;
         if(n%2!=0) return vec[n/2];

         double k1 = vec[(n/2)-1];
         double k2 = vec[(n/2)];

         return (k1+k2)/2;
    }
};
