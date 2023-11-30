#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with atleast 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;

	/* No nodes if tree is empty */
	if (tree == NULL)
		return (0);

	/* Check if the current node has at least 1 child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* Recursively count nodes in the left and right subtrees */
		left_nodes = binary_tree_nodes(tree->left);
		right_nodes = binary_tree_nodes(tree->right);

		/* include the current node */
		return (1 + left_nodes + right_nodes);
	}
	else
	{
		/* If current node has no child */
		return (0);
	}
}
