#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
	{
		return (0);
	}

	left_h = binary_tree_nodes(tree->left);
	right_h = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return ((left_h + right_h) + 1);
	}
	else
	{
		return (0);
	}
}
