/* 
    - tree is a hierarchical DS
    - functions:
        creation
            done in '171buildTreePreorder.cpp' itself
        searching
        traversal
            preorder
            inorder
            postorder
            level order
    - follow a recursive structure
    - important for interviews
    - some questions may be done iteratively - such as level order traversal
    ***each node has atmost 2 children
                        _________________________________________________
                        |                    1                          | level 1
                        |            2                   3              | level 2
                        |        4       5           6       -1         | level 3
                        |    -1  -1   -1 -1       -1   7                | level 4
                        |                           -1  -1              |
                        |_______________________________________________|
    
    z. all -1 show termination (NULL)
    a. 1 is a root node
    b. 2 and 3 are children of 1
    c. 3 has one child as 6
    d. 7 has no children

    e. height of tree ---> 4 units
    f. depth of node ---> ex: depth of node 4 is 3

    g. 2 and 3 are siblings
    h. 1 and 2 are ancestors of 4
    i. 7 is a leaf node
    j. 2, 4, 5 is the left subtree of 1
    k. the link connecting each node is a edge

    - printing path of 4 ---> 1/2/4 ---> path goes from root to base
*/