#include<bits/stdc++.h>

#define ll long long int
#define llu unsigned long long int
#define f(n) for(ll i=0;i<n;i++)
#define fr(n) for(ll i=n-1;i>=0;i--)
#define endl "\n"
#define mod 1000000007

using namespace std;

ll c=0;
ll n=0;

class Node 
{ 
public:
	ll data; 
	Node *left, *right; 
	Node(ll data) 
	{ 
		this->data = data; 
		left = right = NULL; 
	} 
}; 

void printreverseInorder(Node* node) 
{ 
	if (node == NULL) 
		return; 
	printreverseInorder(node->right); 
	cout<<node->data<<" ";
	printreverseInorder(node->left); 
} 


int main()
{
	std::ios_base::sync_with_stdio(false);

	Node *root = new Node(4); 
	root->left = new Node(2); 
	root->right	= new Node(5); 
	root->left->left = new Node(1); 
	root->left->right = new Node(3); 
	n=4;
	cout <<"reverse Inorder -"<<endl; 
	printreverseInorder(root); 

	
	return 0;
}
