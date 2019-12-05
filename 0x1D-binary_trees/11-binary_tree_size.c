#include "binary_trees.h"

/**
 * main - Code
 *
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
