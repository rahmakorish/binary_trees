#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_uncle- function that finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *Return:node uncle
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *rtu = node->parent->parent->right;
	binary_tree_t *ltu = node->parent->parent->left;
	binary_tree_t *frtu = node->parent->right;
	binary_tree_t *fltu = node->parent->left;

	if (node == NULL)
		return (NULL);
	if (node && node->parent->left != node)
	{
	if (rtu != NULL)
		return (rtu);
	else if (frtu)
		return (frtu);
	}
	else if (node && node->parent->right != node)
	{
		if (node != NULL && ltu != NULL)
		return (ltu);
		else if (fltu)
			return (fltu);
	}
	return (NULL);

}
