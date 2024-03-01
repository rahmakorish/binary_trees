#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_size- measures the size of a binary tree
 *@tree:the root node of the tree to measure the height.
 *Return:sizeof tree
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;
	const binary_tree_t *origin = tree;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		size = 1;
		while (tree->left)
		{
			size += 1;
			tree = tree->left;
		}
		while (origin->right)
		{
			size += 1;
			origin = origin->right;
		}
	}
	return (size);
}
