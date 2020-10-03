#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ternary(int l,int h,int x,int a[])
{
	if(l<=h)
	{
		int k1=l+(h-l)/3;
		int k2=h-(h-l)/3;
		if(a[k1]==x)
		{
			return k1;
		}
		if(a[k2]==x)
		{
			return k2;
		}
		if(x<a[k1])
		{
			return ternary(l,k1-1,x,a);
		}
		else if(x>a[k2])
		{
			return ternary(k2+1,h,x,a);
		}
		else
		{
			return ternary(k1+1,k2-1,x,a);
		}
		


	}
	return -1;

}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int a[n];

	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int x;
	cin>>x;
	int pos=ternary(0,n,x,a);
	cout<<pos;

	return 0;
}