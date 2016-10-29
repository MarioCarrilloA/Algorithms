#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct tree {
	int num;
	struct tree *left;
	struct tree *right;
};

int insert(int num);

int delete(int num);

int preorder(struct tree *root);

int postorder(struct tree *root);

int inorder(struct tree *root);

int main()
{
	printf("Binary tree\n");

	return EXIT_SUCCESS;
}
