#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree anti-clockwise
 * @tree: Pointer to the root node of tree to rotate
 * Return: Rotated tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp = tree, *tmp0 = tree->right, *tmp1 = NULL;

	if (tree == NULL)
		return (tree);
	if ((tree->left == NULL && tree->right == NULL) ||
			(tree->left != NULL && tree->right == NULL))
		return (tree);
	tmp->parent = tmp0;
	tmp->right = NULL;
	if (tmp0->left != NULL)
	{
		tmp1 = tmp0->left;
		tmp1->parent = tmp;
		tmp->right = tmp1;
	}
	tmp0->left = tmp;
	tmp0->parent = NULL;
	return (tmp0);
}
