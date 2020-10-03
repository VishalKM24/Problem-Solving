#include<bits/stdc++.h>

#define ll long long int
#define llu unsigned long long int
#define f(n) for(ll i=0;i<n;i++)
#define fr(n) for(ll i=n-1;i>=0;i--)
#define endl "\n"
#define mod 1000000007
using namespace std;

class node 
{ 
	public: 
	ll data; 
	node* left; 
	node* right; 
}; 

ll height(node* node) 
{ 
	if (node == NULL) 
		return 0; 
	else
	{ 
		ll lh = height(node->left); 
		ll rh = height(node->right); 
		if (lh > rh) 
			return(lh + 1); 
		else return(rh + 1); 
	} 
} 

node* newNode(ll data) 
{ 
	node* Node = new node(); 
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 
	return(Node); 
} 
	

int main()
{
	std::ios_base::sync_with_stdio(false);

	node *root = newNode(1); 

	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	
	cout << "width of tree is " << height(root->left)+height(root->right)+1; 
	
	return 0;
}
