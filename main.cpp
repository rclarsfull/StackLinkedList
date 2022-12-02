#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack stack;
    stack.push('L');
    stack.push('a');
    stack.push('r');
    stack.push('s');
    cout << stack.size<<endl;
    cout << stack.pop() << stack.pop() <<stack.pop() <<stack.pop() <<stack.pop() <<endl;
    cout << stack.size<<endl;
    return 0;
}
