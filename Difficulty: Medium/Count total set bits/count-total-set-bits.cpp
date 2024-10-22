//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Eonds


class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        int ans=0,chk;
        int k=log2(n)+1;
        
        for(int i=1;i<=k;i++){
              int ps=pow(2,i);
            int p=((n + 1)/ps)*ps/2;
            int rem=(n+1)%ps;
            rem=(rem<=ps/2)?0:rem-ps/2;
            //cout<<p<<' '<<rem<<" \n";
            ans+=p+rem;
        }
        return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends