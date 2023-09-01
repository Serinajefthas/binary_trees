#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full, ie all nodes
 * have either zero or two child nodes only
 * @tree: pointer to root nodes of tree
 * Return: 0 if false, 1 if true
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
					binary_tree_is_full(tree->right));
	return (0);
}
