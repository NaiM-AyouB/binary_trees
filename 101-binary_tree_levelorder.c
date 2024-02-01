#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_specific_level - function that goes to specific level.
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node.
 * @level: int to the target level.
 */

void binary_tree_specific_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree != NULL)
	{
		if (level == 1)
			func(tree->n);
		else if (level > 1)
		{
			binary_tree_specific_level(tree->left, func, level - 1);
			binary_tree_specific_level(tree->right, func, level - 1);
		}
	}
}

/**
 * binary_tree_preorder - function that goes
 * through a binary tree using level-order traversal.
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level, height;

	if (tree != NULL && func != NULL)
	{
		height = binary_tree_height(tree);

		for (level = 1; level <= height + 1; level++)
			binary_tree_specific_level(tree, func, level);
	}
}
