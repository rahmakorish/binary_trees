#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_insert_left-inserts a node as the left-child of another node
 *@parent:parent of node
 *@value:integer value of node
 *Return:newnode
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lefty = malloc(sizeof(binary_tree_t));

	if (lefty == NULL)
		return (NULL);
	if (parent == NULL)
	{
		free(lefty);
		return (NULL);
	}
	else if (lefty != NULL && parent != NULL)
	{
		lefty->n = value;
		if (parent->left == NULL)
		{
			lefty->parent = parent;
			parent->left = lefty;
			lefty->right = NULL;
			lefty->left = NULL;
		}
		else if (parent->left != NULL)
		{
			lefty->left = parent->left;
			parent->left->parent = lefty;
			lefty->parent = parent;
			parent->left = lefty;
			lefty->right = NULL;
		}
		return (lefty);
	}
	else
	return (NULL);
}
