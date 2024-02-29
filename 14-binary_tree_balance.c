#include "binary_trees.h"

/**
 * binary_tree_height_new - Measures the height of a binary tree for
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree
 */
size_t binary_tree_height_new(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height_new(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height_new(tree->right) : 1;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree)
	{
		left_height = (int)binary_tree_height_new(tree->left);
		right_height = (int)binary_tree_height_new(tree->right);
		return (left_height - right_height);
	}

	return (0);
}

