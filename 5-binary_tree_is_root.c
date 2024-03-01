#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_is_root-checks if a given node is a root
 *@node: pointer to the node to check
 *Return:0success
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->right != NULL && node->left != NULL && node->parent == NULL)
		return (1);
	else if (node && !node->parent && !node->left && !node->right)
		return (1);
	return (0);
}
