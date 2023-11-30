#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: pointer to binary tree
 * Return: height of the bonary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t droite, gauche;
	if (tree == NULL)
		return (-1);

	gauche = 1 + binary_tree_height(tree->left);
	droite = 1 + binary_tree_height(tree->right);
	return (gauche > droite ? gauche : droite);
}
