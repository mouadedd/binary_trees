#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds nod's sibling
 * @node: pointer to the node to find the sibling
 * Return: pointer to sibling, else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
