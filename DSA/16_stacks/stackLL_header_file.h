template <typename T>
class stack; // fwd declaration

template <typename T>
class node
{
public:
    T data;
    node<T> *next;
    node(T d) : data(d) {}
};

template <typename T>
class stack
{
    node<T> *head;

public:
    stack() : head(NULL) {}

    void push(T data)
    {
        node<T> *new_node = new node<T>(data);
        new_node->next = head;
        head = new_node;
    }
    bool empty()
    {
        return head == NULL;
    }
    T top()
    {
        return head->data;
    }
    void pop()
    {
        if (head != NULL)
        {
            node<T> *temp_node = head;
            head = head->next;
            delete temp_node;
        }
    }
};