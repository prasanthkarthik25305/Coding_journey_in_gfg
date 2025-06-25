class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        map<char,int>mp;
        for(auto i:s) mp[i]++;
        
        
        map<int,int>mp2;
        for(auto i:mp){
            mp2[i.second]++;
        }
        
       if(mp2.size()>2) return false;
       
       if(mp2.size()==1) return true;
       vector<int>ans1;
       vector<int>ans2;
       for(auto i:mp2){
           ans1.push_back(i.second);
           ans2.push_back(i.first);
       }
       if(ans1[0]==1||ans1[1]==1){
           if(abs(ans2[0]*ans1[0]-ans2[1]*ans1[1])==1) return true;
           if(ans2[0]==1||ans2[1]==1) return true;
       }
       
       return false;
        
    }
};