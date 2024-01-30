#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: pointer to the node.
 * Return: the size of a binary tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = 1;

	if (tree->right != NULL)
		size += binary_tree_size(tree->right);

	if (tree->left != NULL)
		size += binary_tree_size(tree->left);

	return (size);
}
