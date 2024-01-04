#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t nr, nl;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	nr = 1 + binary_tree_height(tree->right);
	nl = 1 + binary_tree_height(tree->left);

	if (nl > nr)
		return (nl);
	return (nr);
}

/**
 * binary_tree_balance - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height of tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t nr, nl;

	if (!tree)
		return (0);

	nr = 1 + binary_tree_height(tree->right);
	nl = 1 + binary_tree_height(tree->left);

	if ((nl - nr) != 0)
		return (0);

	return (1);
}

/**
 * binary_tree_is_perfect - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: height of tree
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nr, nl, GF, BL;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	BL = binary_tree_balance(tree);
	nr = binary_tree_is_perfect(tree->right);
	nl = binary_tree_is_perfect(tree->left);

	if (nl < nr)
		GF = nl;
	GF = nr;

	if (BL < GF)
		return (BL);
	return (GF);
}
