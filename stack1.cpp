#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	stack<ll> s;
	ll n; cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	s.push(a[0]);
	for(ll i=1;i<n-1;i++)
	{
		if(a[i]<s.top())
		{
			s.push(a[i]);
		}
		else
		{
			s.pop();
			s.push(a[i]);
		}
	}
	cout<<s.size();

	return 0;
}