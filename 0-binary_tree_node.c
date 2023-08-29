#include "binary_trees.h"

/**
 * binary_tree_node - creates new node
 * @parent: pointer to parent node that's the new node
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;

	return (new_node);
}
