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

	int is_perfect_l, is_perfect_r, height_l, height_r;

	if (tree == NULL || tree->left == NULL || tree->right == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	height_l = height(tree->left);
	height_r = height(tree->right);

	if (height_l == height_r)
		return (1);

	is_perfect_l = binary_tree_is_perfect(tree->left);
	is_perfect_r = binary_tree_is_perfect(tree->right);

	return (is_perfect_l && is_perfect_r);
}
