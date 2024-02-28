#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_leaves- counts the leaves in a binary tree
 *@tree:root node of the tree to count the number of leaves
 *Return:number of leaves
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		num += 1;
	}
	if (tree->right != NULL)
	{
		num += 1;
	}
	return (num);
}
