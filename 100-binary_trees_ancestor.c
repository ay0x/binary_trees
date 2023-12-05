#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if none
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	size_t count1 = 0, i;
	binary_tree_t *ancestor1, *ancestor2;
	binary_tree_t *visited_set1[1024] = {NULL};	/* To store visited ancestor */

	if (first == NULL || second == NULL)
		return (NULL);

	/* Get ancestors for each node */
	ancestor1 = (binary_tree_t *)first;
	ancestor2 = (binary_tree_t *)second;

	/* Traverse from the first node to the root and save the visited ancestors */
	while (ancestor1 != NULL)
	{
		visited_set1[count1++] = ancestor1;
		ancestor1 = ancestor1->parent;
	}

	/**
	 * Traverse the path from the second node
	 * to the root and check for common ancestor
	 */
	while (ancestor2 != NULL)
	{
		/* Check if the current ancestor is in the set of visited ancestors */
		for (i = 0; i < count1; i++)
		{
			if (ancestor2 == visited_set1[i])
				return (ancestor2);
		}
		ancestor2 = ancestor2->parent;
	}

	return (NULL);
}
