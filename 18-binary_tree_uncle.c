#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * 
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	/* If the parent is the left child, uncle is the right child */
	if (grandparent->left == parent)
		return (grandparent->right);

	/* Otherwise, parent is right child, uncle is left child */
	return (grandparent->left);
}
