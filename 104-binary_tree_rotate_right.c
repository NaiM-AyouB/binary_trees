#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that
 * performs a right-rotation on a binary tree
 * @tree: Pointer to the parent node of the node to create
 * Return: pointer to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL)
		return (NULL);

	tree->parent = tree->left;
	tree->parent->parent = NULL;

	tree->left = tree->parent->right;
	tree->parent->right = tree;

	if (tree->left != NULL)
		tree->left->parent = tree;

	return (tree->parent);
}
