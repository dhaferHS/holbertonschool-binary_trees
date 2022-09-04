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

/**
 * binary_tree_is_perfect - function that check if is a binary tree is perfect
 * @tree: the tree
 * Return: 0 is failuure 1 if true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left == NULL) || (tree->right == NULL))
		return (0);

	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		if (binary_tree_is_perfect(tree->right) &&
				binary_tree_is_perfect(tree->left))
			return (1);

	}
	return (0);


}
