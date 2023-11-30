#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_children;
	size_t left_children;

	if (tree == NULL)
		return (0);

	/* Recursively calculate the size of the left and right subtrees */
	left_children = binary_tree_size(tree->left);
	right_children = binary_tree_size(tree->right);

	/* The size of the tree is 1 (for the current node) plus */
	/* the sizes of left and right subtrees */
	return (1 + left_children + right_children);
}
