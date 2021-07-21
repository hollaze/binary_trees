#include "binary_trees.h"

/**
 * binary_tree_depth - count binary tree depth
 * @tree: actual node
 * Return: depth count
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
