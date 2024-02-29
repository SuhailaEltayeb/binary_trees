#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find sibling of a node in BT
 * @node: pointer to node to find its siblings
 *
 * Return: pointer to node sibling, or 0 otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
