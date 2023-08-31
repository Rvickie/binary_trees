#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that goes through a
 * binary tree using pre-order traversal
 * @tree: input
 * @func: input
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
