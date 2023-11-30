#include "binary_trees.h"

/**
 * binary_tree_balance - calculates the balance of binary tree
 * @tree: ponter to binary tree
 * Return: balance if sucessful or 0 if not
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (0);
}
