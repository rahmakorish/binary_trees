#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_preorder-goes through a binary tree using pre-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	else if (tree != NULL && func != NULL)
	{
		(*func)(tree->n);
			if (tree->left != NULL)
			{
				(*func)(tree->left->n);
				if (tree->left->left != NULL)
				(*func)(tree->left->left->n);
				if (tree->left->right != NULL)
				(*func)(tree->left->right->n);
			}
			if (tree->right != NULL)
			{
				(*func)(tree->right->n);
				if (tree->right->left != NULL)
				(*func)(tree->right->left->n);
				if (tree->right->right != NULL)
				(*func)(tree->right->right->n);
			}
	}
}
