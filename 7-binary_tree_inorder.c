#include "binary_trees.h"

/**
 * binary_tree_inorder - treverses tree using inorder method
 * @tree: pointer to root node
 * @func: pointer to function to call for each node
 * value in node is param to func, ie print value of node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
