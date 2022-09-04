#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height or 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftn, rightn;

	if (tree == NULL)
		return (0);

if (tree->right == NULL && tree->left == NULL)
	return (0);

leftn = binary_tree_height(tree->left);
rightn = binary_tree_height(tree->right);

if (rightn >= leftn)
{
	return (rightn + 1);
}
else
{
return (leftn + 1);
}
}
