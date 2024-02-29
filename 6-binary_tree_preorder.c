#include "binary_trees.h"

/**
 * binary_tree_preorder - function to traverse tree using pre-order traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
