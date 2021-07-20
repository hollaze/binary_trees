#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size;

	if (tree == NULL)
		return (0);

	tree_size = binary_tree_size(tree->left) + 1;
	tree_size += binary_tree_size(tree->right);

	return (tree_size);
}
