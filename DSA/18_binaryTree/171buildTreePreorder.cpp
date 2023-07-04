/*
    printing order: left ---> root ---> right
    input:                          1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
    expected output using preorder: 1 2 4 5 7 3 6
                            _________________________________________________
                            |                    1                          | level 1
                            |            2                   3              | level 2
                            |        4       5                    6         | level 3
                            |              7                                | level 4
                            |                                               |
                            |_______________________________________________|
    
    - structure of node
        1. data
        2. address of left child
        3. address of right child
*/
#include <iostream>
using namespace std;
static int count;
class node
{
    friend node *buildTree(); // making friend functions
    friend void print_preOrder(node *);

    int data;
    node *left;
    node *right;

public:
    node(int d) : data(d), left(NULL), right(NULL) {}
};

// using the function approach is better than using OOP as interview questions only ask for completing the function logic
/* class tree
{
    node* root; //node* is the data type because it's a node which points to another node
}; */

// preorder build of root node, left subtree & right subtree
node *buildTree() // data type is node* because the address of the newly created node is returned
{
    /*
    *** every node will return the address of itself

    1 (2 4 -1 -1 5 7 -1 -1) (3 -1 6 -1 -1)
        left subtree        right

    */
    int d;
    cin >> d; // data to be stored in node

    if (d == -1)
    {
        return NULL; // stopping condition (will terminate at leaf node)
    }

    node *new_node = new node(d); // initialising new node with the data input from the user

    new_node->left = buildTree();  // recursive building of left tree
    new_node->right = buildTree(); // recursive building of right tree
    return new_node;
}
void print_preOrder(node *root) // takes root node as parameter
{
    count++;
    if (root == NULL)
    {
        return; // base condition
    }

    cout << root->data << " ";  // code
    print_preOrder(root->left); // recursive call to print left and right subtrees
    print_preOrder(root->right);
}

int main()
{
    node *root = buildTree();
    cout << "preorder: \t";
    print_preOrder(root);
}