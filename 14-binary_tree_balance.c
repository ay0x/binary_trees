#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary (sub)tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the subtree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	/* If tree does not exist height is 0 */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively find the height for each subtree */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* The height of the tree is 1 plus the higher between left and right */
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary (sub)tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	/* Calculate balance without computing the entire height of each subtree */
	if (tree->left != NULL)
		left_height = (int)binary_tree_height(tree->left);
	else
		left_height = -1;	/* To differentiate empty from non-emty subtree */

	if (tree->right != NULL)
		right_height = (int)binary_tree_height(tree->right);
	else
		right_height = -1;	/* To differentiate empty from non-emty subtree */

	/* Balance is left height - right height */
	return (left_height - right_height);
}
