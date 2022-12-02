#ifndef ELEMENT_H
#define ELEMENT_H


class Element
{
private:
    Element* next;
    Element* previus;
    char m_data;
public:
    Element(char data);
    Element *getNext() const;
    void setNext(Element *newNext);
    Element *getPrevius() const;
    void setPrevius(Element *newPrevius);
    char data() const;
    void setData(char newData);
};

#endif // ELEMENT_H
