#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree,
 * ie max height from curr node to leaf
 * @tree: pointer to root node of tree
 * Return: size, else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t l_height, r_height;

        if (tree == NULL)
                return (0);

        l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
        r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

        return ((l_height > r_height) ? l_height : r_height);
}
/**
 * binary_tree_balance - measures balance factor of tree
 * when balance factor(k) = 0, means tree is balanced, ie height of
 * left and right subtree of any node differe by no more than 1
 * AVL tree is type binary tree with balance factor
 * Find k: height left subtree - height r subtree of given node
 * range -1 to 1 for each node
 * @tree: pointer to root node of tree to measure k
 * Return: balance factor (int)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
