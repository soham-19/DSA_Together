//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
 
        if (a.length() != b.length())
            return false;
        
        int i = 0;
        int ans = 0;

        while( i < a.length() ){

            ans = ans ^ ( a[i] ^ b[i] );

            i++;
        }
 
        if(ans)
            return false;
        else
            return true;
    }


};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
