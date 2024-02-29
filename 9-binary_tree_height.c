#include "binary_trees.h"

/**
 * binary_tree_height - function to calculate tree height
 * @tree: pointer to root node of tree to which height is measureid
 * Return: if successful, tree height, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t L_subtree = 0, R_subtree = 0;

	if (tree->left)
		L_subtree = 1 + binary_tree_height(tree->left);
	if (tree->right)
		R_subtree = 1 + binary_tree_height(tree->right);
	if (L_subtree > R_subtree)
		return (L_subtree);
	else
		return (R_subtree);
}
