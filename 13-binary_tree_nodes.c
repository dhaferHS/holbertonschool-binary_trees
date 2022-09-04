#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of nodes
 *
 * Return:  number of nodes or NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
	return (0);
}
if (tree->right || tree->left)
{
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
else
{
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
}