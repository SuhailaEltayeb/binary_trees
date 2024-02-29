#include "binary_trees.h"

/**
 * binary_tree_height - function to calculate tree height
 * @tree: pointer to root node of tree to which height is measureid
 * Return: if successful, tree height, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t L_subtree = binary_tree_height(tree->left);
	size_t R_subtree = binary_tree_height(tree->right);

	return (1 + L_subtree > R_subtree ? L_subtree : R_subtree);
}
