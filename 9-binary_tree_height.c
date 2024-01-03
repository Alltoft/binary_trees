#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
		return (0);

	if (tree->right)
		n = 1 + binary_tree_height(tree->right);
	if (tree->left)
		n = 1 + binary_tree_height(tree->left);
	return (n);
}
