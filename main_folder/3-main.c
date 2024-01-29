#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"
#include "../binary_tree_print.c"
#include "../0-binary_tree_node.c"
#include "../3-binary_tree_delete.c"
#include "../2-binary_tree_insert_right.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);
	binary_tree_delete(root);
	return (0);
}
