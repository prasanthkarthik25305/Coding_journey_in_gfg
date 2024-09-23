//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int findDuplicate(vector<int>& nums) {
       
       bool a[100100]={false};
       for(int i=0;i<nums.size();i++){
        if(a[nums[i]]!=true){
            a[nums[i]]=true;
        }
      else{
        return nums[i];
      }
       } 
       return 0;
    }
    vector<int> findTwoElement(vector<int>& arr) {
     int chk= findDuplicate(arr);
     int sum=0;
     for(auto i:arr) sum+=i;
     int total=arr.size()*(arr.size()+1)/2;
     vector<int>ans;
       ans.push_back(chk);
     ans.push_back(chk-(sum-total));
   
     return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends