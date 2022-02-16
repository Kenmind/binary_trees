#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the parent node of the node to insert the left child in
 * @value: Value to put in the new node
 * Return: Pointer to the new node else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left == NULL)
		parent->left = new;
	else
	{
		new->left = parent->left;
		new->left->parent = new;
		parent->left = new;
	}
	return (new);
}
