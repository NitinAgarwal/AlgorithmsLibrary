
/* Tree Traversals : Depth First Traversals - Inorder, Preorder and Postorder 

Algorithm Inorder(tree) 
   1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   2. Visit the root.
   3. Traverse the right subtree, i.e., call Inorder(right-subtree)

Algorithm Preorder(tree)
   1. Visit the root.
   2. Traverse the left subtree, i.e., call Preorder(left-subtree)
   3. Traverse the right subtree, i.e., call Preorder(right-subtree)

Algorithm Postorder(tree)
   1. Traverse the left subtree, i.e., call Postorder(left-subtree)
   2. Traverse the right subtree, i.e., call Postorder(right-subtree)
   3. Visit the root.


Time Complexity: O(n)

Complexity function T(n) — for all problem where tree traversal is involved — can be defined as:

T(n) = T(k) + T(n – k – 1) + c

Where k is the number of nodes on one side of root and n-k-1 on the other side.

Analysis of boundary conditions

Case 1: Skewed tree (One of the subtrees is empty and other subtree is non-empty )

k is 0 in this case.
T(n) = T(0) + T(n-1) + c
T(n) = 2T(0) + T(n-2) + 2c
T(n) = 3T(0) + T(n-3) + 3c
T(n) = 4T(0) + T(n-4) + 4c
----	-----------------
----	----------------
T(n) = (n-1)T(0) + T(1) + (n-1)c
T(n) = nT(0) + (n)c

Value of T(0) will be some constant say d. (traversing a empty tree will take some constants time)

T(n) = n(c+d)
T(n) = (-)(n) (Theta of n)

Case 2: Both left and right subtrees have equal number of nodes.

T(n) = 2T(|_n/2_|) + c

This recursive function is in the standard form (T(n) = aT(n/b) + (-)(n) ) for master method.

Auxiliary Space : If we don’t consider size of stack for function calls then O(1) otherwise O(n)

*/

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;

node* newNode(int data)
{
	node* node = (struct node*)malloc(sizeof(node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return(node);
}

void printPostorder(node* node)
{
	if (node == NULL)
		return;

	printPostorder(node->left);
	printPostorder(node->right);
	printf("%d ", node->data);
}

void printInorder(struct node* node)
{
	if (node == NULL)
		return;

	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
}

void printPreorder(struct node* node)
{
	if (node == NULL)
		return;

	printf("%d ", node->data);
	printPreorder(node->left);
	printPreorder(node->right);
}


int main()
{
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	printf("Preorder traversal of binary tree is : ");
	printPreorder(root);
	printf("\n");

	printf("Inorder traversal of binary tree is : ");
	printInorder(root); 
	printf("\n");

	printf("Postorder traversal of binary tree is : ");
	printPostorder(root);
	printf("\n");

	return 0;	
}


