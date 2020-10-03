#include<bits/stdc++.h>
using namespace std;
#define ll long long

class STACK
{
	int s[1000];
	int top;
public:
	STACK(){top=-1;}
	bool isempty();
	void  push(int x);
	void pop();
	void minele();
}
bool isempty()
{
	if(top==-1)
	{
		return true;
	}
	return false;
}
void push(int x)
{
	top++;
	s[top]=x;
}
int pop()
{
	int x=a[top];
	top--;
	return x;
}
void minele()





int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	stack<ll> s1,aux;
	//s1 will have actual data
	//aux will have min elements.

	ll n; cin>>n;
	ll a[n];

	for(ll i=0;i<n;i++)
	{cin>>a[i];}
	for(ll i=0;i<n;i++)
	{
		push(s1,aux,a[i]);
	}
	min_element(aux);
	


	return 0;
}