#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_sibling-finds the sibling of a node
 *@node: pointer to the node to find the sibling
 *Return:sibling node
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*binary_tree_t sibling;*/

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node && node->parent)
	{
		if (node->parent->left != node)
			return (node->parent->left);
		else if (node->parent->right != node)
			return (node->parent->right);
		else
			return (NULL);
	}
	return (NULL);
}
