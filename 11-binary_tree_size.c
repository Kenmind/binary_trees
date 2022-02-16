#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of  a binary tree
 * @tree: Pointer to the root of the tree to be measured
 * Return: Size of the tree, else 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size + 1);
}
