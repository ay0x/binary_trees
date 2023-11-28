#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);

    binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (new == NULL)
        return (NULL);

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;

    if (parent->left != NULL)
    {
        new->left = parent->left;
        new->left->parent = new;
    }

    parent->left = new;

    return (new);
}
