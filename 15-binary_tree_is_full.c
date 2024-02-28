#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_is_full-checks if a binary tree is full
 *@tree:pointer to the root node of the tree to check
 *Return:0success
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	else if (tree != NULL)
	{
		if (tree->left && tree->right)
		{
			return (1);
		}
		else if (tree->left)
			return (1);
	}
	return (0);
}
