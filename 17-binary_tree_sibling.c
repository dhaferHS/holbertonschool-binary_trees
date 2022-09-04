#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: node
 * Return: NULL or the node TO THE sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);

	parent = node->parent;

	if (parent == NULL)
		return (NULL);
	if (parent->right != node)
		return (parent->right);

	return (parent->left);
}
