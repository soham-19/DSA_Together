//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOcc(int arr[], int n,int x){
    int start = 0;
    int end = n-1;
    int ans = -1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        
        if(arr[mid] == x){
            end = mid-1;
            ans = mid;
        }
        else if(arr[mid] < x)
            start = mid + 1;
        else
            end = mid -1;
    }
    
    return ans;
}
int lastOcc(int arr[], int n,int k){
    int start = 0;
    int end = n-1;
    int ans = -1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        
        if(arr[mid] == k){
            start = mid+1;
            ans = mid;
        }
        else if(arr[mid] < k)
            start = mid + 1;
        else
            end = mid -1;
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    ans.push_back(firstOcc(arr,n,x));
    ans.push_back(lastOcc(arr,n,x));
    
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
