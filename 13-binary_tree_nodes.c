#include "binary_trees.h"

/**
 * binary_tree_nodes - count number of child nodes
 * @tree: chosen node
 * Return: number of child nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		number_nodes += 1;

	number_nodes += binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right);

	return (number_nodes);
}
