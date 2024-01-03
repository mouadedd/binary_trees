#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	else
		return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height or 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lft = 0, rgt = 0;

		lft = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rgt = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lft > rgt) ? lft : rgt);
	}
	return (0);
}
