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
	binary_tree_t *new_root = tree->left;
	binary_tree_t *right_subtree = new_root->right;

	tree->left = right_subtree;
	if (right_subtree != NULL)
		right_subtree->parent = tree;
	new_root->right = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;
	if (new_root->parent != NULL)
	{
		if (new_root->parent->left == tree)
			new_root->parent->left = new_root;
		else
			new_root->parent->right = new_root;
	}
	return (new_root);
}
