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
 * binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: binary_tree_t
 * Return: Widest point
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree->parent)
			left = binary_tree_depth(tree->parent) + 1;
		if (tree->parent)
			right = binary_tree_depth(tree->parent) + 1;
		if (left > right)
			return (left);
		else
			return (right);
	}
}

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 *@tree: pointer to the root node of the tree to check
 *
 * Return: 0 if NULL or not full else return 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *
 * Return: 0 if NULL or not perfect else return 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;
	int full_left = 0;
	int full_right = 0;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (height_left == height_right && full_left && full_right)
		return (1);
	else
		return (0);
}
