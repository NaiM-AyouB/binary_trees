#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance -  function that measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 * Return: the balance factor, if tree is NULL return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
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

	return (left_height - right_height);
}
