#include "binary_trees.h"

/**
 * binary_tree_is_full - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height of tree
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t nr, nl;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	nr = binary_tree_is_full(tree->right);
	nl = binary_tree_is_full(tree->left);

	if (nl < nr)
		return (nl);
	return (nr);
}
