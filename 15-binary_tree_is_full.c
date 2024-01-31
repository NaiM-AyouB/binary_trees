#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if tree is full, otherwise 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)

{
	int is_right_full;
	int is_left_full;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->right == NULL || tree->left == NULL)
		return (0);
	else
	{
		is_right_full = binary_tree_is_full(tree->right);
		is_left_full = binary_tree_is_full(tree->left);
		if (is_right_full && is_left_full)
			return (1);
		else
			return (0);
	}
}
