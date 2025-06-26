class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<int>pq;
        
        for(auto i:mp){
            pq.push(i.second);
        }
        
        int sum=0;
        
        while(k--){
            int val=pq.top();
            pq.pop();
            val--;
            pq.push(val);
        }
        
        while(!pq.empty()){
            sum+=pq.top()*pq.top();
            pq.pop();
        }
        
        return sum;
        
    }
};