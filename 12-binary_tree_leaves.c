#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the node.
 * Return: the number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);

	leaves = 0;

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->right != NULL)
		leaves += binary_tree_leaves(tree->right);

	if (tree->left != NULL)
		leaves += binary_tree_leaves(tree->left);

	return (leaves);
}
