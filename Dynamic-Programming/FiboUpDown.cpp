#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
Here the data of the computed n is stored in dp array where
that can be accesed if needed further.
*/

ll fibo(ll n, ll dp[]){
  if(n==0 || n==1)
    return n;
  if(dp[n]!=0)
      return dp[n];

  return fibo(n-1, dp) + fibo(n-2, dp);
}

int main(){
  ll n;
  cin >> n;
  ll dp[1000] = {0};

  ll z = fibo(n, dp);
  cout << z << endl;

  return 0;
}