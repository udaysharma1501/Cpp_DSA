/*
    - FIFO approach
    - literally functions as a queue
    - function
        1. push - data entry at end of queue
        2. pop - data removal from start of queue
        3. front - returns data at front of queue
    - can be implimented using:
        1. dynamic array
        2. linked list
*/
class queue
{
    int *arr; // constant sized array having size input by user which doesnt have the growing functionality
    int curr_size, max_size;
    int front, rear;

public:
    queue(int size = 5) : max_size(size), arr(new int[max_size]), curr_size(0), front(0), rear(max_size - 1) {}
    // insertion always happens at rear which is at max - 1

    bool full() { return curr_size == max_size; } // returns 1 when queue is full
    bool empty() { return curr_size == 0; }       // returns 1 when queue is empty
    void push(int data)
    {
        if (!full())
        {
            // updation of rear
            rear = (rear + 1) % max_size;
            /*
            example:
                rear = 4 and ms = 5
                (rear+1)%ms ---> 5%5 ---> 0

            */
            //                               ***this helps in providing circular functionality***
            arr[rear] = data; // insertion of data at rear
            curr_size++;      // counter to keep check of current size of array
        }
    }
    void pop()
    {
        if (!empty())
        {
            // update front forward
            front = (front + 1) % max_size; // similar functionality
            curr_size--;                    // data removal reduces the size
        }
    }
    int frontelement() { return arr[front]; }
};