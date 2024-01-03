#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t nr, nl;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	nr = 1 + binary_tree_height(tree->right);
	nl = 1 + binary_tree_height(tree->left);

	if (nl > nr)
		return(nl);
	return (nr);
}
