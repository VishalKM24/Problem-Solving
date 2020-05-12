#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
  the chain of the regression equation used here is
  if n is perfectly divisible than goes to n/3
  same if or 2 then goes to n/2
  and commonly reduces by 1 for computing single step
*/

ll minstep(ll n, ll dp[]){
  if(n==1)
    return 0;

  if(dp[n]!=0)
    return dp[n];

  ll op1,op2,op3;

  op1 = op2 = op3 = LONG_MAX;
  
  if(n%3==0)
    op1 = minstep(n/3, dp);
  if(n%2==0)
    op2 = minstep(n/2, dp);
  op3 = minstep(n-1, dp);

  dp[n] = min(min(op1, op2), op3) + 1;

  return dp[n];
}

int main(){
  ll n;
  cin >> n;
  ll dp[100] = {0};
  ll f = minstep(n,dp);
  cout << f << endl;
}
