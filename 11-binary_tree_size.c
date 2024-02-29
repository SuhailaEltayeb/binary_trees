#include "binary_trees.h"

/**
 * binary_tree_size - function to claculate the size of a BT
 * @tree: pointer to root node of tree to which size is measurred
 *
 * Return: if successful, size of tree, 0 otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + (binary_tree_size(tree->right) + binary_tree_size(tree->left)));
}
