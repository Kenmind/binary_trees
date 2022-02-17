#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find
 * Return: Node pointer to the uncle, else NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node == node->parent->parent->left->right)
		return (node->parent->parent->right);
	else if (node == node->parent->parent->left->left)
		return (node->parent->parent->right);
	else if (node == node->parent->parent->right->left)
		return (node->parent->parent->left);
	return (node->parent->parent->left);
}
