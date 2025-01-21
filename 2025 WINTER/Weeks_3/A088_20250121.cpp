#include <vector>
using namespace std;
// derived from Shobhit Verma
class MinStack
{
public:
    vector<int> arr; // current stack
    vector<int> minStack; // minStack.back() : always smallest value
    MinStack() {}
    
    void push(int val) {
        arr.push_back(val);
        if(minStack.empty() || minStack.back() >= val)
        minStack.push_back(val);
    }
    
    void pop() {
        // minStack.back() is smallest value.
        // lately value is arr.back() , if it is equal to minStack.back(), pop it
        // if is not, minStack.back() (is same as smallest value) is under top position.
        if(arr.back() == minStack.back())
            minStack.pop_back();
        arr.pop_back();
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */