#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: The tree to be measured
 * Return: Height, else NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t _left, _right;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	_right = binary_tree_height(tree->right) + 1;
	_left = binary_tree_height(tree->left) + 1;
	return (_right > _left ? _right : _left);
}
