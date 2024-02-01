#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: a pointer to the root node.
 * Return: Height of the binary tree. If tree is NULL, return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
		return (0);

	right_height = 0;
	left_height = 0;

	if (tree->right != NULL)
		right_height += binary_tree_height(tree->right) + 1;

	if (tree->left != NULL)
		left_height += binary_tree_height(tree->left) + 1;

	if (right_height > left_height)
		return (right_height);
	return (left_height);
}
