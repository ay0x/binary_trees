#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;

	/* No leaves if tree is empty */
	if (tree == NULL)
		return (0);

	/* Condition for a node to be a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count leaves in the left and right subtrees */
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
