#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node as the right-child of another node.
*
* @parent: A pointer to the node to insert the left child in.
* @value: The value to store the new node.
*
* Return: A pointer to the created node, NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = newNode;
	}

	else
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
		temp->parent = newNode;

	}
	return (newNode);
}
