#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right- inserts a node as the right-child of another node
 *@parent:parent of node
 *@value:integer value of node
 *Return:newnode
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *righty = malloc(sizeof(binary_tree_t));

	if (righty == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		free(righty);
		return (NULL);
	}
	else if (righty != NULL && parent != NULL)
	{
		righty->n = value;
		if (parent->right == NULL)
		{
			righty->parent = parent;
			parent->right = righty;
			righty->left = NULL;
			righty->right = NULL;
		}
		else
		{
			righty->right = parent->right;
			parent->right->parent = righty;
			righty->parent = parent;
			parent->right = righty;
			righty->left = NULL;
		}
		return (righty);
	}
	else
	{
		return (NULL);
	}
}
