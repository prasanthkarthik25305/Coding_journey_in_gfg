//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        vector<int>ans,a1,a2;
        if(arr.size()==1) return arr;
        for(int i=0;i<arr.size()/2;i++){ a1.push_back(arr[i]);}
        for(int j=arr.size()-1;j>=arr.size()/2;j--){a2.push_back(arr[j]);}
       int i=0;
        while(i<a1.size() and i<a2.size()){ans.push_back(a2[i]);ans.push_back(a1[i]);i++;}
        while(i<a1.size()){ans.push_back(a1[i]);i++;}
        while(i<a2.size()){ans.push_back(a2[i]);i++;}
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends