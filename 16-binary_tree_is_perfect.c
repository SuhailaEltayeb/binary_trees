#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect -  function to check if a BT is perfect
 * @tree: pointer to tree root to be checked
 *
 * Return: 1 if a perfect BT, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0, actual_nodes = 0, P_nodes_count = 1;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	actual_nodes = binary_tree_size(tree);

	while (height > 0)
	{
		P_nodes_count <<= 1;
		P_nodes_count++;
		height--;
	}
	if (actual_nodes == P_nodes_count)
		return (1);
	else
		return (0);
}

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
 * binary_tree_size - function to calculate the size of a BT
 * @tree: pointer to root node of tree to which size is measured
 *
 * Return: if successful, size of tree, 0 otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}
