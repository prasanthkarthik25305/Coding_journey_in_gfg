class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        map<char,int>mp;
        int n=s.size();
        int left = 0;
        int cnt=0;
        for(int right=0;right<n;right++){
            while((right-left+1)>k
            ){
                mp[s[left]]-=1;
                if(mp[s[left]]==0) mp.erase(s[left]);
                left++;
            }
            mp[s[right]]++;
            if(mp.size()==k-1 and (right-left+1)==k){
                cnt++;
            }
        }
        return cnt;
    }
};