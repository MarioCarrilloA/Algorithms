#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct tree {
	int num;
	struct tree *left;
	struct tree *right;
};

int insert(struct tree *root, int num)
{
	struct tree *new_node;

	new_node = (struct tree*)malloc(sizeof(struct tree));
	if (new_node == NULL)
		exit(1);
	memset(new_node, 0, sizeof(struct tree));
	new_node->num = num;
	new_node->left = NULL;
	new_node->right = NULL;

	if (root == NULL) {
		root = new_node;
		return EXIT_SUCCESS;
	}
}

int delete(int num);

int preorder(struct tree *root);

int postorder(struct tree *root);

int inorder(struct tree *root);

int main()
{
	struct tree *root = NULL;
	printf("Binary tree\n");

	return EXIT_SUCCESS;
}
