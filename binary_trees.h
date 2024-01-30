#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function to print binary trees in a pretty way */
void binary_tree_print(const binary_tree_t *);

/* task 0. New node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* task 1. Insert left*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* task 2. Insert right*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* task 3. Delete*/
void binary_tree_delete(binary_tree_t *tree);

/* task 6. Pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

#endif /* _BINARY_TREES_H_ */
