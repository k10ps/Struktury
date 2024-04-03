#include <iostream>
#include "doubly_class.hpp"

//konstruktor
template <typename E>
DoublyList<E>::DoublyList() {
    size=0; 
    head=new DoublyNode<E>;
    tail=new DoublyNode<E>;
    head->next=tail;
    tail->prev=head;
}

//destruktor
template <typename E>
DoublyList<E>::~DoublyList() { while (!empty()) removeFront(); delete head; delete tail;} // destructor usuwa pierwszy element dopoki lista nie jest pusta



template <typename E>
bool DoublyList<E>::empty() const {return (head->next==tail);}

template <typename E>
const E& DoublyList<E>::front() const { return head->value; }

template <typename E>
const E& DoublyList<E>::end() const { return tail->value; }

template <typename E>
int DoublyList<E>::ile() const {return size;}

template <typename E>
bool DoublyList<E>::closerT(int where) const {
    if(where>=size/2){return 1;};
    return 0;
}

template <typename E>
void DoublyList<E>::whatSize()const{ std::cout<<"Ilosc elementow: "<<size<<std::endl;std::cout<<"Rozmiar: "<<capacity<<std::endl;}

template <typename E>
void DoublyList<E>::wypisz() const{
    DoublyNode<E>* temp = head->next;
    while(temp!= tail) {    //jezeli tail to ostatni element zakoncz
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}


template <typename E>
void DoublyList<E>::add(DoublyNode<E>* temp1, const E& val){
    DoublyNode<E>* nowy = new DoublyNode<E>; 
    nowy->value = val;      //do nowego wezla dodajemy wartosc
    //nastawianie lokalizacji
    nowy->next = temp1;     //wskazuje na nasteony element 
    nowy->prev = temp1->prev;
    temp1->prev->next =nowy;
    temp1->prev = nowy;
    size++;
}

template <typename E>
void DoublyList<E>::addFront(const E& val){add(head->next, val); }

template <typename E>
void DoublyList<E>::addEnd(const E& val){ add(tail, val); }

template <typename E>
void DoublyList<E>::addMid(const E& val, int where){
    if (size==0 || where<=0){addFront(val); return;}
    else if(size<=where-1 ){addEnd(val); return;}
    
    if(closerT(where))//jezeli do where jest blizej od tail zwroci 1
    {
        DoublyNode<E>*temp1=tail;
        for(int i=size; i>where; i--){
            temp1=temp1->prev;//jestesmy na elemencie w ktorego miejsce chcemy wstawic nowy
        }
        add(temp1, val);
    }
    else
    {
        DoublyNode<E>*temp1=head;
        for(int i=0; i<where; i++){
            temp1=temp1->next;//jestesmy na elemencie w ktorego miejsce chcemy wstawic nowy
        }
        add(temp1, val);
    }
}

template <typename E>
void DoublyList<E>::remove(DoublyNode<E>* goner) 
{
    DoublyNode<E>* temp1 = goner->prev; //przed goner
    DoublyNode<E>* temp2 = goner->next; //po goner
    temp1->next = temp2;
    temp2->prev = temp1;
    delete goner;
    size--;
}

template <typename E>
void DoublyList<E>::removeFront() {if(empty()) {std::cout << "Brak elementow" << std::endl;return;} remove(head->next); }

template <typename E>
void DoublyList<E>::removeEnd(){if(empty()) {std::cout << "Brak elementow" << std::endl;return;} remove(tail->prev); }

template <typename E>
void DoublyList<E>::removeMid(int where){
    if (empty()==1 || where<=0){removeFront(); return;}
    else if(size<=where-1 ){removeEnd(); return;}
    
    if(closerT(where))//jezeli do where jest blizej od tail zwroci 1
    {
        DoublyNode<E>*temp1=tail;
        for(int i=size; i>where; i--){
            temp1=temp1->prev;//jestesmy na elemencie ktory chcemy usunac
        }
        remove(temp1);
    }
    else
    {
        DoublyNode<E>*temp1=head;
        for(int i=0; i<where+1; i++){
            temp1=temp1->next;
        }
        remove(temp1);
    }
}

template <typename E>
void DoublyList<E>::lookV(int co)const{
    DoublyNode<E>* temp1 = head->next;
    DoublyNode<E>* temp2 = tail->prev;
    int indexFront = 0;
    int indexBack = size - 1;
    bool found = false;

    while (indexFront <= indexBack) {
        if (temp1->value == co) {
            found = true;
            std::cout << "Element " << co << " znaleziony na indeksie " << indexFront << std::endl;
        }

        if (temp2->value == co && indexBack != indexFront) {
            found = true;
            std::cout << "Element " << co << " znaleziony na indeksie " << indexBack << std::endl;
        }

        temp1 = temp1->next;
        temp2 = temp2->prev;
        indexFront++;
        indexBack--;
    }

    if (!found) {
        std::cout << "Nie znaleziono elementu " << co << " w liscie." << std::endl;
    }
    
}


