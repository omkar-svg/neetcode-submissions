class Solution {
public:

    string encode(vector<string>& strs) {
           string sizes = "";
           for(auto s : strs){
            sizes+=(to_string(s.size())+",");
           }
           string result = "";
           for(auto s : strs){
            result+=s;
           }
           result+="#";
           result+=sizes;
           return result;
    }

    vector<string> decode(string s) {
          string sizes ="";
          int k = s.size();

          while(s[k]!='#'){
            k--;
          }
          sizes = s.substr(k+1);
          vector<string>ans;
          vector<int>len;
          string js  = "";
          for(char c : sizes){
              if(c==','){
              //  cout<<js<<" ";
                len.push_back(stoi(js));
                js="";
              }
              else
              js+=c;
          }
          string news ="";
          int m=0;
          int st=0;
          for(int i : len){
             cout<<i<<endl;
             ans.push_back(s.substr(st,i));
             st+=i;

          }
          return ans;
    }
};
