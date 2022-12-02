#include "element.h"

Element *Element::getNext() const
{
    return next;
}

void Element::setNext(Element *newNext)
{
    next = newNext;
}

Element *Element::getPrevius() const
{
    return previus;
}

void Element::setPrevius(Element *newPrevius)
{
    previus = newPrevius;
}

char Element::data() const
{
    return m_data;
}

void Element::setData(char newData)
{
    m_data = newData;
}

Element::Element(char data) :m_data(data)
{

}
