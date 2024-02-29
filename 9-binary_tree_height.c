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
	size_t R_height =  binary_tree_height(tree->right);
	size_t L_height =  binary_tree_height(tree->left);

	return (1 + (R_height > L_height ? R_height : L_height));
}
