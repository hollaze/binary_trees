#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node right
 * @parent: parent node
 * @value: data : int
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	new_node->right = parent->right;

	if (parent->right)
		new_node->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
