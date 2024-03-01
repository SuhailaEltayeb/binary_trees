#include "binary_trees.h"

/**
 * binary_tree_rotate_right- function to right rotate a BT
 * @tree: pointer to root node of tree to be right rotated
 *
 * Return:pointer to new root node of BT
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL)
		return (NULL);
	binary_tree_t *new_root, *right_subtree;

	new_root = tree->left;
	right_subtree = new_root->right;
	new_root->right = tree;
	tree->left = right_subtree;
	if (right_subtree != NULL)
		right_subtree->parent = tree;
	right_subtree = tree->parent;
	tree->parent = new_root;
	new_root->parent = right_subtree;
	if (right_subtree != NULL)
	{
		if (right_subtree->left == tree)
			right_subtree->left = new_root;
		else
			right_subtree->right = new_root;
	}
	return (new_root);
}
