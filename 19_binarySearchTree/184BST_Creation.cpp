#include <iostream>
using namespace std;
class node
{
public:
    int key;
    node *left;
    node *right;

    node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};
node *insert(node *root, int key)
{
    if (root == NULL)
    {
        return new node(key); // base case --> if BST is empty, we create a new node
    }

    // rec case
    if (key < root->key)
    {
        root->left = insert(root->left, key); // input is smaller than the root, hence it goes in the left subtree of that node
    }
    else
    {
        root->right = insert(root->right, key); // input is bigger than the root, hence it goes in the right subtree of that node
    }
    return root;
}
//----------------------------------------print----------------------------------------
void printBST_inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    // left -> root -> right
    printBST_inorder(root->left);
    cout << root->key << " ";
    printBST_inorder(root->right);
}
//----------------------------------------search----------------------------------------
bool search(node *root, int key)
{
    if (root == NULL)
    {
        return false; // base
    }

    if (root->key == key)
    {
        return true; // data found
    }
    if (root->key > key)
    {
        return search(root->left, key); // search in left subtree
    }

    return search(root->right, key); // search in right subtree
}
//----------------------------------------deletion----------------------------------------
/*
*** all cases return the root node, hence it can be done outside of the checks
- 3 types of nodes can be deleted, with each having:
    - 0 children (leaf)
        1. delete directly
        2. return NULL to the root node
    - 1 child
        1. traverse root uptil child
        2. store node (to be deleted) in temp a temp variable
        3. shift root pointer from node to be deleted to the existing child subtree's root
        3. delete temp
        4. return the child to form link between the node above the deleted node and the child of the deleted node
    - 2 children
        1. traverse uptil node to be deleted
        2. replace the next node in the inorder order with the node being deleted
        3. delete original position of the node that has been copied
            - delete (the node that was copied) smallest node in root->right of the node's place which was deleted
*/
node* findMin(node* root) // helper function for 2 child node case deletion
{
    while(root->left != NULL) // going extreme left after going right one time (which took place in the function call)
    {
        root = root->left;
    }
    return root;
}
node *remove(node *root, int key)
{
    // in the below if and 2 else if statements - we search the key, delete it (using the final else statment) and then return the subtree's root to the original root where we started from
    if (root == NULL)
    {
        return NULL;
    }
    else if (key < root->key)
    {
        root->left = remove(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = remove(root->right, key);
    }
    // when the current node matches with the key
    else
    {
        // make 3 cases as mentioned above
        if (root->left == NULL and root->right == NULL) // no children
        {
            delete root;
            root = NULL; // returning happens outside all checks
        }
        else if (root->left == NULL) // 1 child - which is the right subtree of the node being deleted
        {
            node *temp = root;
            root = root->right; // root point shifts to existing child
            delete temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }
        else // 2 children
        {
            node* temp = findMin(root->right); // this traversal and assignment must happen in the right subtree because it contains the adjecent number in the inorder order to the node being deleted

            root->key = temp->key; // 
        }
    }
    return root;
}
int main()
{
    node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    for (int x : arr)
    {
        root = insert(root, x);
    }

    cout << "checking print function: " << endl;
    printBST_inorder(root);
    cout << endl;

    cout << "checking search function: " << endl;
    cout << search(root, 99) << " " << search(root, 6) << endl;
}