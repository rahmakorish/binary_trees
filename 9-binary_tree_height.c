#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_height-measures the height of a binary tree
 *@tree:the root node of the tree to measure the height.
 *Return:sizeof tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	if (tree == NULL)
		return (0);
	else if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			h += 1;
			if (tree->left->left != NULL || tree->left->right != NULL)
				h += 1;
		}
		else if (tree->right != NULL)
		{
			h += 1;
			if (tree->right->left != NULL || tree->right->right != NULL)
				h += 1;
		}
	}
	return (h);
}
