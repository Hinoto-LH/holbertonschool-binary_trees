#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: Pre-order traversal visits the current node first,
 *              then the left subtree, then the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || scan == NULL)
        return;

    func(tree->n);                           /* 1. Visit current node */
    binary_tree_preorder(tree->left, func);  /* 2. Traverse left subtree */
    binary_tree_preorder(tree->right, func); /* 3. Traverse right subtree */
}
