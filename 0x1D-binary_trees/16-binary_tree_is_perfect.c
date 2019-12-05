#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *@tree: binary_tree_t
 *
 * Return: Longest side
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}


/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *
 * Return: 0 if NULL or not perfect else return 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (left == right)
		return (1);
	else
		return (0);
}
