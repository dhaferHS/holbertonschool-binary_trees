#include "binary_trees.h"
/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 *
 * Return: depth or 0 if null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;

	if (tree == NULL)
		return (0);

if (tree->parent == NULL)
	return (0);


depth = binary_tree_depth(tree->parent);
depth++;
return (depth);

}
