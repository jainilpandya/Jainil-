#include<iostream>
#include<vector>
#include<map>

using namespace std;

struct  Node 
{
	int key;
        Node *left,*right;
};
struct Node * newNode(int key1)
{
	struct Node *node = new Node;
	node ->key = key1;
	node ->right=node->left=NULL;
	return node;
}
void getVerticalOrder(Node *root, int hd,map <int ,vector<int>> &m)
{
       if(root == NULL)
	return;
   	m[hd].push_back(root->key);
       getVerticalOrder(root -> left,hd -1, m);
       getVerticalOrder(root ->right,hd+1,m);
}

void printVerticalOrder(Node *root)
{
	//Create a map for creating a vertical order in Binary tree.
	map < int ,vector <int> > m;
       	int hd =0;	
	getVerticalOrder(root ,hd, m);
	map< int,vector<int> > :: iterator it;
	for(auto itr = m.begin() ;itr != m.end(); itr++)
	{
		for(auto i =0 ;i< itr-> second.size();i++)
		{
			cout << itr->second[i]<<" ";
		}
	cout << endl;
	}
}
int main()
{

	Node * root = newNode(1);
	root -> left = newNode(2);
	root -> left -> left = newNode(4);
	root -> left ->right = newNode(5);
        root -> right = newNode(3);
        root -> right ->left = newNode(6);
	root -> right ->right =newNode(7);
        root -> right ->right->left = newNode(8);
	root -> right -> right ->right =newNode(9);
	cout<< "Vertical order of binary tree "<< "\n";
	printVerticalOrder(root);
	return 0;
}	
