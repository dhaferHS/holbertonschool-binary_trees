#include"binary_trees.h"
/**
 * binary_tree_insert_right -  inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newn;
if (parent == NULL)
	return (NULL);

newn = malloc(sizeof(binary_tree_t));
	if (newn == NULL)
		return (NULL);

newn->right = parent->right;
newn->left = NULL;
newn->n = value;
newn->parent = parent;
parent->right = newn;
if (newn->right)
{
	newn->right->parent = newn;
}
return (newn);
}
