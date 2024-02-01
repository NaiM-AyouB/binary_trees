#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - function that finds the lowest common ancestor of two nodes.
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return: pointer to the lowest common ancestor, NULL no common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t first_depth, second_depth;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second->parent)
	{
		if (first->parent == NULL)
			return (NULL);
		return (first->parent);
	}

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	if (first_depth > second_depth)
		return (binary_trees_ancestor(first->parent, second));
	if (first_depth < second_depth)
		return (binary_trees_ancestor(first, second->parent));
	if (first_depth == second_depth)
		return (binary_trees_ancestor(first->parent, second->parent));
	return (NULL);
}
