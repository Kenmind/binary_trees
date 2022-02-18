#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates a binary tree clockwise
 * @tree: Pointer to the root node of tree to rotate
 * Return: Rotated tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp = tree, *tmp0 = tree->left, *tmp1 = NULL;

	if (tree == NULL)
		return (tree);
	if ((tree->right == NULL && tree->left == NULL) ||
			(tree->right != NULL && tree->left == NULL))
		return (tree);
	tmp->parent = tmp0;
	tmp->left = NULL;
	if (tmp0->right != NULL)
	{
		tmp1 = tmp0->right;
		tmp1->parent = tmp;
		tmp->left = tmp1;
	}
	tmp0->right = tmp;
	tmp0->parent = NULL;
	return (tmp0);
}
