#include "binary_trees.h"

/**
 * binary_tree_node - function to create a binary tree node
 * @parent: pointer to parent of newley created node
 * @value: value to be inserted to the new node
 *
 * Return: on success, pointer to new node, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	nnode = malloc(sizeof(binary_tree_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = value;
	nnode->parent = parent;
	nnode->left = NULL;
	nnode->right = NULL;

	return (nnode);
}
