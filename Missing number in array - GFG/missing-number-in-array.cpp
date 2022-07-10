// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
       /* long x=1;
        sort(array.begin(),array.end());
        for(long i=0;i<n;i++)
        {
            if(x!=array[i])
            {
                return x;
            }
            else{
                x++;
            }
        }
        return 0;*/
        int sum1=0,sum2=0;
        sum1=(n*(n+1))/2;
        for(int i=0;i<array.size();i++)
        {
            sum2+=array[i];
        }
        return sum1-sum2;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends