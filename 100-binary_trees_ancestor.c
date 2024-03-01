#include "binary_trees.h"

/**
 * binary_trees_ancestor - function 2 find lowest common ancestor of2 nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to the lowest common ancestor node
 */
 binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *ancestor1 = first;
	const binary_tree_t *ancestor2 = second;
       
	if (!first || !second)
	       	return (NULL);
	while (ancestor1 != ancestor2)
	{
	       	ancestor1 = ancestor1 ? ancestor1->parent : second;
	       	ancestor2 = ancestor2 ? ancestor2->parent : first;
	}
       	return ((binary_tree_t *)ancestor1);
}
