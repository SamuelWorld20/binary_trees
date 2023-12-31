#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value of the new node to create
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new_node;

	new_node = malloc(sizeof(struct binary_tree_s));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
