#include "binary_trees.h"

/**
 * binary_tree_delete - function to delete all nodes in BT
 * @tree: pointer to root node
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}

