#include "binary_trees.h"

/**
 * binary_tree_node - create a new node
 * @parent: parent node
 * @value: value of the node
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = malloc(sizeof(binary_tree_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = value;
	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;

	return (ptr);
}
