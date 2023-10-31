#include "binary_trees.h"

/**
 * Insert node as left-child
 * ----
 *  parent point to node to insert the left-child
 * ----
 *  value: value to store in new node
 * ----
 *  Return: pointer to created node or NULL on failure
 *  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
