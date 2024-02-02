#include "binary_trees.h"
#include "limits.h"

/**
 * binary_tree_is_bst_helper - Checks if a binary tree is a valid binary search tree.
 * @tree: pointer to the root node of the tree.
 * @min: The value of the smallest node possible.
 * @max: The value of the largest node possible.
 * Return: 1 if tree is a valid binary search tree, otherwise, 0.
 */
int binary_tree_is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree != NULL)
	{
		if (tree->n < min || tree->n > max)
			return (0);
		return (binary_tree_is_bst_helper(tree->left, min, tree->n - 1) &&
				binary_tree_is_bst_helper(tree->right, tree->n + 1, max));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if tree is a valid binary search tree, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_bst_helper(tree, INT_MIN, INT_MAX));
}
