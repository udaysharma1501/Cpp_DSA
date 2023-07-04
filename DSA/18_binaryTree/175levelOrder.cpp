/*
    expected output: 1 2 3 4 5 6 7 (level order)
    ***use iteration and not recursion as, recusrion causes the traversal to go depth first rather than going breadth first
                        _________________________________________________
                        |                    1                          | level 1
                        |            2                   3              | level 2
                        |        4       5                    6         | level 3
                        |              7                                | level 4
                        |                                               |
                        |_______________________________________________|

    - queue uses FIFO

    imp1: ***each time a node is to be popped ---> print that node
                                              ---> pop that node
                                              ---> push all of it's children at end of queue

    imp2: ***each time a NULL is to be popped ---> push another NULL at end of queue
                                              ---> print a new line
    1. push root node
    2. push NULL
    3. pop root
        ***refer imp1
    4. pop null
        ***refer imp2
    5. start popping children in similar fashion
*/
// self try:
/* #include <iostream>
#include <queue>
using namespace std;
class node
{
    friend node *buildTree();
    friend void print_levelOrder(node *);
    int data;
    node *left;
    node *right;

public:
    node(int d) : data(d), left(NULL), right(NULL) {}
};
node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    node *new_node = new node(d);

    new_node->left = buildTree();
    new_node->right = buildTree();

    return new_node;
}
void print_levelOrder(node *root)
{
    queue<int> q1;
    q1.push(root->data);
    q1.push(NULL);

    for (int i = 0; i < 100; i++)
    {
        if (q1.front() == root->data)
        {
            cout << q1.front() << " ";

            q1.pop();

            q1.push(root->left);
            q1.push(root->right);
        }
        else if (q1.front() == NULL)
        {
            cout << endl;
            q1.push(NULL);
        }
    }
}
int main()
{
    node *root = buildTree();
    print_levelOrder(root);
} */
#include <iostream>
#include <queue>
using namespace std;
class node
{
    friend node *buildTree();
    friend void print_levelOrder(node *);
    int data;
    node *left;
    node *right;

public:
    node(int d) : data(d), left(NULL), right(NULL) {}
};
node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    node *new_node = new node(d);

    new_node->left = buildTree();
    new_node->right = buildTree();

    return new_node;
}
void print_levelOrder(node *root)
{
    queue<node *> q1; // what is being pushed inside the queue must either point to the node we're referring to OR should be a copy of the node

    q1.push(root);
    q1.push(NULL);

    while (!q1.empty())
    {
        node *temp = q1.front();

        if (temp == NULL)
        {
            cout << endl;
            q1.pop();

            if (!q1.empty())
            {
                q1.push(NULL); // insert new null for next level
            }
        }
        else
        {
            q1.pop();
            cout << temp->data << " ";
            if (temp->left)
            {
                q1.push(temp->left);
            }
            if (temp->right)
            {
                q1.push(temp->right);
            }
        }
    }
    return;
}
int main()
{
    node *root = buildTree();
    print_levelOrder(root);
}