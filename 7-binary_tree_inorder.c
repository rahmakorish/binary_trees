#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_inorder-goes through a binary tree using in-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 **/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	else if (tree != NULL || func != NULL)
	{
		if (tree->left != NULL)
		{
			if (tree->left->left != NULL)
				(*func)(tree->left->left->n);
			(*func)(tree->left->n);
			if (tree->left->right != NULL)
				(*func)(tree->left->right->n);
		}
		(*func)(tree->n);
		if (tree->right != NULL)
		{
			if (tree->right->left != NULL)
				(*func)(tree->right->left->n);
			(*func)(tree->right->n);
			if (tree->right->right != NULL)
				(*func)(tree->right->right->n);
		}
	}
}
