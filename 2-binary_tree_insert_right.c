#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to add a right child node
 * @parent: pointer to node to add right child to
 * @value: value to be stored in newely created right node
 *
 * Return: if successful, pointer to new node, NULL otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (parent == NULL)
		return (NULL);
	nnode = binary_tree_node(parent, value);
	if (nnode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		nnode->right = parent->right;
		parent->right->parent = nnode;
	}
	parent->right = nnode;
	nnode->parent = parent;
	return (nnode);
}
