#include "binary_trees.h"

/**
 * binary_tree_insert_left - functio to insert left new node
 * @parent: pointer to node to insert left node into
 * @value: value to be stored in new node
 *
 * Return: if success, pointer to newely created node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (parent == NULL)
		return (NULL);
	nnode = binary_tree_node(parent, value);

	if (nnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		nnode->left = parent->left;
		parent->left->parent = nnode;
	}
	parent->left = nnode;
	return (nnode);
}
