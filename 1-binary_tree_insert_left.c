#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node
 * Return: pointer to the created node - on failure return NULL - and NULL if parent
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

    new_left = binary_tree_node(parent, value);

	if (new_left == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}
    
	parent->left = new_left;

	return (new_left);
}