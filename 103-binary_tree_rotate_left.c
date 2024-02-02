#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that
 * performs a left-rotation on a binary tree
 * @tree: Pointer to the parent node of the node to create
 * Return: pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL || tree->right == NULL)
		return (NULL);

	tree->parent = tree->right;
	tree->parent->parent = NULL;

	tree->right = tree->parent->left;
	tree->parent->left = tree;

	if (tree->right != NULL)
		tree->right->parent = tree;

	return (tree->parent);
}
