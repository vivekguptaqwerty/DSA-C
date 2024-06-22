#include <stdio.h>
#include <malloc.h>

// Define the structure for a node in the binary tree
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new node with given data
struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data;                                 // Setting the data
    n->left = NULL;                                 // Setting the left and right children to NULL
    n->right = NULL;                                // Setting the left and right children to NULL
    return n;                                       // Finally returning the created node
}

// Function to print the root, left, and right nodes
void printNodes(struct node *root)
{
    if (root != NULL)
    {
        printf("Root Node: %d\n", root->data);
        if (root->left != NULL)
        {
            printf("Left Child: %d\n", root->left->data);
        }
        else
        {
            printf("Left Child: NULL\n");
        }
        if (root->right != NULL)
        {
            printf("Right Child: %d\n", root->right->data);
        }
        else
        {
            printf("Right Child: NULL\n");
        }
    }
    else
    {
        printf("The tree is empty.\n");
    }
}

int main()
{
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    // Constructing and linking nodes 5 and 6 to node p1
    struct node *p1_left = createNode(5);
    struct node *p1_right = createNode(6);

    p1->left = p1_left;
    p1->right = p1_right;

    // Constructing and linking node 9 & 10 to node p1_left (node with data 5)
    struct node *p1_left_left = createNode(9);
    struct node *p1_left_right = createNode(10);

    p1_left->left = p1_left_left;
    p1_left->right = p1_left_right;

    // Constructing and linking nodes 7 and 8 to node p2
    struct node *p2_left = createNode(7);
    struct node *p2_right = createNode(8);

    p2->left = p2_left;
    p2->right = p2_right;

    // Constructing and linking node 11 & 12 to node p1_left (node with data 7)
    struct node *p2_left_left = createNode(11);
    struct node *p2_left_right = createNode(12);

    p2_left->left = p2_left_left;
    p2_left->right = p2_left_right;

    

    // Printing the root, left, and right nodes
    printNodes(p);
    printNodes(p1);
    printNodes(p1_left);
    printNodes(p2);
    printNodes(p2_left);
    return 0;
}
