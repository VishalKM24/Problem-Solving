#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*

How to get the minimum coins from the available t types of coins
and their sum would be n

E.g., for n=15
and c = {1, 7, 10}

we nees 2 7's and 1 1's coin

*/

// Top Down Method

int minCoin(int n, int c[], int t, int dp[]){
  if(n==0)
    return 0;

  if(dp[n]!=0)
    return dp[n];

  int ans = 922337203;

  for(ll i=0;i<t;i++){
    if(n-c[i] >= 0){
      int step = minCoin(n-c[i],c,t,dp);
      ans = min(step+1,ans);

    }
  }
  dp[n] = ans;
  return dp[n];

}


/*

The approach over this is to find the no of min coins
required to fulfill the the sum from 0
where it is stored and used above leading to complexity of

Time Complexity = O(t*n)

*/

int minCoinBU(int n, int c[], int t, int dp[]){
  
  for(int j=0;j<n;j++){
    dp[j] = INT_MAX;
    for(int i=0;i<=t;i++){
      if(n-c[i] >= 0){
        int subprob = dp[n-c[i]];
        dp[j] = min(dp[j], subprob+1);
      }
    }
  }

  return dp[n];
}


int main(){
  int n,t;
  int dp[100] = {0};
  cout << "The value of sum" << endl;
  cin >> n;
  cout << "no of coins present" << endl;
  cin >> t;
  int c[100];
  cout << "the coins are : " << endl;
  for(ll i=0;i<t;i++)
    cin >> c[i];

  cout << minCoin(n,c,t,dp) << endl;
  cout << minCoinBU(n, c, t, dp) << endl;

}
