#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_depth-measures the depth of a node in a binary tree
 *@tree:pointer to the node to measure the depth
 *Return:depth of node
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	 size_t depth;

	if (tree == NULL)
		return (0);
	else if (tree != NULL)
	{
		depth = 0;
		while (tree->parent != NULL)
		{
			depth += 1;
			tree = tree->parent;
		}
	}
	return (depth);
}
