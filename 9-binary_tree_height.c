#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lft = 0, rgt = 0;

		lft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rgt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lft > rgt) ? lft : rgt);
	}
	return (0);
}
