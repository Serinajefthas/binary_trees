#include "binary_trees.h"

/**
 * binary_tree_postorder - treverses tree using post-order method
 * @tree: pointer to root node
 * @func: pointer to function to call for each node
 * value in node is param to func, ie print value of node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
