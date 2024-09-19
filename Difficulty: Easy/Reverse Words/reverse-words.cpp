//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        string s;
        //str+='.';
        vector<string>ans;
        for(int i=0;i<str.size();i++){
            if(str[i]=='.'){
                ans.push_back(s);
                s="";
            }
            else if(str[i]!='.') s+=str[i];
        }
        ans.push_back(s);
        s="";
        for(int i=ans.size()-1;i>=1;i--) s+=ans[i]+'.';
        s+=ans[0];
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends