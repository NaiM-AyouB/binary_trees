#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree.
 * @tree: pointer to the node.
 * Return: the depth of a node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
