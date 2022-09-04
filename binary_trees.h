#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void binary_tree_print(const binary_tree_t *);
typedef struct binary_tree_s bst_t; /**Binary Search Tree*/
typedef struct binary_tree_s avl_t; /**AVL Tree*/
typedef struct binary_tree_s heap_t; /**Max Binary Heap*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);/**task 0**/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);/**task1**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);/**task2**/
void binary_tree_delete(binary_tree_t *tree);/**task3**/
int binary_tree_is_leaf(const binary_tree_t *node);/**task4**/
int binary_tree_is_root(const binary_tree_t *node);/**task5**/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));/**task6**/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));/**task7**/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));/**task8**/
size_t binary_tree_height(const binary_tree_t *tree);/**task9**/
size_t binary_tree_depth(const binary_tree_t *tree);/**task10**/
size_t binary_tree_size(const binary_tree_t *tree);/**task11**/
size_t binary_tree_leaves(const binary_tree_t *tree);/**task12**/
size_t binary_tree_nodes(const binary_tree_t *tree);/**task13**/
int binary_tree_balance(const binary_tree_t *tree);/**task14**/
size_t tree_height(const binary_tree_t *tree);/**task14.1**/
int binary_tree_is_full(const binary_tree_t *tree);/**task15**/
int binary_tree_is_perfect(const binary_tree_t *tree);/**task16**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);/**task17**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node);/**task18**/
#endif