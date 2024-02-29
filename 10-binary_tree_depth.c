#include "binary_trees.h"

/**
 * binary_tree_depth - function to calculate the depth of specific node
 * @tree: pointer to node which depth to be calculated
 *
 * Return: if successful, depth of node, 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
	{
		return (0);
	}
}
