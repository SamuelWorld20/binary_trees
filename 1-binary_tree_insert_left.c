#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(struct binary_tree_s));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;

	if (new_node->left)
		new_node->left->parent = new_node;

	return (new_node);
}
