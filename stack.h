#ifndef STACK_H
#define STACK_H
#include "element.h"

class Stack
{
    Element first;
    Element* last;
public:
    Stack();
    char pop();
    void push(char c);
    int size;
};

#endif // STACK_H
