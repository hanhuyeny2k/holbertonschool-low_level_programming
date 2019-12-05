#include "binary_trees.h"

/**
 * main - Code
 *
 * Return: 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return NULL;
	if (node->parent->n == node->parent->parent->right->n)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
