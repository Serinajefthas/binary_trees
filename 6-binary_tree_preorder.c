#include "binary_trees.h"

/**
 * binary_tree_preorder - treverses tree using pre-order method
 * @tree: pointer to root node
 * @func: pointer to function to call for each node
 * value in node is param to func, ie print  vaue of node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
