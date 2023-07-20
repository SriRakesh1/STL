#include <iostream>
#include <vector>

/*C++ program to implement a custom container that behaves 
like a stack using the STL algorithms and data structures.*/

using namespace std;

template <typename T>
class Stack {
private:
    vector<T> x;

public:
    // Push an element onto the stack
    void push(T value) {
        x.push_back(value);
    }

    // Pop the top element from the stack
    void pop() {
        if (!x.empty()) {
            x.pop_back();
        } else {
            cout << "Stack is empty. Cannot pop.\n";
        }
    }

    // Get the top element of the stack
    T top()  {
        if (!x.empty()) 
        {
            return x.back();
        } 
        else
        {
            cout << "Stack is empty. Cannot get top element.\n";
        
            return T();
        }
    }

    // Check if the stack is empty
    bool empty()  {
        return x.empty();
    }

    // Get the number of elements in the stack
    size_t size() const {
        return x.size();
    }
};

int main() {
    Stack<int> stack;

    stack.push(2);
    stack.push(4);
    stack.push(8);
    stack.push(10);

    cout << "Top element: " << stack.top() << endl;
    cout << "Size of stack: " << stack.size() << endl;
    
    stack.pop();

    cout << "After popping size: " << stack.size() << endl;
    cout << "Top element: " << stack.top() << endl;

    return 0;
}
