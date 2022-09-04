#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the sibling of a node
 * @node: the node
 * Return: NULL or the pointer to the node to find the sibling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *uncle;

	if (node == NULL)
		return (NULL);
	parent = node->parent;

	if (parent == NULL)
		return (NULL);

	uncle = parent->parent;
	if (uncle == NULL)
		return (NULL);

	if (uncle->left != parent)
		return (uncle->left);
	return (uncle->right);

}
