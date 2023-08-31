#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a
 * node is a leaf of a binary tree
 * @node: input
 *
 * Return: If the node is a leaf - 1
 * Otherwise - 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
