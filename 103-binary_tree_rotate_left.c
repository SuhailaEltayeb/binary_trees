#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    if (tree == NULL || tree->right == NULL)
        return NULL;

    binary_tree_t *right_child = tree->right;
    binary_tree_t *right_left_child = right_child->left;

    right_child->left = tree;
    tree->right = right_left_child;

    if (right_left_child != NULL)
        right_left_child->parent = tree;

    binary_tree_t *parent = tree->parent;
    tree->parent = right_child;
    right_child->parent = parent;

    if (parent != NULL)
    {
        if (parent->left == tree)
            parent->left = right_child;
        else
            parent->right = right_child;
    }

    return right_child;
}
