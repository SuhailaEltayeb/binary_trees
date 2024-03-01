#include "binary_trees.h"

/**
 * bst_search - function to find specific value in BT
 * @tree: pointer to root node of tree to search in
 * @value: search value in tree
 *
 * Return: pointer to not with value = value, NULL otherwise
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	while (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		else if (tree->n > value)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (NULL);
}
