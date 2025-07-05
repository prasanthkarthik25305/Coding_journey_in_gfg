class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
      //  sort(arr.begin(),arr.end());
        
        //1 3 4 5
        int left=0;
        int maxy=0;
        for(int right=0;right<arr.size();right++){
            
            while((right-left+1)>=2){
                maxy=max(maxy,arr[left]+arr[left+1]);
                left++;
            }
            
        }
        return maxy;
    }
};

