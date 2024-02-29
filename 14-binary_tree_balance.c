#include "binary_trees.h"

/**
 * binary_tree_height - function to calculate tree height
 * @tree: pointer to root node of tree to which height is measured
 * Return: if successful, tree height, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t R_subtree = 0, L_subtree = 0;

		if (tree->left != NULL)
		{
			L_subtree = 1 + binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			R_subtree = 1 + binary_tree_height(tree->right);
		}
		return ((L_subtree > R_subtree) ? L_subtree : R_subtree);
	}
	return (0);
}

/**
 * binary_tree_balance - function to calculate BT balance factor
 * @tree: pointer to tree root for which balance factor is calculated
 * Return: if successful, balance factor, 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
