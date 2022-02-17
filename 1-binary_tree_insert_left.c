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
	binary_tree_t *tmp = parent;

	if (new == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = tmp;
	new->left = NULL;
	new->right = NULL;

	if (tmp->left == NULL)
		tmp->left = new;
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}
	return (new);
}
