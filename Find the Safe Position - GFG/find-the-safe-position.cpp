//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  void solve(int start, int k, vector<int> &arr){
      
      if(arr.size()==1){
          return;
      }
      int index = (start+k-1)%arr.size();
      arr.erase(arr.begin()+index);
      solve(index,k,arr);
      
  }
    int safePos(int n, int k) {
        // code here
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
        }
        int start = 0;
        solve(start,k,arr);
        return arr[0];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends