#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to node to check
 *
 * Return: 1 if node is a root, o otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* The root node has no parent */
	if (node->parent == NULL)
		return (1);

	return (0);
}
