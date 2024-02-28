#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if specific node is root
 * @node: node to be checked
 *
 * Return: i if node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
