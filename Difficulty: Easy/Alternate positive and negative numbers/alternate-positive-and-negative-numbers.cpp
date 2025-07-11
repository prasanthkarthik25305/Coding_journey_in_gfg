//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int>ev,od;
        int n=arr.size();
        for(auto i:arr){
            if(i>=0) ev.push_back(i);
            else od.push_back(i);
        }
        arr.clear();
        int i=0,j=0;
        while(i<ev.size() and j<od.size()){
            arr.push_back(ev[i]);
            arr.push_back(od[j]);
            i++;
            j++;
        }
        while(j<od.size()){
            arr.push_back(od[j]);
            j++;
        }
         while(i<ev.size()){
            arr.push_back(ev[i]);
            i++;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends