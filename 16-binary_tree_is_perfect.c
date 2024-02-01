#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if tree is perfect, otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_right_balance;
	int is_left_balance;

	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) != 0)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	is_right_balance = binary_tree_is_perfect(tree->right);
	is_left_balance = binary_tree_is_perfect(tree->left);
	if (is_right_balance && is_left_balance)
		return (1);
	else
		return (0);
}
