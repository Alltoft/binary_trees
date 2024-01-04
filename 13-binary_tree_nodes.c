#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree:  a pointer to the root node of the tree to measure the size
 * Return: nodes with at least one child of tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t nr, nl;

	if (tree == NULL)
		return (0);

	if ((!tree->left) && (!tree->right))
		return (0);

	nr = binary_tree_nodes(tree->right);
	nl = binary_tree_nodes(tree->left);

	return (nr + nl + 1);
}
