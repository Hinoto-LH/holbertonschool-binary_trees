#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * 
 * @tree: Pointer to the root node
 *
 * Return: Height of tree, or -1 if tree is NULL
 */

static int height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (-1);

	left_h = height(tree->left);
	right_h = height(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * 
 * @tree: Pointer to the root of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);

	h_left = height(tree->left);
	h_right = height(tree->right);

	/* Same heights */
	if (h_left != h_right)
		return (0);

	/* If its leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Both children must exist and be perfect */
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
