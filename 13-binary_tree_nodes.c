#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes- counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * Return:number of tree node
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	else if (tree != NULL)
	{
		if (tree->right != NULL || tree->left != NULL)
		{
			nodes += 1;
			if (tree->right->left != NULL || tree->right->right != NULL)
				nodes += 1;
			if (tree->left->left != NULL || tree->left->right != NULL)
				nodes += 1;
		}
	}
		return (nodes);
}
