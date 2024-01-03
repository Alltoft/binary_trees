#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: a pointer to the root node of the tree to traverse
 * Return: depth of node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n;

	if (!tree || (!tree->parent))
		return (0);

	n = 1 + binary_tree_depth(tree->parent);

	return (n);
}
