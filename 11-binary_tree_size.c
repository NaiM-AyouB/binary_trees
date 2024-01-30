#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: pointer to the node to measure the depth.
 * Return: the size of a binary tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 1;

	if (tree->right != NULL)
		depth += binary_tree_size(tree->right);

	if (tree->left != NULL)
		depth += binary_tree_size(tree->left);

	return (depth);
}
