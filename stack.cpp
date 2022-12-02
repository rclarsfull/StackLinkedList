#include "stack.h"
#include <iostream>

Stack::Stack() :first(-1),size(0)
{
first.setPrevius(new Element(-1));
}

char Stack::pop()
{
    char out=-1;
    if(size<1) std::cout << "Error Linked List out of bounds, returned -1" << std::endl;
    if(first.data() != -1 && size>0){
        out=last->data();
       if(last==&first){
           first.setData(-1);
           size--;
       }else{
       Element* temp=last;
       last=last->getPrevius();
       delete temp;
       size--;
       }
    }

    return out;
}

void Stack::push(char c)
{
    if(first.data() == -1) {
        first.setData(c);
        last=&first;
        first.setNext(last);
        last->setPrevius(&first);
    }else{
        Element* next =new Element(c);
        last->setNext(next);
        next->setPrevius(last);
        last=next;
    }
    size++;
}
