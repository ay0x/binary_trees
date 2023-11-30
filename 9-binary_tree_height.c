#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree, or 0 if tree does not exist
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
	if (left_height > right_height)
		return (1 + left_height);

	else
		return (1 + right_height);

	/* Alternative for the if-else statement above */
	/*return ((left_height > right_height ? left_height : right_height) + 1) */
}
