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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* If tree does not exist height is 0 */
	if (tree == NULL)
		return (0);

	/* Recursively find the height for each subtree */
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	/* Check if the left and right subtrees have the same height */
	if (left_height == right_height)
	{
		/* If the node is a leaf, return 1 */
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else /* Recursively check if both left and right subtrees are perfect*/
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
