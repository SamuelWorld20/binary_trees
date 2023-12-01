#include "binary_trees.h"

/** binary_tree_is_full - Check if a binary tree is full.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL) ||
		binary_tree_is_full(tree->left) == 0 ||
		binary_tree_is_full(tree->right) == 0)
		return (0);

	return (1);
}
