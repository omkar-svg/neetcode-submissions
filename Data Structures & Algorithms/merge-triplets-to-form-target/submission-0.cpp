class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int t1 = -1 , t2 = -1, t3 = -1;
        for(vector<int> vec : triplets){
            if(vec[1]<=target[1]&&vec[0]<=target[0]&&vec[2]<=target[2]){
                 if(vec[0]==target[0])
                 t1=1;
                  if(vec[1]==target[1])
                 t2=1;
                  if(vec[2]==target[2])
                 t3=1;
            }
        }
        if(t1==1&&t2==1&&t3==1)
        return true;
        return false;
    }
};
