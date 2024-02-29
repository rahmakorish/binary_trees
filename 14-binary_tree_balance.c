#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_balance-measures the balance factor of a binary tree
 * @tree:the root node of the tree to measure the balance factor
 * Return:balance factor of BST
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int  lht = 0, rht = 0;
	const binary_tree_t *origin = tree;

	if (tree == NULL)
		return (0);
	while (tree->left != NULL)
	{
		if (tree->left)
		{
			lht += 1;
			tree = tree->left;
		}
	}
	tree = origin;
	while (tree->right != NULL)
	{
		if (tree->right)
		{
			rht += 1;
			tree = tree->right;
		}
	}
	return (lht - rht);
}
