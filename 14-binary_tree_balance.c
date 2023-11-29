#include "binary_trees.h"

/**
 * max - checks maximum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: largest number
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * height - checks for height of the max number
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the max tree
 * or NULL if tree is NULL
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int left_height;
	int right_height;

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (1 + max(left_height, right_height));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: Return the diff btw the heights of the nodes
 * or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int left_height;
	int right_height;

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}
