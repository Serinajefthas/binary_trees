#include "binary_trees.h"

/**
 * binary_tree_depth - measures height of binary tree,
 * ie max depth from root to node
 * @tree: pointer to node to measure depth
 * Return: size, else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = 0;
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect, ie all
 * leaf nodes at same depth & all non-leaf nodes have exactly 2 children
 * leaf nodes and empty trees are considered perfect
 * @tree: pointer to root node of tree
 * Return: 0 if false, 1 if true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (binary_tree_depth(tree->left) ==
			binary_tree_depth(tree->right))
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}
