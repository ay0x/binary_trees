#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new;
	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->parent->right = parent;
	}

	parent->right = new;

	return (new);
}
