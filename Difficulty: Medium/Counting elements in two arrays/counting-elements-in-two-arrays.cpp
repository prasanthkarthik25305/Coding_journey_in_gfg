class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        //sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        vector<int>ans;
        for(auto i:a){
            int pos=upper_bound(b.begin(),b.end(),i)-b.begin();
            
            if(pos>=0) ans.push_back(pos);
        }
        
        return ans;
    }
};