#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the
 * nodes with at least 1 child in a binary tree.
 * @tree: pointer to the node.
 * Return: the number of nodes with at least 1 child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number;

	if (tree == NULL)
		return (0);

	number = 1;

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->right != NULL)
		number += binary_tree_nodes(tree->right);

	if (tree->left != NULL)
		number += binary_tree_nodes(tree->left);

	return (number);
}
