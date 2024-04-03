#include <iostream>
#include "head_class.hpp"

/*

template <typename E>
SLinkedList<E>::SLinkedList(): head(NULL), size(0) { } //konstruktor

template <typename E>
SLinkedList<E>::~SLinkedList() { while (!empty()) removeFront(); delete head;} // destructor usuwa pierwszy element dopoki lista nie jest pusta

template <typename E>
bool SLinkedList<E>::empty() const {return head == NULL;} //lista pusta zwraca 1

template <typename E>
const E& SLinkedList<E>::front() const { return head -> value; } //wskazujemy na pierwszy element i zwracamy jego wartosc

template <typename E>
int SLinkedList<E>::ile() const {return size;}

template <typename E>
void SLinkedList<E>::wypisz() const{
    SingleNode<E>* current = head;
    while(current!=NULL){std::cout << current->value <<std::endl; current = current->next;} //dopoki nie natrafimy na ostatni element wypisuj
}

template <typename E>
void SLinkedList<E>::whatSize()const{ std::cout<<"Ilosc elementow: "<<size<<std::endl;}
    
template <typename E>
void SLinkedList<E>::addFront(const E& val) 
{ 
    SingleNode<E>* point = new SingleNode<E>;
    point->value = val;
    point->next = head;
    head = point;
    size++;
}

template <typename E>
void SLinkedList<E>::removeFront() 
{
    if(empty()){return;}
    SingleNode<E>* temp = head;     //tymczasowy wskaznik wskazujacy na 1 element listy
    head = head->next;              //do head przypisujemy wskaznik na kolejny element z listy
    delete temp;                     //usuwamy poprzedni head czyli pierwszy element
    size--;
}

template <typename E>
void SLinkedList<E>::addEnd(const E& val)
{   
    SingleNode<E>* nowy = new SingleNode<E>; //tworzymy nowy wskaznik
    nowy->value = val;
    nowy->next = NULL;
    if(empty()){head=nowy;}
    else{
    //temp1 biegnie przed temp2, jezeli temp1 napotka ostatni element temp2 bedzie na przedostatnim i go zwroci
    SingleNode<E>* temp1 = head;
    SingleNode<E>* temp2 = head;
    while(1)
    {
        temp1=temp1->next;
        if(temp1==NULL){break;}
        temp2=temp2->next;
    }
    temp2->next=nowy;
    size++;
    }
}

template <typename E>
void SLinkedList<E>::addMid(const E& val, int where){
    SingleNode<E>* nowy = new SingleNode<E>;
    nowy->value = val;
    if(empty()){head=nowy;}
    else if(where<0 || where>=ile()){std::cout<<"Lokalizacja poza zakresem"<<std::endl; return;}
    else if(where==0){addFront(val); return;}
    else
    {
    SingleNode<E>* temp1 = head;    //element przed wybranym miejscem
    SingleNode<E>* temp2 = head;    //element po wybranym miejscu  
    for(int i=0; i<where-1; i++)
    {
        temp1=temp1->next;
        if(temp1==NULL)
        {
            addEnd(val);
            return;
        }
    }
    if(temp1->next==NULL){addEnd(val);return;}

    temp2=temp1->next;
    temp1->next=nowy;
    nowy->next=temp2;
    size++;
    }
}

template <typename E>
void SLinkedList<E>::removeEnd(){
    if(empty()){std::cout<<"Brak elementow"<<std::endl;}
    else{
    SingleNode<E>* temp1 = head;
    SingleNode<E>* temp2 = head;
    while(1)
    {
        temp1=temp1->next;
        if(temp1->next==NULL){break;}
        temp2=temp2->next;
    }
    //std::cout<<"Usunieto wartosc: "<<temp1->value<<std::endl;
    temp2->next=NULL;
    delete temp1;
    size--;
    }
}

template <typename E>
void SLinkedList<E>::removeMid(int where){
    if(empty()){std::cout<<"Brak elementow"<<std::endl; return;}
    else if(where<0 || where>ile()){std::cout<<"Lokalizacja poza zakresem"<<std::endl; return;}
    else if(where==0){removeFront(); return;}
    else if(where == ile() - 1) {removeEnd();return;}
    else
    {
    SingleNode<E>* temp1 = head;    //element przed wybranym miejscu  
    SingleNode<E>* temp2 = head;    //element usuwany wybranym miejscu
    SingleNode<E>* temp3 = head;    //element po wybranym miejscu  
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
    //std::cout<<"Usunieto wartosc: "<<temp2->value<<std::endl;
    delete temp2;
    size--;
    }

}


template <typename E>
void SLinkedList<E>::lookV(int co) const{
    SingleNode<E>* temp1 = head; 
    int where=0;
    while(temp1!=NULL)
    {
        where++;
        if(temp1->value==co){
            //std::cout<<"Znaleziono: "<<temp1->value<<", na pozycji: "<<where-1<<std::endl;  //where-1 bo zakladamy indexowanie od 0
            return;
        }
        temp1=temp1->next;
    }
    //std::cout << "Nie mozna znalezc wartosci: " << co << std::endl;
}

*/
