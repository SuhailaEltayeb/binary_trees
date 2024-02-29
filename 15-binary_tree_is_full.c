#include "binary_trees.h"

/**
 * binary_tree_is_full - function to check if a binary tree is full
 * @tree: pointer to root node of tree to be checked
 *
 * Return: if full, 1, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->right == NULL && tree->left == NULL) ||
	(tree->right && tree->left))
		return (binary_tree_is_full(tree->right) &&
			binary_tree_is_full(tree->left));
	return (0);
}
