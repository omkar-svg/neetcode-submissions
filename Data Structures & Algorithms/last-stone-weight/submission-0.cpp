class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         priority_queue<int>q;
         for(int i : stones) q.push(i);
         while(q.size()>1){
            if(q.size()>=2){
                int n1 = q.top();
                q.pop();
                int n2 = q.top();
                q.pop();
                if(n1!=n2)
                q.push(abs(n1-n2));
            }
         }
         if(q.empty()) return 0;
         return q.top();
    }
};
