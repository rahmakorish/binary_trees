#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_delete-deletes an entire binary tree
 *@tree: pointer to the root node of the tree to delete
 **/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	else if (tree != NULL)
	{
		if (tree->right != NULL)
		{
			if (tree->right->right != NULL)
				free(tree->right->right);
			if (tree->right->left != NULL)
				free(tree->right->left);
			free(tree->right);
		}
		if (tree->left != NULL)
		{
			if (tree->left->left != NULL)
				free(tree->left->left);
			if (tree->left->right != NULL)
				free(tree->left->right);
			free(tree->left);
		}
	}

	free(tree);
}
