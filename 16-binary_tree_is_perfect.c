#include "binary_trees.h"

/**
 * height - count binary tree height
 * @tree: actual node
 * Return: biggest height from left or from right
 */

int height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + height(tree->left) : 0;
	height_r = tree->right ? 1 + height(tree->right) : 0;

	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_is_perfect - check if all nodes are at
 * the same height and always in pair (except root)
 * @tree: chosen node
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_perfect_l, is_perfect_r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (height(tree->left) != height(tree->right))
		return (0);

	is_perfect_l = binary_tree_is_perfect(tree->left);
	is_perfect_r = binary_tree_is_perfect(tree->right);

	return (is_perfect_l && is_perfect_r);
}
