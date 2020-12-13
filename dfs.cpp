//Yuvraj singh parihar
//0201CS181096
#include <iostream>
using namespace std;
struct Node
{
	int data;

	struct Node *left, *right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

bool ifNodeExists(struct Node *node, int key)
{
	if (node == NULL)
		return false;

	if (node->data == key)
		return true;
	bool res1 = ifNodeExists(node->left, key);
	if (res1)
		return true;
	bool res2 = ifNodeExists(node->right, key);

	return res2;
}

int main()
{
  freopen("D:/OneDrive/vscode/io/input.txt", "r", stdin);
	freopen("D:/OneDrive/vscode/io/output.txt", "w", stdout);

	// printf("\nEnter tree elements:-\n");
	int arr[7], i;
	for (i = 1; i <= 6; i++)
	{
		scanf("%d", &arr[i]);
	}
	struct Node *root = new Node(arr[1]);
	root->left = new Node(arr[2]);
	root->left->left = new Node(arr[3]);
	root->left->left->left = new Node(arr[4]);
	root->left->right = new Node(arr[5]);
	root->left->right->left = new Node(arr[6]);
	// root->left->right->right = new Node(arr[7]);
	// root->right = new Node(arr[8]);
	// root->right->left = new Node(arr[9]);
	// root->right->right = new Node(arr[10]);

	int key;
	// printf("Enter the element to search: \n");
	scanf("%d", &key);
	if (ifNodeExists(root, key))
		printf("%d found", key);
	else
		printf("%d not found", key);

	return 0;
}
