#include "binary_trees.h"

binary_tree_t *lowest_common_ancestor_helper(const binary_tree_t *current,
		const binary_tree_t *first, const binary_tree_t *second);
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common
 * ancestor node, or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	return (lowest_common_ancestor_helper(first, second, first));
}

/**
 * lowest_common_ancestor_helper - Recursive helper function to find LCA.
 * @current: Current node in the recursion.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common
 * ancestor node, or NULL if not found.
 */
binary_tree_t *lowest_common_ancestor_helper(const binary_tree_t *current,
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *l, *r;

	if (!current)
		return (NULL);

	if (current == first || current == second)
		return ((binary_tree_t *)current);

	l = lowest_common_ancestor_helper(current->left, first, second);
	r = lowest_common_ancestor_helper(current->right, first, second);

	if (l && r)
		return ((binary_tree_t *)current);

	return (l ? l : r);
}
