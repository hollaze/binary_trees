#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: data
 * Return: created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	temp_node = malloc(sizeof(binary_tree_t));

	if (temp_node == NULL)
		return (NULL);

	temp_node->parent = parent;
	temp_node->n = value;
	temp_node->left = NULL;
	temp_node->right = NULL;

	return (temp_node);
}
