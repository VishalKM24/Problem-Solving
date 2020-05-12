#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
  Here tried to increase the spac complexity but reduced
  time complexity by storing the value of lower fibonnaci
  which is used to get higher fibonnaci no by just 0 
  computation
*/

int main(){
  ll n;
  cin >> n;
  ll a[1000];
  a[0]=0;
  a[1]=1;
  for(ll i=2;i<=n;i++)
    a[i] = a[i-1]+a[i-2];

  cout << a[n] << endl;
}