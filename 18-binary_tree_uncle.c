#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of given node, ie sibling of parent node
 * @node: pointer to node to check
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent
			== NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
