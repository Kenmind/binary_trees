#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the rigt child of another node
 * @parent: Pointer to the parent node of the node to insert the right child in
 * @value: Value to put in the new node
 * Return: Pointer to the new node else NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp = parent;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = tmp;
	new->left = NULL;
	new->right = NULL;

	if (tmp->right == NULL)
		tmp->right = new;
	else
	{
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
	}
	return (new);
}
