#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
    newNode->right = NULL;
	newNode->left = NULL;

	if (parent->left == NULL)
	{
        newNode->left = newNode;
		parent->left = newNode;

	}

	return (newNode);
}
