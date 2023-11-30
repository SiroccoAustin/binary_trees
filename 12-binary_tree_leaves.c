#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves
 * @tree: pointer to the binary tree
 * Return: number of leaves if successful or 0 if not successful
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (!tree->left && !tree->right) ? 1 : 0;
		count += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	}
	return (count);
}
