#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: POinter to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	/* If node is left child, return right child */
	if (node->parent->left == node)
		return (node->parent->right);
	/* If node is right child, return left child */
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
