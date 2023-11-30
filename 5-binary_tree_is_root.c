#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node is root
 * @node: pointer to the node
 * Return: 1 if is root and 0 if is not root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
