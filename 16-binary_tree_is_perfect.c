#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_is_perfect-checks if a binary tree is perfect
 *@tree:pointer to the root node of the tree to check
 *Return:0success
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return(0);
	else if (tree != NULL)
	{
		if (tree->left && tree->right)
		{
			if (tree->left->left == NULL)
				return (0);
			if(tree->left->left && tree->left->right && tree->right->left && tree->right->right)
				return (1);
		}
	}
	return (0);
}
