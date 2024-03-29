#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>

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

/* task 1. Insert left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* task 2. Insert right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* task 3. Delete */
void binary_tree_delete(binary_tree_t *tree);

/* task 4. Is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* task 5. Is root */
int binary_tree_is_root(const binary_tree_t *node);

/* task 6. Pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* task 7. In-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* task 8. Post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* task 9. Height */
size_t binary_tree_height(const binary_tree_t *tree);

/* task 10. Depth */
size_t binary_tree_depth(const binary_tree_t *tree);

/* task 11. Size */
size_t binary_tree_size(const binary_tree_t *tree);

/* task 12. Leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* task 13. Nodes */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* task 14. Nodes */
int binary_tree_balance(const binary_tree_t *tree);

/* task 15. Is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* task 16. Is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* task 17. Sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* task 18. Uncle */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* task 19. Lowest common ancestor */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/* task 20. Level-order traversal */
void binary_tree_specific_level(const binary_tree_t *tree, void (*func)(int), int level);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* task 22. Rotate left */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* task 23. Rotate right */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* task 24. Is BST */
int binary_tree_is_bst_helper(const binary_tree_t *tree, int min, int max);
int binary_tree_is_bst(const binary_tree_t *tree);

#endif /* _BINARY_TREES_H_ */
