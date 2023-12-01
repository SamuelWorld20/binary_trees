#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: Return the diff btw the heights of the nodes
 * or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = (tree->left == NULL) ? 0 : 1 + binary_tree_balance(tree->left);
	right_height = (tree->right == NULL) ? 0 : 1 + binary_tree_balance(
			tree->right);

	return (left_height - right_height);
}
