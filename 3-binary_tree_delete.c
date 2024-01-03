#include "binary_trees.h"

/**
 * binary_tree_insert_delete - Creates a new binary tree node.
 * @tree: a pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
        free(tree);
}