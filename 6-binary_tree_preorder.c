#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order method
 * @tree: The binary tree to be traversed
 * @func: Pointer to function called for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree == NULL || func == NULL)
		return;
	printf("%d\n", tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}