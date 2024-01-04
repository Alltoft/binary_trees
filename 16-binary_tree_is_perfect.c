#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree to be measured
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t depth_left, depth_right;

	if (tree == NULL || (!tree->left && !tree->right))
	{
		return (0);
	}

	depth_left = binary_tree_height(tree->left);
	depth_right = binary_tree_height(tree->right);

	if (depth_left > depth_right)
		return (depth_left + 1);
	else
		return (depth_right + 1);
}
/**
 * binary_tree_is_perfect - unction that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/* checks if node is a leaf */
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	/* checks if heights are equal */
	/* if yes, check if both trees are perfect */
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}
