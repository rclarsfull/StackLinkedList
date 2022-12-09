#include <iostream>
#include "stack.h"

using namespace std;

bool testKammern(string in){
    Stack stack;
    while(in.length()>0){
        if(in.at(0)=='('){
            stack.push('(');
        }
        if(in.at(0)=='['){
            stack.push('[');
        }
        if(in.at(0)=='{'){
            stack.push('{');
        }
        if(in.at(0)=='<'){
            stack.push('{');
        }
        if(in.at(0)==')'){
            if(stack.pop()!='(') return false;
        }
        if(in.at(0)==']'){
            if(stack.pop()!='[') return false;
        }
        if(in.at(0)=='}'){
            if(stack.pop()!='{') return false;
        }
        if(in.at(0)=='>'){
            if(stack.pop()!='<') return false;
        }
        in=in.substr(1);
    }
    if(stack.size>0) return false;
    return true;
}

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

//    cout << boolalpha << testKammern("()[[sdfsdg]]");
    return 0;
}
