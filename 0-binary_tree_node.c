#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_node-create a tree node
 *@parent:parent of node
 *@value:integer value of node
 *Return:newnode
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new != NULL)
	{
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
	}
	else
	return (NULL);
}
