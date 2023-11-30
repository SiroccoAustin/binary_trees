#include "binary_trees.h"

/**
 * binary_tree_nodes - count number if nodes
 * @tree: pointer to binary tree
 * Return: number of nodes if successful or 0 if not
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (!tree->left || !tree->right) ? 1 : 0;
		count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}
	return (count);
}
