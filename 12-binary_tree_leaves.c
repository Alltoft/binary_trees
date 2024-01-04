#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree:  a pointer to the root node of the tree to measure the size
 * Return: leaves of tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t nr, nl;

	if (tree == NULL)
		return (0);

	if ((!tree->left) && (!tree->right))
		return (1);

	nr = binary_tree_leaves(tree->right);
	nl = binary_tree_leaves(tree->left);

	return (nr + nl);
}
