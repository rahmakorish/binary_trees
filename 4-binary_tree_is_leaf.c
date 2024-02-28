#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_is_leaf- checks if a node is a leaf
 *@node:pointer to the node to check
 *Return:0success
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if(node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
