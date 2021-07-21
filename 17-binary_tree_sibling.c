#include "binary_trees.h"

/**
 * binary_tree_sibling - check if node have a sibling
 * @node: chosen node
 * Return: sibling node, NULL if it does not exists
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);
	else if (node->parent->right != node)
		return (node->parent->right);

	return (NULL);
}
