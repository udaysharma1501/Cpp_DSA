template<typename T>
class node
{
public:
    T data;
    node<T> *next;
    node(T d) : data(d), next(NULL) {}
};

template<typename T>
class stack
{
    node<T> *head;

public:
    stack() : head(NULL) {}

    // top returns top most element
    T top()
    {
        return head->data;
    }
    // push inserts data at head
    void push(T d)
    {
        node<T> *new_node = new node<T>(d);
        new_node->next = head;
        head = new_node;
    }
    // pop removes data at head
    void pop()
    {
        if (head != NULL)
        {
            node<T> *temp_node = head;
            head = head->next;
            delete temp_node;
        }
    }
    bool empty()
    {
        return head==NULL;
    }
};