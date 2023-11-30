#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Use `post-order` (left->right->root) traversal to access all nodes  */
	/* Recursively delete the left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Free the memory of the current node */
	free(tree);
}
