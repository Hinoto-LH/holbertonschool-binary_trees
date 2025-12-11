#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full.
*
* @tree: A pointer to the root node of the tree to check.
*
* Return: 0 if tree is NULL.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right_f = 1, left_f = 1;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	if ((tree->left == NULL  && tree->right != NULL) ||
		(tree->left != NULL  && tree->right == NULL))
	{
		return (0);
	}

	left_f  = binary_tree_is_full(tree->left);
	right_f = binary_tree_is_full(tree->right);

			return (left_f && right_f);
}
