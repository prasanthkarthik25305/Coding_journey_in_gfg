class Solution {
  public:
  
bool check(vector<int> diff, int k, int w, int mid){
            int prev = 0;
            for(int i=0; i<diff.size(); i++){
                diff[i] += prev;
                prev = diff[i];
                if(diff[i] >= mid)
                    continue;
                k -= (mid - diff[i]);
                if(k < 0)
                    return 0;
                if(i+w < diff.size())
                    diff[i+w] -= (mid - diff[i]);
                prev = mid;
            }
            return 1;
        }
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int n=arr.size();
        vector<int>diff(n);
        diff[0]=arr[0];
        int miny=INT_MAX,maxy=INT_MIN;
         for(int i=0;i<arr.size();i++){
             if(i>0) diff[i]=arr[i]-arr[i-1];
             miny=min(arr[i],miny);
             maxy=max(arr[i],maxy);
         }
         
         int low=miny,high=miny+k;
         
         int mid,ans;
         while(low<=high){
             mid=(low+high)/2;
             
             if(check(diff,k,w,mid)){
                 ans =mid;
                 low = mid+1;
             }
             else high = mid-1;
         }
         
         return ans;
    }
};