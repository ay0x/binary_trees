#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure of if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	/* Create the new node if parent is not NULL */
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	/* Set parent node's left child as left child of new node, if it exists */
	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}

	/* Set straightforward if left child doesn't exist */
	parent->left = new;

	return (new);
}
