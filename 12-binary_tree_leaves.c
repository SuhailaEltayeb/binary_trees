#include "binary_trees.h"

/**
 * binary_tree_leaves - function to calculate the leaves of BT
 * @tree: pointer to root node for which leaves to be calculated
 *
 * Return: if successful, # of leaves, 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
