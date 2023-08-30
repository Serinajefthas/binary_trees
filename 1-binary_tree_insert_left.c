#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left-child of another node
 * @parent: parent node of new node
 * @value: value of new child node
 * Return: ptr to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
