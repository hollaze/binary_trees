#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: chosen node
 * Return: uncle of node, NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);

	return (NULL);
}
