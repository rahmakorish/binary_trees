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
	/*const binary_tree_t *origin = tree;*/

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		while (tree->left != NULL)
		{
			nodes += 1;
			tree = tree->left;
		}
	}
	/*tree = origin;*/
	if (tree->right != NULL)
	{
		while (tree->right)
		{
			nodes += 1;
			tree = tree->right;
		}
	}
	return (nodes);
}
