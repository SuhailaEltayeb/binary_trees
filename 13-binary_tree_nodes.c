#include "binary_trees.h"

/**
 * binary_tree_nodes - function to calculate nodes with 1 child in BT
 * @tree: pointer to root node of tree to calculate its nodes
 *
 * Return: if successful, # on nodes, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t leave_nodes = 0;

	if (tree->right != NULL || tree->left != NULL)
		leave_nodes = leave_nodes + 1;
	leave_nodes += binary_tree_nodes(tree->right);
	leave_nodes += binary_tree_nodes(tree->left);

	return (leave_nodes);
}
