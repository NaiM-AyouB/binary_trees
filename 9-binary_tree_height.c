#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: Height of the binary tree. If tree is NULL, return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t height_right;
    size_t height_left;

    height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
    height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;

    return ((height_left > height_right) ? height_left : height_right);
}