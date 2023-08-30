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
