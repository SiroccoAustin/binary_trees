#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of the binary tree
 * @tree: pointer to binary tree
 * Return: size of the binary tree if sucessful and 0 if not sucessful
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
