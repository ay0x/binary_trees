#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is child, return parent's sibling */
	if ((node->parent->left == node) || (node->parent->right == node))
	{
		/* Check if the parent has a valid grandparent */
		if (node->parent->parent != NULL)
		{
			/* Return the sibling of the parent */
			if (node->parent->parent->left == node->parent)
				return (node->parent->parent->right);
			else
				return (node->parent->parent->left);
		}
	}

	return (NULL);	/* Not a child or doesn't have a valid grand parent */
}
