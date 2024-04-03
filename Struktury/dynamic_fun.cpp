#include <iostream>
#include "dynamic_class.hpp"

/*
//konstruktor tworzy nam pusta tablice
template <typename E>
Dynamic<E>::Dynamic(): capacity(10), size(0), array(new int[capacity]) {  }
//destruktor
template <typename E>
Dynamic<E>::~Dynamic(){delete[] array;}


template <typename E>
bool Dynamic<E>::empty()const{return (size==0);}

template <typename E>
void Dynamic<E>::wypisz()const{ for(int i=0; i<size; i++)   { std::cout<<array[i]<<std::endl;}}

template <typename E>
void Dynamic<E>::lookV(int val)const{ 
    for(int i=0; i<size; i++){ 
    if(array[i]==val){
    std::cout<<"Wartosc: "<<val<<" na pozycji: "<<i<<std::endl; 
    return;}
    }
    std::cout<<"Wartosc: "<<val<<"nie ma"<<std::endl;
}

template <typename E>
void Dynamic<E>::lookP(int index)const{std::cout<<"Na: "<<index<<" jest wartosc: "<<array[index]<<std::endl;}

template <typename E>
void Dynamic<E>::whatSize()const{ std::cout<<"Ilosc elementow: "<<size<<std::endl;std::cout<<"Rozmiar: "<<capacity<<std::endl;}

template <typename E>
bool Dynamic<E>::notenough()const{return (size==capacity);}

template <typename E>
void Dynamic<E>::addEnd(int val){if(notenough()){resize(0, val, 0);} else{array[size]=val; size++;}}

template <typename E>
void Dynamic<E>::addFront(int val){

    if(notenough()){resize(1, val, 0);}
    else{
    if(size!=0){relocate(0);}
    array[0]=val; 
    size++;
    }
}

template <typename E>
void Dynamic<E>::addMid(int val, int index){

    if(index>=size){addEnd(val);}
    else if(index==0){addFront(val);}
    else{
    if(notenough()){resize(2, val, index);}
    relocate(index);
    array[index]=val; 
    size++;
    }
}

template <typename E>
void Dynamic<E>::relocate(int index){
    for(int i=size; i>index; i--)
    {
        array[i]=array[i-1];
    }
}


template <typename E>
void Dynamic<E>::resize(int opcja, int val, int index){
    int grow=capacity*2;
    int *temp=new int[grow];      //tymczasowy wskaznik
    for (int i=0; i<capacity; i++)      {temp[i]=array[i];}
    delete [] array;
    capacity=grow;
    array=temp; 
    if(opcja==0){addEnd(val);}
    else if(opcja==1){addFront(val);}
    else if(opcja==2){addMid(val, index);}
}

template <typename E>
void Dynamic<E>::remove(int index){
    int a=array[index]; //zapamietujemyw wartosc by wypisac ja na koncu
    //przesuwamy elementy w lewo
    if(size>0)
    {
    for(int i=index; i<size-1; i++)
    {
        array[i]=array[i+1];
    }
    size--;
    std::cout << "Z " << index << " usunieto: " << a << std::endl;
    }
}

template <typename E>
void Dynamic<E>::removeMid(int index){
    if(size>0){remove(index);}
}

template <typename E>
void Dynamic<E>::removeEnd(){
    if(size>0){array[size]=array[size+1]; size--;}
}

template <typename E>
void Dynamic<E>::removeFront(){
    remove(0);
}


*/
