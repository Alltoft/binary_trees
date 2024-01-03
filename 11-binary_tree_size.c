#include "binary_trees.h"

/*
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the size
 * Return: size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{

    size_t n = 0, nr, nl;

    if (tree == NULL)
        return (0);

    nr = binary_tree_size(tree->right);
    nl = binary_tree_size(tree->left);
    n = nr + nl + 1;
    
    return (n);
}
