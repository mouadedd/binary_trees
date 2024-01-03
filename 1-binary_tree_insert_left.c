#include "binary_trees.h"

/**
*binary_tree_insert_left - inserts a node as the left-child of another node
*@parent: pointer to the node to insert
*@value: value to store in the new node
*Return: pointer to the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	(*new_left_node).left = (*parent).left;
	if (new_left_node->left != NULL)
		new_left_node->left->parent = new_left_node;
	(*parent).left = new_left_node;
	return (new_left_node);
}
