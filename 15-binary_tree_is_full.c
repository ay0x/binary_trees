#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both left & right are not NULL, and left & right subtrees are full */
	if (tree->left != NULL && tree->right != NULL)
		return (int)(binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	/* We get here if non of the above conditions are met */
	return (0);
}
