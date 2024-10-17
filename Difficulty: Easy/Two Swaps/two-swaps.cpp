//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int notpos(vector<int>&arr){
      int cnt=0;
      for(int i=0;i<arr.size();i++){
            if(arr[i]!=i+1){
                cnt++;
            }
        }
        return cnt;
  }
    bool checkSorted(vector<int> &arr) {
        // code here.
        int cnt=notpos(arr);
        
        if(cnt>4 || cnt==2 or cnt==1) return false;
        else if(cnt==3 || cnt==0) return true;
        else if(cnt==4){
            int j=2;
       while(j--){
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i+1){
                swap(arr[i],arr[arr[i]-1]);
                break;
        }
        }
       }
       if(notpos(arr)) return false;
       return true;
    }
    
    }
    
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends