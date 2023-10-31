#include "binary_trees.h"

/**
 * binary_tree_insert_right: insert node as right child
 * ---
 *  @parent: pointer to the node to insert the right child in
 * ---
 *  @value: value to store in the new node
 * ---
 *  Description: if parent alredy have right child, the new node is take place
 *  and the old one set as right of the new child
 * ---
 *  Return: pointer to the new node or NULL in failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;
	return (new);
}
