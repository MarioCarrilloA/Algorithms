#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

struct tree {
	int num;
	struct tree *left;
	struct tree *right;
};

int insert(struct tree **root, int num)
{
	struct tree *new_node;

	if ((*root) == NULL) {
		new_node = (struct tree*)malloc(sizeof(struct tree));
		if (new_node == NULL)
			exit(1);
		memset(new_node, 0, sizeof(struct tree));
		new_node->num = num;
		new_node->left = NULL;
		new_node->right = NULL;
		(*root) = new_node;

		return EXIT_SUCCESS;
	}

	if (num < (*root)->num)
		insert(&(*root)->left, num);
	else if (num > (*root)->num)
		insert(&(*root)->right, num);

	return EXIT_SUCCESS;
}

int delete(int num);

int preorder(struct tree *root)
{
	if (root != NULL) {
		printf("%d ", root->num);
		preorder(root->left);
		preorder(root->right);
	}
}

int postorder(struct tree *root)
{
	if (root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->num);
	}
}

int inorder(struct tree *root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->num);
		inorder(root->right);
	}
}

int main()
{
	struct tree *root = NULL;

	printf("Binary tree\n");

	insert(&root, 7);
	insert(&root, 10);
	insert(&root, 2);
	insert(&root, 1);
	insert(&root, 19);
	insert(&root, 50);
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	preorder(root);
	printf("\n");

	return EXIT_SUCCESS;
}
