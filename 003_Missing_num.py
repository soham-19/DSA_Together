#User function Template for python3


class Solution:
    def MissingNumber(self,array,n):
        # code here
        
        sum = 0
        for i in array:
            sum += i
            
        total = (n*(n+1))//2
        
        return total-sum

#{ 
 # Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    s=Solution().MissingNumber(a,n)
    print(s)