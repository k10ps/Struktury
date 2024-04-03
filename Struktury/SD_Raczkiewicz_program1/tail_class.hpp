

template <typename E>
class TLinkedList;

template <typename E>
class TailNode {
public:
    E value;                //wartsoc elementu
    TailNode<E>* next;    //wskaznik na nastepny wezel/element
    friend class TLinkedList<E>;
};

template <typename E>
class TLinkedList {
public:
    int size;
    TailNode<E>* head; //wskaznik na 1 element
    TailNode<E>* tail; //wskaznik na ostatni element, nie null

public:
    TLinkedList();          //konstruktor
    ~TLinkedList();         //destruktor
    bool empty() const;             //true jezeli pusta
    int ile() const;                //zwraca ilosc elementow
    const E& front() const;         //zwraca wartosc pierwszego ele
    const E& end() const;           //zwraca wartosc ostatniego ele
    void whatSize()const;                //wypisuje size i capacity
    void addFront(const E& val);                    //dodaj na poczatek
    void addEnd(const E& val);                      //dodaj na koniec
    void addMid(const E& val, int where);           //dodaj do srodka
    void removeFront();             //usun z poczatku
    void removeEnd();               //usun z konca
    void removeMid(int where);      //usun z wybranego miejsca
    void wypisz() const;            //wypisz wszystkie elementy
    void lookV(int co) const;              //wyszukiwanie po wartosci
};


