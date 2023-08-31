#include "binary_trees.h"

/**
 * binary_tree_nodes - counts num nodes w at least one childi(non-leaf)
 * @tree: pointer to root node
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_cnt, r_cnt;

	if (tree == NULL)
		return (0);

	l_cnt = binary_tree_nodes(tree->left);
	r_cnt = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + l_cnt + r_cnt);
	else
		return (l_cnt + r_cnt);
}
