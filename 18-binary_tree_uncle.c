#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - function that finds finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 * Return: pointer to the uncle node, NULL if node is NULL or has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
