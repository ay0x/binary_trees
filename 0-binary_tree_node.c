#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node created
 * @value: Value to put in the node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* Create the node and check if it was created before proceeding */
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	/* Assign the value and parent node to the new node */
	new->n = value;
	new->parent = parent;

	/* Left and right (child nodes / subtrees) should be set to NULL */
	new->left = NULL;
	new->right = NULL;

	return (new);
}
