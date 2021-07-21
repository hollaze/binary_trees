#include "binary_trees.h"

/**
 * binary_tree_is_full - from chosen nodes,
 * check if all childs don't have only one node
 * @tree: chosen node
 * Return: 1 if all childs don't have only one node, 0 otherwhise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full_l, is_full_r;

	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	is_full_l = binary_tree_is_full(tree->left);
	is_full_r = binary_tree_is_full(tree->right);

	if (is_full_l >= 1 && is_full_r >= 1)
		return (1);

	return (0);
}
