#include <iostream>
#include "tail_class.hpp"

/*

template <typename E>
TLinkedList<E>::TLinkedList(): head(NULL), tail(NULL), size(0) { }

template <typename E>
TLinkedList<E>::~TLinkedList() { while (!empty()) removeFront(); delete head; delete tail;}



template <typename E>
bool TLinkedList<E>::empty() const {return head == NULL;}

template <typename E>
const E& TLinkedList<E>::front() const { return head->value; }

template <typename E>
const E& TLinkedList<E>::end() const { return tail->value; }

template <typename E>
int TLinkedList<E>::ile() const {return size;}

template <typename E>
void TLinkedList<E>::whatSize()const{ std::cout<<"Ilosc elementow: "<<ile()<<std::endl;}

template <typename E>
void TLinkedList<E>::wypisz() const{
    TailNode<E>* temp = head;
    while(temp != NULL) {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

template <typename E>
void TLinkedList<E>::addFront(const E& val) {
    TailNode<E>* nowy = new TailNode<E>;
    nowy->value = val;
    nowy->next = head;
    head = nowy;
    size++;
    if (tail == NULL) tail = head;
}

template <typename E>
void TLinkedList<E>::removeFront() {
    if(empty()) {return;}
    TailNode<E>* temp = head;
    head = temp->next;
    delete temp;
    size--;
    if (head == NULL) {tail = NULL;};
}

template <typename E>
void TLinkedList<E>::addEnd(const E& val) {
    TailNode<E>* nowy = new TailNode<E>;
    nowy->value = val;
    nowy->next = NULL;
    if(empty()) {head = nowy; tail=nowy;}
    else {
        tail->next = nowy;
        tail = nowy;
    }
    size++;
}

template <typename E>
void TLinkedList<E>::addMid(const E& val, int where) {
    TailNode<E>* nowy = new TailNode<E>;
    nowy->value = val;
    if(empty()) {head = nowy;}
    else if(where < 0 || where > ile()) {std::cout << "Lokalizacja poza zakresem" << std::endl; return;}
    else if(where == 0) {addFront(val);return;}
    else {
        TailNode<E>* temp1 = head;
        for(int i = 0; i < where - 1; i++) 
        {
            temp1 = temp1->next;
            if(temp1 == NULL) {
                addEnd(val);
                return;
            }
        }
        TailNode<E>* temp2 = temp1->next;
        temp1->next = nowy;
        nowy->next = temp2;
    }
    size++;
}

template <typename E>
void TLinkedList<E>::removeEnd() {
    if(empty()) {std::cout << "Brak elementow" << std::endl;return;}
    else if(ile()==1) {removeFront();return;}
    else {
        TailNode<E>* temp1 = head; //musi znalezc przedostatni element zeby moc przekierowac tail na niego, a jego next na null
        while(1)
        {
            if(temp1->next==tail){break;}
            temp1=temp1->next;
        }
        delete tail;
        tail=temp1;
        temp1->next=NULL;
        size--;
    }
}

template <typename E>
void TLinkedList<E>::removeMid(int where) {
    if(empty()) {std::cout << "Brak elementow" << std::endl;return;}
    else if(where < 0 || where>ile()) {std::cout << "Lokalizacja poza zakresem" << std::endl;return;}
    else if(where == 0) {removeFront();return;}
    else if(where == ile() - 1) {removeEnd();return;}
    else
    {
        TailNode<E>* temp1 = head;    //element przed wybranym miejscu  
        TailNode<E>* temp2 = head;    //element usuwany wybranym miejscu
        TailNode<E>* temp3 = head;    //element po wybranym miejscu  
        for(int i=0; i<where-1; i++)
        {
            temp1=temp1->next;
            if(temp1==NULL)
            {
                removeEnd();
                return;
            }
        }
        temp2=temp1->next;
        temp3=temp2->next;
        temp1->next=temp3;
        std::cout<<"Usunieto wartosc: "<<temp2->value<<std::endl;
        delete temp2;
        size--;
    }
}

template <typename E>
void TLinkedList<E>::lookV(int co) const {
    if(tail->value==co){std::cout << "Znaleziono: " << tail->value << ", na pozycji: " << ile()-1 << std::endl; 
    return;}
    else{
    TailNode<E>* temp1 = head;
    int where = 0;
    while(temp1 != NULL) {
        where++;
        if(temp1->value == co) {
            std::cout << "Znaleziono: " << temp1->value << ", na pozycji: " << where - 1 << std::endl;
            return;
        }
        temp1 = temp1->next;
    }
    }
    std::cout << "Nie mozna znalezc wartosci: " << co << std::endl;
}

*/